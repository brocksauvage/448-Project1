#ifndef MAY_H
#define MAY_H

#include <QWidget>
#include <QObject>
#include "calendarday.h"

namespace Ui {
class May;
}

class May : public QWidget
{
    Q_OBJECT

public:
    explicit May(QWidget *parent = 0);
    ~May();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::May *ui;
};

#endif // MAY_H
