import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import Qt.labs.folderlistmodel 2.1

Window {
    width: 700
    height: 400
    visible: true

    Image{
        anchors.fill: parent;
        source:"images/backgroundjpg"
    }

    property int progres : player.progress
    property int duration : player.duration
    property string song_title : player.title
    property string song_sec : player.second
    property string song_min : player.minute

    Image{
        width: 600
        height: 270
        x: 50
        y: 50
        source:"images/secondBackground.png"

        //============= Info Area ==================
        Image{
            id: infoArea
            width: 500
            height: 120
            x: 50
            y: 30
            source: "images/infoBar.png"

            Text{
                id: songInfo
                y:55
                x:50
                text: song_title
                color:"white"
            }

              Text{
                id: songDuration
                y:40
                x:50
                text: "Minutes: "+ song_min + "  Seconds: "+ song_sec
                color:"white"
            }

        }
        //===================  Progress Slider ==================

        Slider {
            id:progressSlider
            y:165
            x:75
            width:450
            maximumValue: duration
            minimumValue: 0
            value: progres
            onValueChanged:
                player.progress = value
        }
        //=================== Media Buttons==================

        Grid{
            x:105
            y:185
            columns :5
            spacing: 10
            Image{ id: playButton; source: "images/play.png"; width: 70; height: 70
                MouseArea {
                    anchors.fill: parent
                    onPressed:
                        playButton.source = "images/playPressed.png"
                    onClicked:
                        player.mediaPlay();
                    onReleased:
                        playButton.source= "images/play.png"
                }
            }

            Image{ id: pauseButton; source: "images/pause.png"; width: 70; height: 70
                MouseArea {
                    anchors.fill: parent
                    onPressed:
                        pauseButton.source = "images/pausePressed.png"
                    onClicked:
                        player.mediaPause();
                    onReleased:
                        pauseButton.source= "images/pause.png"
                }
            }
            Image{ id: stopButton; source: "images/stop.png"; width: 70; height: 70
                MouseArea {
                    anchors.fill: parent
                    onPressed:
                        stopButton.source = "images/stopPressed.png"
                    onClicked:
                        player.mediaStop();
                    onReleased:
                        stopButton.source= "images/stop.png"
                }
            }
            Image{ id: nextButton; source: "images/next.png"; width: 70; height: 70
                MouseArea {
                    anchors.fill: parent
                    onPressed:
                        nextButton.source = "images/nextPressed.png"
                    onClicked:
                        player.mediaNext();
                    onReleased:
                        nextButton.source= "images/next.png"
                }
            }
            Image{ id: previousButton; source: "images/previous.png"; width: 70; height: 70
                MouseArea {
                    anchors.fill: parent
                    onPressed:
                        previousButton.source = "images/previousPressed.png"
                    onClicked:
                        player.mediaPrevious();
                    onReleased:
                        previousButton.source= "images/previous.png"
                }
            }
        }

    }
    //=================== Top Bar ==================

    Image{
        id:topBar
        width: 700
        height: 75
        y:-45
        source:"images/topBar.png"
        state: "show"

        Slider {
            value:50
            id:volumeSlider
            maximumValue: 100
            minimumValue: 0
            width: 250
            y:15
            x: topBar.width/2-width/2
            onValueChanged:
                player.volume = value
        }
        //=================== Top Bar Button==================

        Image{
            id:topBarButton
            width: 40
            height: 40
            x:parent.width/2-width/2
            y:35

            source:"images/showButton.png"
            MouseArea {
                anchors.fill: parent
                onClicked:{
                    if(topBar.state == "show"){
                        topBarButton.rotation = 180
                        showTopBar.start();
                        topBar.state = "hide"
                    }else if(topBar.state == "hide"){
                        topBarButton.rotation = 0
                        hideTopBar.start();
                        topBar.state = "show"
                    }
                }
            }
        }

        NumberAnimation {
            id:showTopBar
            target: topBar
            properties: "y";
            from: -45
            to: 0
            duration: 500;
            easing.type:Easing.InOutQuad
        }

        NumberAnimation {
            id:hideTopBar
            target: topBar
            properties: "y";
            from: 0
            to: -45
            duration: 500;
            easing.type:Easing.InOutQuad
        }
    }
    //=================== Right Bar==================

    Image{
        id:rightBar
        width: 250
        height: 400
        x:680
        source: "images/rightBar.png"
        state:"show"

        Item {
            width: 250; height: 350
            y:70
            x:30

            ListModel{
                id: trackModel
            }

            Component{
                id: componentDelegate
                Item{
                    width: parent.width
                    height:30
                    Row{
                        Text{ text: title}
                    }
                    MouseArea{
                        anchors.fill: parent
                        onClicked:{
                            modelViewer.currentIndex = index
                            player.mediaJump(index);
                        }
                    }
     //================== Delete song ===============
                    Image {
                        x:185
                        width: 30
                        height: 30
                        source: "images/delete.png"
                        MouseArea{
                            anchors.fill: parent
                            onClicked: {
                                player.mediaRemove(index);
                                trackModel.remove(index);
                            }
                        }
                    }
                }
            }

            ListView {
                id: modelViewer
                anchors.fill: parent
                model: trackModel
                delegate: componentDelegate
                highlight: Rectangle {
                    color: "grey"
                    radius:5
                }
                focus: true
            }
        }


        //=================== Dialog Button==================

        Image{
            id:openDialog
            width: 110
            height: 30
            x:125
            y:22
            source: "images/openFile.png"
            MouseArea{
                anchors.fill: parent
                onPressed:
                    parent.source = "images/openFilePressed.png"
                onClicked:
                    fileDialog.open()
                onReleased:
                    parent.source= "images/openFile.png"
            }
        }

        //=================== Tree View Folder==================
        Rectangle{
            id:folderTree
            width: parent.width
            height: 317
            x: 250
            y: 61
            color: "transparent"
            state:"show"

            FileBrowser {
                anchors.fill: parent
                path: "file:///home/"
            }
        }
//=================== Tree View Folder Button==================
        Image{
                 id: treeButton
                 source: "images/openTree.png"
                 width: 100
                 height: 30
                 x:45
                 y:22

                 MouseArea {
                     anchors.fill: parent
                     onPressed:
                         parent.source = "images/openTreePressed.png"
                     onClicked:{
                         if(folderTree.state == "show"){
                             showFolderTree.start();
                             treeButton.source = "images/openTracklist.png"
                             folderTree.state = "hide"
                         }else if(folderTree.state == "hide"){
                             hideFolderTree.start();
                             folderTree.state = "show"
                         }
                     }
                     onReleased:
                         parent.source = "images/openTree.png"
                 }
             }

             NumberAnimation {
                 id:showFolderTree
                 target: folderTree
                 properties: "x";
                 from: 250
                 to: 28
                 duration: 500;
                 easing.type:Easing.InOutQuad
             }

             NumberAnimation {
                 id:hideFolderTree
                 target: folderTree
                 properties: "x";
                 from: 28
                 to: 250
                 duration: 500;
                 easing.type:Easing.InOutQuad
             }



        //===================Right Bar Button==================
        Image{
            id: rightBarButton
            width: 40
            height: 40
            x:-10
            y:parent.height/2-height/2
            rotation: 90
            source:"images/showButton.png"

            MouseArea {
                anchors.fill: parent
                onClicked:{
                    if(rightBar.state == "show"){
                        rightBarButton.rotation = 270
                        showRightBar.start();
                        rightBar.state = "hide"
                    }else if(rightBar.state == "hide"){
                        rightBarButton.rotation = 90
                        hideRightBar.start();
                        rightBar.state = "show"
                    }
                }
            }
        }


        NumberAnimation {
            id:showRightBar
            target: rightBar
            properties: "x";
            from: 680
            to: 455
            duration: 500;
            easing.type:Easing.InOutQuad
        }

        NumberAnimation {
            id:hideRightBar
            target: rightBar
            properties: "x";
            from: 455
            to: 680
            duration: 500;
            easing.type:Easing.InOutQuad
        }

    }


    //=================== File dialog ==================
    FileDialog{
        id: fileDialog
        title: "Choose file to add"
        folder: shortcuts.home
        nameFilters: [ "Audio files (*.mp3 *.wav)", "All files (*)" ]

        onAccepted: {
            var path = fileDialog.fileUrl.toString();
            console.log(path)

            path = path.replace(/^(file:\/{3})/,"/");
            player.fileUrl = path;

            path = path.replace(/^(\/home\/\w{2,10}\/\w{2,10}\/)/,"");

            trackModel.append({title:path})
        }
        onRejected:{
            console.log("Rejected")
        }
        Component.onCompleted: visible = false
    }

}




