import QtQuick 2.0

Item{
    id: customText
    property rect rTextGeometry
    property alias text: text.text
    property bool bold: true
    property var pixelSize: 30

    Text{
        anchors.fill: parent
        id: text
        text: ""
        font.bold: bold
        font.pixelSize: pixelSize
    }

    onRTextGeometryChanged:
    {
        customText.x = rTextGeometry.x
        customText.y = rTextGeometry.y
        customText.width = rTextGeometry.width
        customText.height = rTextGeometry.height
    }
}
