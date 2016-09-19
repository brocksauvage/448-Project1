#include "calendarmonth.h"
#include "calendarday.h"
#include "dialog.h"
#include "mainwindow.h"
#include "lastviewed.h"
#include "eventhandler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lastViewed l1;
    MainWindow cal;
    eventhandler e1;
    l1.setEvents();
    l1.setDateLabel();
    e1.setEventOnClick();
    cal.show();
    l1.show();
    return a.exec();
}
