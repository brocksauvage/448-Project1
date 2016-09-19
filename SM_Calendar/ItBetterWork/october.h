#ifndef OCTOBER_H
#define OCTOBER_H

#include <QWidget>
#include <QObject>
#include <calendarday.h>

namespace Ui {
class October;
}

class October : public QWidget
{
    Q_OBJECT

public:
    explicit October(QWidget *parent = 0);
    ~October();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::October *ui;
};

#endif // OCTOBER_H
