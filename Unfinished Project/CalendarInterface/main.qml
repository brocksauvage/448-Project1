import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 900
    height: 500
    title: qsTr("EECS 448 Project Calendar")

    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }
    }
}
