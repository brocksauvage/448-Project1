/********************************************************************************
** Form generated from reading UI file 'eventhandler.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTHANDLER_H
#define UI_EVENTHANDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventhandler
{
public:
    QTextBrowser *EventList;
    QPushButton *Add1;
    QPushButton *delete_2;
    QPushButton *events;

    void setupUi(QWidget *eventhandler)
    {
        if (eventhandler->objectName().isEmpty())
            eventhandler->setObjectName(QStringLiteral("eventhandler"));
        eventhandler->resize(608, 413);
        EventList = new QTextBrowser(eventhandler);
        EventList->setObjectName(QStringLiteral("EventList"));
        EventList->setGeometry(QRect(10, 10, 311, 301));
        Add1 = new QPushButton(eventhandler);
        Add1->setObjectName(QStringLiteral("Add1"));
        Add1->setGeometry(QRect(10, 310, 61, 32));
        delete_2 = new QPushButton(eventhandler);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(260, 310, 61, 32));
        events = new QPushButton(eventhandler);
        events->setObjectName(QStringLiteral("events"));
        events->setGeometry(QRect(90, 310, 151, 32));

        retranslateUi(eventhandler);

        QMetaObject::connectSlotsByName(eventhandler);
    } // setupUi

    void retranslateUi(QWidget *eventhandler)
    {
        eventhandler->setWindowTitle(QApplication::translate("eventhandler", "Form", 0));
        Add1->setText(QApplication::translate("eventhandler", "Add+", 0));
        delete_2->setText(QApplication::translate("eventhandler", "Del-", 0));
        events->setText(QApplication::translate("eventhandler", "Click to See Events", 0));
    } // retranslateUi

};

namespace Ui {
    class eventhandler: public Ui_eventhandler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTHANDLER_H
