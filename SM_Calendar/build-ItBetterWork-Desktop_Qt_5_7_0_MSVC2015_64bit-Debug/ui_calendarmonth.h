/********************************************************************************
** Form generated from reading UI file 'calendarmonth.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARMONTH_H
#define UI_CALENDARMONTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "april.h"
#include "august.h"
#include "calendarday.h"
#include "december.h"
#include "february.h"
#include "january.h"
#include "mainwindow.h"
#include "march.h"
#include "may.h"
#include "november.h"
#include "october.h"
#include "september.h"

QT_BEGIN_NAMESPACE

class Ui_CalendarMonth
{
public:
    QStackedWidget *stackedWidget;
    MainWindow *YearView;
    QPushButton *DayViewButton_10;
    QPushButton *MonthViewButton_10;
    QPushButton *WeekViewButton_10;
    QPushButton *YearViewButton_10;
    QWidget *MonthView;
    QPushButton *WeekViewButton_3;
    QPushButton *MonthViewButton_3;
    QPushButton *YearViewButton_3;
    QPushButton *DayViewButton_3;
    QStackedWidget *MonthStack;
    August *August;
    September *September;
    October *October;
    November *November;
    December *December;
    January *January;
    February *February;
    March *March;
    April *April;
    May *May;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *WeekView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *FridayCornerLabel;
    QLabel *TuesdayCornerLabel;
    QLabel *WednesdayCornerLabel;
    QPushButton *NextButton;
    QLabel *MondayCornerLabel;
    QPushButton *PrevButton;
    QLabel *ThursdayCornerLabel;
    QLabel *SundayCornerLabel;
    QLabel *SaturdayCornerLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SunPush;
    QPushButton *MonPush;
    QPushButton *TuePush;
    QPushButton *WedPush;
    QPushButton *ThuPush;
    QPushButton *FriPush;
    QPushButton *SatPush;
    calendarday *DayView;
    QPushButton *YearViewButton_2;
    QPushButton *MonthViewButton_2;
    QPushButton *DayViewButton_2;
    QPushButton *WeekViewButton_2;
    QWidget *AugustNull;

    void setupUi(QWidget *CalendarMonth)
    {
        if (CalendarMonth->objectName().isEmpty())
            CalendarMonth->setObjectName(QStringLiteral("CalendarMonth"));
        CalendarMonth->resize(840, 524);
        CalendarMonth->setWindowOpacity(1);
        stackedWidget = new QStackedWidget(CalendarMonth);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 841, 521));
        YearView = new MainWindow();
        YearView->setObjectName(QStringLiteral("YearView"));
        DayViewButton_10 = new QPushButton(YearView);
        DayViewButton_10->setObjectName(QStringLiteral("DayViewButton_10"));
        DayViewButton_10->setGeometry(QRect(766, 15, 71, 32));
        MonthViewButton_10 = new QPushButton(YearView);
        MonthViewButton_10->setObjectName(QStringLiteral("MonthViewButton_10"));
        MonthViewButton_10->setGeometry(QRect(642, 15, 81, 32));
        WeekViewButton_10 = new QPushButton(YearView);
        WeekViewButton_10->setObjectName(QStringLiteral("WeekViewButton_10"));
        WeekViewButton_10->setGeometry(QRect(702, 15, 81, 32));
        YearViewButton_10 = new QPushButton(YearView);
        YearViewButton_10->setObjectName(QStringLiteral("YearViewButton_10"));
        YearViewButton_10->setGeometry(QRect(592, 15, 71, 32));
        stackedWidget->addWidget(YearView);
        DayViewButton_10->raise();
        WeekViewButton_10->raise();
        MonthViewButton_10->raise();
        YearViewButton_10->raise();
        MonthView = new QWidget();
        MonthView->setObjectName(QStringLiteral("MonthView"));
        WeekViewButton_3 = new QPushButton(MonthView);
        WeekViewButton_3->setObjectName(QStringLiteral("WeekViewButton_3"));
        WeekViewButton_3->setGeometry(QRect(702, 15, 81, 32));
        MonthViewButton_3 = new QPushButton(MonthView);
        MonthViewButton_3->setObjectName(QStringLiteral("MonthViewButton_3"));
        MonthViewButton_3->setGeometry(QRect(642, 15, 81, 32));
        YearViewButton_3 = new QPushButton(MonthView);
        YearViewButton_3->setObjectName(QStringLiteral("YearViewButton_3"));
        YearViewButton_3->setGeometry(QRect(592, 15, 71, 32));
        DayViewButton_3 = new QPushButton(MonthView);
        DayViewButton_3->setObjectName(QStringLiteral("DayViewButton_3"));
        DayViewButton_3->setGeometry(QRect(766, 15, 71, 32));
        MonthStack = new QStackedWidget(MonthView);
        MonthStack->setObjectName(QStringLiteral("MonthStack"));
        MonthStack->setGeometry(QRect(-1, 59, 841, 461));
        August = new class August();
        August->setObjectName(QStringLiteral("August"));
        MonthStack->addWidget(August);
        September = new class September();
        September->setObjectName(QStringLiteral("September"));
        MonthStack->addWidget(September);
        October = new class October();
        October->setObjectName(QStringLiteral("October"));
        MonthStack->addWidget(October);
        November = new class November();
        November->setObjectName(QStringLiteral("November"));
        MonthStack->addWidget(November);
        December = new class December();
        December->setObjectName(QStringLiteral("December"));
        MonthStack->addWidget(December);
        January = new class January();
        January->setObjectName(QStringLiteral("January"));
        MonthStack->addWidget(January);
        February = new class February();
        February->setObjectName(QStringLiteral("February"));
        MonthStack->addWidget(February);
        March = new class March();
        March->setObjectName(QStringLiteral("March"));
        MonthStack->addWidget(March);
        April = new class April();
        April->setObjectName(QStringLiteral("April"));
        MonthStack->addWidget(April);
        May = new class May();
        May->setObjectName(QStringLiteral("May"));
        MonthStack->addWidget(May);
        horizontalLayoutWidget_3 = new QWidget(MonthView);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 40, 841, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);
        label_10->setAutoFillBackground(false);
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_10);

        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_11->setFont(font1);
        label_11->setFrameShape(QFrame::NoFrame);
        label_11->setFrameShadow(QFrame::Plain);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_12);

        label_13 = new QLabel(horizontalLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_13);

        label_14 = new QLabel(horizontalLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_14);

        label_15 = new QLabel(horizontalLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_15);

        label_16 = new QLabel(horizontalLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_16);

        stackedWidget->addWidget(MonthView);
        DayViewButton_3->raise();
        WeekViewButton_3->raise();
        MonthViewButton_3->raise();
        YearViewButton_3->raise();
        MonthStack->raise();
        horizontalLayoutWidget_3->raise();
        WeekView = new QWidget();
        WeekView->setObjectName(QStringLiteral("WeekView"));
        horizontalLayoutWidget_2 = new QWidget(WeekView);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 61, 841, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAutoFillBackground(false);
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font1);
        label_8->setFrameShape(QFrame::NoFrame);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_9);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_6);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        FridayCornerLabel = new QLabel(WeekView);
        FridayCornerLabel->setObjectName(QStringLiteral("FridayCornerLabel"));
        FridayCornerLabel->setGeometry(QRect(591, 106, 31, 16));
        FridayCornerLabel->setAlignment(Qt::AlignCenter);
        TuesdayCornerLabel = new QLabel(WeekView);
        TuesdayCornerLabel->setObjectName(QStringLiteral("TuesdayCornerLabel"));
        TuesdayCornerLabel->setGeometry(QRect(236, 106, 31, 16));
        TuesdayCornerLabel->setAlignment(Qt::AlignCenter);
        WednesdayCornerLabel = new QLabel(WeekView);
        WednesdayCornerLabel->setObjectName(QStringLiteral("WednesdayCornerLabel"));
        WednesdayCornerLabel->setGeometry(QRect(354, 106, 31, 16));
        WednesdayCornerLabel->setAlignment(Qt::AlignCenter);
        NextButton = new QPushButton(WeekView);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setGeometry(QRect(430, 490, 81, 32));
        MondayCornerLabel = new QLabel(WeekView);
        MondayCornerLabel->setObjectName(QStringLiteral("MondayCornerLabel"));
        MondayCornerLabel->setGeometry(QRect(117, 106, 31, 16));
        MondayCornerLabel->setAlignment(Qt::AlignCenter);
        PrevButton = new QPushButton(WeekView);
        PrevButton->setObjectName(QStringLiteral("PrevButton"));
        PrevButton->setGeometry(QRect(340, 490, 81, 32));
        ThursdayCornerLabel = new QLabel(WeekView);
        ThursdayCornerLabel->setObjectName(QStringLiteral("ThursdayCornerLabel"));
        ThursdayCornerLabel->setGeometry(QRect(473, 106, 31, 16));
        ThursdayCornerLabel->setAlignment(Qt::AlignCenter);
        SundayCornerLabel = new QLabel(WeekView);
        SundayCornerLabel->setObjectName(QStringLiteral("SundayCornerLabel"));
        SundayCornerLabel->setGeometry(QRect(-2, 106, 31, 16));
        SundayCornerLabel->setAlignment(Qt::AlignCenter);
        SaturdayCornerLabel = new QLabel(WeekView);
        SaturdayCornerLabel->setObjectName(QStringLiteral("SaturdayCornerLabel"));
        SaturdayCornerLabel->setGeometry(QRect(710, 106, 31, 16));
        SaturdayCornerLabel->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(WeekView);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 100, 841, 381));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SunPush = new QPushButton(horizontalLayoutWidget);
        SunPush->setObjectName(QStringLiteral("SunPush"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SunPush->sizePolicy().hasHeightForWidth());
        SunPush->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(SunPush);

        MonPush = new QPushButton(horizontalLayoutWidget);
        MonPush->setObjectName(QStringLiteral("MonPush"));
        sizePolicy1.setHeightForWidth(MonPush->sizePolicy().hasHeightForWidth());
        MonPush->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(MonPush);

        TuePush = new QPushButton(horizontalLayoutWidget);
        TuePush->setObjectName(QStringLiteral("TuePush"));
        sizePolicy1.setHeightForWidth(TuePush->sizePolicy().hasHeightForWidth());
        TuePush->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(TuePush);

        WedPush = new QPushButton(horizontalLayoutWidget);
        WedPush->setObjectName(QStringLiteral("WedPush"));
        WedPush->setEnabled(true);
        sizePolicy1.setHeightForWidth(WedPush->sizePolicy().hasHeightForWidth());
        WedPush->setSizePolicy(sizePolicy1);
        WedPush->setAutoDefault(false);

        horizontalLayout->addWidget(WedPush);

        ThuPush = new QPushButton(horizontalLayoutWidget);
        ThuPush->setObjectName(QStringLiteral("ThuPush"));
        sizePolicy1.setHeightForWidth(ThuPush->sizePolicy().hasHeightForWidth());
        ThuPush->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(ThuPush);

        FriPush = new QPushButton(horizontalLayoutWidget);
        FriPush->setObjectName(QStringLiteral("FriPush"));
        sizePolicy1.setHeightForWidth(FriPush->sizePolicy().hasHeightForWidth());
        FriPush->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(FriPush);

        SatPush = new QPushButton(horizontalLayoutWidget);
        SatPush->setObjectName(QStringLiteral("SatPush"));
        sizePolicy1.setHeightForWidth(SatPush->sizePolicy().hasHeightForWidth());
        SatPush->setSizePolicy(sizePolicy1);
        SatPush->setStyleSheet(QLatin1String("color: rgba(255, 255, 255, 0);\n"
""));

        horizontalLayout->addWidget(SatPush);

        stackedWidget->addWidget(WeekView);
        horizontalLayoutWidget_2->raise();
        NextButton->raise();
        PrevButton->raise();
        horizontalLayoutWidget->raise();
        FridayCornerLabel->raise();
        MondayCornerLabel->raise();
        SaturdayCornerLabel->raise();
        SundayCornerLabel->raise();
        ThursdayCornerLabel->raise();
        TuesdayCornerLabel->raise();
        WednesdayCornerLabel->raise();
        DayView = new calendarday();
        DayView->setObjectName(QStringLiteral("DayView"));
        YearViewButton_2 = new QPushButton(DayView);
        YearViewButton_2->setObjectName(QStringLiteral("YearViewButton_2"));
        YearViewButton_2->setGeometry(QRect(290, 10, 71, 32));
        MonthViewButton_2 = new QPushButton(DayView);
        MonthViewButton_2->setObjectName(QStringLiteral("MonthViewButton_2"));
        MonthViewButton_2->setGeometry(QRect(340, 10, 81, 32));
        DayViewButton_2 = new QPushButton(DayView);
        DayViewButton_2->setObjectName(QStringLiteral("DayViewButton_2"));
        DayViewButton_2->setGeometry(QRect(464, 10, 71, 32));
        WeekViewButton_2 = new QPushButton(DayView);
        WeekViewButton_2->setObjectName(QStringLiteral("WeekViewButton_2"));
        WeekViewButton_2->setGeometry(QRect(400, 10, 81, 32));
        stackedWidget->addWidget(DayView);
        DayViewButton_2->raise();
        WeekViewButton_2->raise();
        MonthViewButton_2->raise();
        YearViewButton_2->raise();
        AugustNull = new QWidget();
        AugustNull->setObjectName(QStringLiteral("AugustNull"));
        stackedWidget->addWidget(AugustNull);

        retranslateUi(CalendarMonth);

        stackedWidget->setCurrentIndex(2);
        MonthStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CalendarMonth);
    } // setupUi

    void retranslateUi(QWidget *CalendarMonth)
    {
        CalendarMonth->setWindowTitle(QApplication::translate("CalendarMonth", "CalendarMonth", 0));
        DayViewButton_10->setText(QApplication::translate("CalendarMonth", "Day", 0));
        MonthViewButton_10->setText(QApplication::translate("CalendarMonth", "Month", 0));
        WeekViewButton_10->setText(QApplication::translate("CalendarMonth", "Week", 0));
        YearViewButton_10->setText(QApplication::translate("CalendarMonth", "Year", 0));
        WeekViewButton_3->setText(QApplication::translate("CalendarMonth", "Week", 0));
        MonthViewButton_3->setText(QApplication::translate("CalendarMonth", "Month", 0));
        YearViewButton_3->setText(QApplication::translate("CalendarMonth", "Year", 0));
        DayViewButton_3->setText(QApplication::translate("CalendarMonth", "Day", 0));
        label_10->setText(QApplication::translate("CalendarMonth", "SUN", 0));
        label_11->setText(QApplication::translate("CalendarMonth", "MON", 0));
        label_12->setText(QApplication::translate("CalendarMonth", "TUE", 0));
        label_13->setText(QApplication::translate("CalendarMonth", "WED", 0));
        label_14->setText(QApplication::translate("CalendarMonth", "THU", 0));
        label_15->setText(QApplication::translate("CalendarMonth", "FRI", 0));
        label_16->setText(QApplication::translate("CalendarMonth", "SAT", 0));
        label_7->setText(QApplication::translate("CalendarMonth", "SUN", 0));
        label_8->setText(QApplication::translate("CalendarMonth", "MON", 0));
        label_9->setText(QApplication::translate("CalendarMonth", "TUE", 0));
        label_6->setText(QApplication::translate("CalendarMonth", "WED", 0));
        label_5->setText(QApplication::translate("CalendarMonth", "THU", 0));
        label_4->setText(QApplication::translate("CalendarMonth", "FRI", 0));
        label_3->setText(QApplication::translate("CalendarMonth", "SAT", 0));
        FridayCornerLabel->setText(QApplication::translate("CalendarMonth", "6", 0));
        TuesdayCornerLabel->setText(QApplication::translate("CalendarMonth", "3", 0));
        WednesdayCornerLabel->setText(QApplication::translate("CalendarMonth", "4", 0));
        NextButton->setText(QApplication::translate("CalendarMonth", "Next", 0));
        MondayCornerLabel->setText(QApplication::translate("CalendarMonth", "2", 0));
        PrevButton->setText(QApplication::translate("CalendarMonth", "Previous", 0));
        ThursdayCornerLabel->setText(QApplication::translate("CalendarMonth", "5", 0));
        SundayCornerLabel->setText(QApplication::translate("CalendarMonth", "1", 0));
        SaturdayCornerLabel->setText(QApplication::translate("CalendarMonth", "7", 0));
        SunPush->setText(QString());
        MonPush->setText(QString());
        TuePush->setText(QString());
        WedPush->setText(QString());
        ThuPush->setText(QString());
        FriPush->setText(QString());
        SatPush->setText(QString());
        YearViewButton_2->setText(QApplication::translate("CalendarMonth", "Year", 0));
        MonthViewButton_2->setText(QApplication::translate("CalendarMonth", "Month", 0));
        DayViewButton_2->setText(QApplication::translate("CalendarMonth", "Day", 0));
        WeekViewButton_2->setText(QApplication::translate("CalendarMonth", "Week", 0));
    } // retranslateUi

};

namespace Ui {
    class CalendarMonth: public Ui_CalendarMonth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARMONTH_H
