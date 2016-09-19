#ifndef MARCH_H
#define MARCH_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class March;
}

class March : public QWidget
{
    Q_OBJECT

public:
    explicit March(QWidget *parent = 0);
    ~March();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::March *ui;
};

#endif // MARCH_H
