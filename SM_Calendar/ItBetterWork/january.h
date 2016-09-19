#ifndef JANUARY_H
#define JANUARY_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class January;
}

class January : public QWidget
{
    Q_OBJECT

public:
    explicit January(QWidget *parent = 0);
    ~January();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::January *ui;
};

#endif // JANUARY_H
