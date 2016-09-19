/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "april.h"
#include "august.h"
#include "december.h"
#include "february.h"
#include "january.h"
#include "march.h"
#include "may.h"
#include "november.h"
#include "october.h"
#include "september.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *October;
    QPushButton *March;
    QPushButton *January;
    QPushButton *November;
    QPushButton *August;
    QPushButton *December;
    QPushButton *February;
    QPushButton *April;
    QPushButton *May;
    QPushButton *September;
    QLabel *label;
    class August *page_2;
    QPushButton *pushButton;
    class September *page_3;
    QPushButton *pushButton_2;
    class October *page_4;
    QPushButton *pushButton_3;
    class November *page_5;
    QPushButton *pushButton_4;
    class December *page_6;
    QPushButton *pushButton_5;
    class January *page_7;
    QPushButton *pushButton_6;
    class February *page_8;
    QPushButton *pushButton_7;
    class March *page_9;
    QPushButton *pushButton_8;
    class April *page_10;
    QPushButton *pushButton_9;
    class May *page_11;
    QPushButton *pushButton_10;
    QWidget *page_12;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(842, 524);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 841, 451));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 60, 721, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        October = new QPushButton(gridLayoutWidget);
        October->setObjectName(QStringLiteral("October"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(October->sizePolicy().hasHeightForWidth());
        October->setSizePolicy(sizePolicy);
        October->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/October.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(October, 0, 2, 1, 1);

        March = new QPushButton(gridLayoutWidget);
        March->setObjectName(QStringLiteral("March"));
        sizePolicy.setHeightForWidth(March->sizePolicy().hasHeightForWidth());
        March->setSizePolicy(sizePolicy);
        March->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/March.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(March, 1, 3, 1, 1);

        January = new QPushButton(gridLayoutWidget);
        January->setObjectName(QStringLiteral("January"));
        sizePolicy.setHeightForWidth(January->sizePolicy().hasHeightForWidth());
        January->setSizePolicy(sizePolicy);
        January->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/January.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(January, 1, 1, 1, 1);

        November = new QPushButton(gridLayoutWidget);
        November->setObjectName(QStringLiteral("November"));
        sizePolicy.setHeightForWidth(November->sizePolicy().hasHeightForWidth());
        November->setSizePolicy(sizePolicy);
        November->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/November.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(November, 0, 3, 1, 1);

        August = new QPushButton(gridLayoutWidget);
        August->setObjectName(QStringLiteral("August"));
        sizePolicy.setHeightForWidth(August->sizePolicy().hasHeightForWidth());
        August->setSizePolicy(sizePolicy);
        August->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/August.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(August, 0, 0, 1, 1);

        December = new QPushButton(gridLayoutWidget);
        December->setObjectName(QStringLiteral("December"));
        sizePolicy.setHeightForWidth(December->sizePolicy().hasHeightForWidth());
        December->setSizePolicy(sizePolicy);
        December->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/December.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(December, 1, 0, 1, 1);

        February = new QPushButton(gridLayoutWidget);
        February->setObjectName(QStringLiteral("February"));
        sizePolicy.setHeightForWidth(February->sizePolicy().hasHeightForWidth());
        February->setSizePolicy(sizePolicy);
        February->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/February.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(February, 1, 2, 1, 1);

        April = new QPushButton(gridLayoutWidget);
        April->setObjectName(QStringLiteral("April"));
        sizePolicy.setHeightForWidth(April->sizePolicy().hasHeightForWidth());
        April->setSizePolicy(sizePolicy);
        April->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/April.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(April, 2, 1, 1, 1);

        May = new QPushButton(gridLayoutWidget);
        May->setObjectName(QStringLiteral("May"));
        sizePolicy.setHeightForWidth(May->sizePolicy().hasHeightForWidth());
        May->setSizePolicy(sizePolicy);
        May->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/May.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(May, 2, 2, 1, 1);

        September = new QPushButton(gridLayoutWidget);
        September->setObjectName(QStringLiteral("September"));
        sizePolicy.setHeightForWidth(September->sizePolicy().hasHeightForWidth());
        September->setSizePolicy(sizePolicy);
        September->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border-image: url(:MonthImages/September.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
""));

        gridLayout->addWidget(September, 0, 1, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 551, 41));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica"));
        font.setPointSize(36);
        label->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new class August();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_2);
        page_3 = new class September();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_3);
        page_4 = new class October();
        page_4->setObjectName(QStringLiteral("page_4"));
        pushButton_3 = new QPushButton(page_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_4);
        page_5 = new class November();
        page_5->setObjectName(QStringLiteral("page_5"));
        pushButton_4 = new QPushButton(page_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_5);
        page_6 = new class December();
        page_6->setObjectName(QStringLiteral("page_6"));
        pushButton_5 = new QPushButton(page_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_6);
        page_7 = new class January();
        page_7->setObjectName(QStringLiteral("page_7"));
        pushButton_6 = new QPushButton(page_7);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_7);
        page_8 = new class February();
        page_8->setObjectName(QStringLiteral("page_8"));
        pushButton_7 = new QPushButton(page_8);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_8);
        page_9 = new class March();
        page_9->setObjectName(QStringLiteral("page_9"));
        pushButton_8 = new QPushButton(page_9);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_9);
        page_10 = new class April();
        page_10->setObjectName(QStringLiteral("page_10"));
        pushButton_9 = new QPushButton(page_10);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_10);
        page_11 = new class May();
        page_11->setObjectName(QStringLiteral("page_11"));
        pushButton_10 = new QPushButton(page_11);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(750, 0, 61, 31));
        stackedWidget->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        horizontalLayoutWidget_2 = new QWidget(page_12);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 40, 781, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAutoFillBackground(false);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_9);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        widget = new QWidget(page_12);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 100, 771, 41));
        widget_2 = new QWidget(page_12);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 150, 771, 41));
        widget_3 = new QWidget(page_12);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(10, 200, 771, 41));
        widget_4 = new QWidget(page_12);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(10, 250, 771, 41));
        widget_5 = new QWidget(page_12);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(10, 300, 771, 41));
        stackedWidget->addWidget(page_12);
        horizontalLayoutWidget_2->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        widget_5->raise();
        widget_4->raise();
        widget_5->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 842, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton_clicked()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        October->setText(QApplication::translate("MainWindow", "October", 0));
        March->setText(QApplication::translate("MainWindow", "March", 0));
        January->setText(QApplication::translate("MainWindow", "January", 0));
        November->setText(QApplication::translate("MainWindow", "November", 0));
        August->setText(QApplication::translate("MainWindow", "August", 0));
        December->setText(QApplication::translate("MainWindow", "December", 0));
        February->setText(QApplication::translate("MainWindow", "February", 0));
        April->setText(QApplication::translate("MainWindow", "April", 0));
        May->setText(QApplication::translate("MainWindow", "May", 0));
        September->setText(QApplication::translate("MainWindow", "September", 0));
        label->setText(QApplication::translate("MainWindow", "AUGUST 2016 - MAY 2017", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "Back", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "Back", 0));
        label_7->setText(QApplication::translate("MainWindow", "SUN", 0));
        label_8->setText(QApplication::translate("MainWindow", "MON", 0));
        label_9->setText(QApplication::translate("MainWindow", "TUE", 0));
        label_6->setText(QApplication::translate("MainWindow", "WED", 0));
        label_5->setText(QApplication::translate("MainWindow", "THU", 0));
        label_4->setText(QApplication::translate("MainWindow", "FRI", 0));
        label_3->setText(QApplication::translate("MainWindow", "SAT", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
