import QtQuick 2.5

Rectangle {
    property alias mouseArea: mouseArea

    width: 800
    height: 500

    Text {
        id: monthheader
        x: 8
        y: 8
        width: 356
        height: 49
        text: qsTr("Month")
        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 28
    }

    MouseArea {
        id: mouseArea
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        Rectangle {
            id: topline
            x: -4
            y: 82
            width: 908
            height: 4
            color: "#ffffff"
            border.width: 5
        }

        Rectangle {
            id: taskline
            x: 639
            y: 0
            width: 4
            height: 607
            color: "#ffffff"
            border.width: 3
        }

        Text {
            id: text1
            x: 8
            y: 52
            width: 680
            height: 34
            text: qsTr("Sun                  Mon                  Tue                   Wed                  Thu                  Fri                     Sat")
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 12

            Rectangle {
                id: rectangle1
                x: 0
                y: 34
                width: 90
                height: 70
                color: "#ffffff"
                border.width: 0

                Text {
                    id: text2
                    x: 0
                    y: 0
                    text: qsTr("A1")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle2
                x: 90
                y: 34
                width: 90
                height: 69
                color: "#ffffff"

                Text {
                    id: text3
                    x: 0
                    y: 0
                    text: qsTr("A2")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle3
                x: 180
                y: 34
                width: 90
                height: 69
                color: "#ffffff"

                Text {
                    id: text4
                    x: 0
                    y: 0
                    text: qsTr("A3")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle4
                x: 270
                y: 34
                width: 90
                height: 69
                color: "#ffffff"

                Text {
                    id: text5
                    x: 0
                    y: 0
                    text: qsTr("A4")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle5
                x: 360
                y: 34
                width: 91
                height: 69
                color: "#ffffff"

                Text {
                    id: text6
                    x: 0
                    y: 0
                    text: qsTr("A5")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle6
                x: 450
                y: 34
                width: 90
                height: 69
                color: "#ffffff"

                Text {
                    id: text7
                    x: 0
                    y: 0
                    text: qsTr("A6")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle7
                x: 540
                y: 34
                width: 90
                height: 69
                color: "#ffffff"

                Text {
                    id: text8
                    x: 0
                    y: 0
                    text: qsTr("A7")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle8
                x: 0
                y: 103
                width: 90
                height: 70
                color: "#ffffff"
                border.width: 0
                Text {
                    id: text9
                    x: 0
                    y: 0
                    text: qsTr("B1")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle9
                x: 0
                y: 173
                width: 90
                height: 70
                color: "#ffffff"
                border.width: 0
                Text {
                    id: text10
                    x: 0
                    y: 0
                    text: qsTr("C1")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle10
                x: 0
                y: 241
                width: 90
                height: 70
                color: "#ffffff"
                border.width: 0
                Text {
                    id: text11
                    x: 0
                    y: 0
                    text: qsTr("D1")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle11
                x: 0
                y: 311
                width: 90
                height: 70
                color: "#ffffff"
                border.width: 0
                Text {
                    id: text12
                    x: 0
                    y: 0
                    text: qsTr("E1")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle12
                x: 90
                y: 103
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text13
                    x: 0
                    y: 0
                    text: qsTr("B2")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle13
                x: 90
                y: 173
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text14
                    x: 0
                    y: 0
                    text: qsTr("C2")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle14
                x: 90
                y: 241
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text15
                    x: 0
                    y: 0
                    text: qsTr("D2")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle15
                x: 90
                y: 311
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text16
                    x: 0
                    y: 0
                    text: qsTr("E2")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle16
                x: 180
                y: 104
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text17
                    x: 0
                    y: 0
                    text: qsTr("B3")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle17
                x: 180
                y: 173
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text18
                    x: 0
                    y: 0
                    text: qsTr("C3")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle18
                x: 180
                y: 241
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text19
                    x: 0
                    y: 0
                    text: qsTr("D3")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle19
                x: 180
                y: 311
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text20
                    x: 0
                    y: 0
                    text: qsTr("E3")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle20
                x: 270
                y: 104
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text21
                    x: 0
                    y: 0
                    text: qsTr("B4")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle21
                x: 270
                y: 173
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text22
                    x: 0
                    y: 0
                    text: qsTr("C4")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle22
                x: 270
                y: 241
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text23
                    x: 0
                    y: 0
                    text: qsTr("D4")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle23
                x: 270
                y: 311
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text24
                    x: 0
                    y: 0
                    text: qsTr("E4")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle24
                x: 360
                y: 103
                width: 91
                height: 69
                color: "#ffffff"
                Text {
                    id: text25
                    x: 0
                    y: 0
                    text: qsTr("B5")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle25
                x: 360
                y: 173
                width: 91
                height: 69
                color: "#ffffff"
                Text {
                    id: text26
                    x: 0
                    y: 0
                    text: qsTr("C5")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle26
                x: 360
                y: 241
                width: 91
                height: 69
                color: "#ffffff"
                Text {
                    id: text27
                    x: 0
                    y: 0
                    text: qsTr("D5")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle27
                x: 360
                y: 311
                width: 91
                height: 69
                color: "#ffffff"
                Text {
                    id: text28
                    x: 0
                    y: 0
                    text: qsTr("E5")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle28
                x: 450
                y: 103
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text29
                    x: 0
                    y: 0
                    text: qsTr("B6")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle29
                x: 450
                y: 173
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text30
                    x: 0
                    y: 0
                    text: qsTr("C6")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle30
                x: 450
                y: 242
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text31
                    x: 0
                    y: 0
                    text: qsTr("D6")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle31
                x: 450
                y: 311
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text32
                    x: 0
                    y: 0
                    text: qsTr("E6")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle32
                x: 540
                y: 103
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text33
                    x: 0
                    y: 0
                    text: qsTr("B7")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle33
                x: 540
                y: 173
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text34
                    x: 0
                    y: 0
                    text: qsTr("C7")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle34
                x: 540
                y: 242
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text35
                    x: 0
                    y: 0
                    text: qsTr("D7")
                    font.pixelSize: 12
                }
            }

            Rectangle {
                id: rectangle35
                x: 540
                y: 311
                width: 90
                height: 69
                color: "#ffffff"
                Text {
                    id: text36
                    x: 0
                    y: 0
                    text: qsTr("E7")
                    font.pixelSize: 12
                }
            }
        }
    }

}
