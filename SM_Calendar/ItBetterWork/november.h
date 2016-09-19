#ifndef NOVEMBER_H
#define NOVEMBER_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class November;
}

class November : public QWidget
{
    Q_OBJECT

public:
    explicit November(QWidget *parent = 0);
    ~November();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::November *ui;
};

#endif // NOVEMBER_H
