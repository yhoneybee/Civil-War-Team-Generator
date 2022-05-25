import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 6.2
import "."

Window{
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Text {
        id: text1
        width: 300
        height: 100
        text: qsTr("Hello World Hello World Hello World Hello World")
        wrapMode: Text.WrapAnywhere
        font.pixelSize: 30

        Rectangle{
            anchors.fill: parent
            border.color: "red"
            color: "transparent"
        }
    }
    CustomText
    {
        id: customText1
        rTextGeometry: Qt.rect(0,150,300,100)
        text: "customText1"
    }
    CustomText
    {
        id: customText2
        rTextGeometry: Qt.rect(0,300,300,100)
        text: "customText2"
        bold: false
    }
}



/*##^##
Designer {
    D{i:0;formeditorZoom:0.75}
}
##^##*/
