#ifndef APRIL_H
#define APRIL_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class April;
}

class April : public QWidget
{
    Q_OBJECT

public:
    explicit April(QWidget *parent = 0);
    ~April();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::April *ui;
};

#endif // APRIL_H
