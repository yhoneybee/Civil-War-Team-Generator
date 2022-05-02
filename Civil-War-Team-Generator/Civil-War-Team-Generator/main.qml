import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListModel {
        id: listModel
        ListElement {
            name: "Apple"
            price: 1000
        }
        ListElement {
            name: "Banana"
            price: 2000
        }
        ListElement {
            name: "Orange"
            price: 3000
        }
    }
    Component {
        id: listDelegate
        Item {
            width: parent.width
            height: 40
            Column {
                Text { text: 'Name:' + name }
                Text { text: 'Price:' + price + 'won' }
            }
            MouseArea {
                anchors.fill: parent
                onClicked: list.currentIndex = index
            }
        }
    }
    Component {
        id: listHighlight
        Rectangle {
            color: 'grey'
            Text {
                anchors.centerIn: parent
                text: 'Hello ' + listmodel.get(list.currentIndex).name
                color: 'white'
            }
        }
    }
    ListView {
        id: listView
        anchors.fill: parent
        model: listModel
        delegate: listDelegate
        highlight: listHighlight
        focus: true
        onCurrentItemChanged: console.log(model.get(list.currentIndex).name + 'selected')
    }
}


