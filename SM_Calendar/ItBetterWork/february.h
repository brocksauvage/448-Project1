#ifndef FEBRUARY_H
#define FEBRUARY_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class February;
}

class February : public QWidget
{
    Q_OBJECT

public:
    explicit February(QWidget *parent = 0);
    ~February();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::February *ui;
};

#endif // FEBRUARY_H
