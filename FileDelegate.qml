import QtQuick 2.0

Rectangle {
    id:delegate
    width: view.width
    height:15
    color: view.colors[index & 3]
    Row {
        anchors.fill: parent
        Text {
            text: "  " + fileName
            anchors.verticalCenter: parent.verticalCenter
        }
    }
    MouseArea {
        id:mouseArea
        anchors.fill: parent
        onClicked:{
            if(fileIsDir)
                view.path = fileURL
            else{
                var path = fileURL.toString();
                path = path.replace(/^(file:\/{3})/,"/");
                player.fileUrl = path;
                path = path.replace(/^(\/home\/\w{2,10}\/\w{2,10}\/)/,"");
                trackModel.append({title:path})
                hideFolderTree.start();
                folderTree.state = "show"
                treeButton.source = "images/openTree.png"
                player.mediaPlay();
            }
        }
    }
}
