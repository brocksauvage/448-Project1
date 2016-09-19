#ifndef SEPTEMBER_H
#define SEPTEMBER_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class September;
}

class September : public QWidget
{
    Q_OBJECT

public:
    explicit September(QWidget *parent = 0);
    ~September();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::September *ui;
};

#endif // SEPTEMBER_H
