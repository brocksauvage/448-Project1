/********************************************************************************
** Form generated from reading UI file 'calendarday.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARDAY_H
#define UI_CALENDARDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "eventhandler.h"

QT_BEGIN_NAMESPACE

class Ui_calendarday
{
public:
    QLabel *Date;
    eventhandler *widget;
    QTextBrowser *textBrowser;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_6;
    QScrollBar *verticalScrollBar;
    QLabel *label_3;

    void setupUi(QWidget *calendarday)
    {
        if (calendarday->objectName().isEmpty())
            calendarday->setObjectName(QStringLiteral("calendarday"));
        calendarday->resize(840, 524);
        Date = new QLabel(calendarday);
        Date->setObjectName(QStringLiteral("Date"));
        Date->setGeometry(QRect(13, 45, 401, 41));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica"));
        font.setPointSize(36);
        Date->setFont(font);
        widget = new eventhandler(calendarday);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(460, 177, 341, 341));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(-40, 410, 20, 20));
        textBrowser->setStyleSheet(QLatin1String("background: transparent;\n"
"border-image: none;"));
        scrollArea = new QScrollArea(calendarday);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 100, 411, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 409, 399));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 391, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout->addWidget(label_14);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout->addWidget(label_16);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout->addWidget(label_15);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(390, 0, 16, 401));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(calendarday);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 100, 151, 41));
        label_3->setFont(font);
        textBrowser->raise();
        Date->raise();
        widget->raise();
        scrollArea->raise();
        label_3->raise();

        retranslateUi(calendarday);

        QMetaObject::connectSlotsByName(calendarday);
    } // setupUi

    void retranslateUi(QWidget *calendarday)
    {
        calendarday->setWindowTitle(QApplication::translate("calendarday", "Form", 0));
        Date->setText(QString());
        label_4->setText(QApplication::translate("calendarday", "12 AM", 0));
        label_2->setText(QApplication::translate("calendarday", "2 AM", 0));
        label_5->setText(QApplication::translate("calendarday", "4 AM", 0));
        label_7->setText(QApplication::translate("calendarday", "6 AM", 0));
        label_8->setText(QApplication::translate("calendarday", "8 AM", 0));
        label_12->setText(QApplication::translate("calendarday", "10 AM", 0));
        label_14->setText(QApplication::translate("calendarday", "12 PM", 0));
        label_16->setText(QApplication::translate("calendarday", "2 PM", 0));
        label_15->setText(QApplication::translate("calendarday", "4 PM", 0));
        label_9->setText(QApplication::translate("calendarday", "6 PM", 0));
        label_10->setText(QApplication::translate("calendarday", "8 PM", 0));
        label_6->setText(QApplication::translate("calendarday", "10 PM", 0));
        label_3->setText(QApplication::translate("calendarday", "EVENTS", 0));
    } // retranslateUi

};

namespace Ui {
    class calendarday: public Ui_calendarday {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARDAY_H
