import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import Qt.labs.folderlistmodel 2.1

Item {
    id: browser
    property alias path: view.path
    width: 150
    height: 200
    ListView {
        id: view
        property var colors: ["white","#EEEEFF","white","#EEEEFF" ]
        property string path

        anchors.fill: parent
        model: FolderListModel {
            id: folder
            nameFilters: ["*.mp3"]
            folder: view.path
        }
        delegate: FileDelegate { }
        headerPositioning: ListView.OverlayHeader
        header: Rectangle {
            width: browser.width
            height: 20
            color: "blue"
            z:2
            Row {
                anchors.fill: parent
                Text {
                    text: view.path
                    anchors.verticalCenter: parent.verticalCenter
                }
            }
            MouseArea{
                anchors.fill: parent
                onClicked:{
                    if(path.toString() != "file:///")
                        view.path = folder.parentFolder
                }
            }
        }
    }
}
