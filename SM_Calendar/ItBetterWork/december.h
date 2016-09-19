#ifndef DECEMBER_H
#define DECEMBER_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class December;
}

class December : public QWidget
{
    Q_OBJECT

public:
    explicit December(QWidget *parent = 0);
    ~December();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::December *ui;
};

#endif // DECEMBER_H
