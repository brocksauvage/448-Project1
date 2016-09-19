#ifndef AUGUST_H
#define AUGUST_H

#include <QWidget>
#include <QObject>
#include "eventhandler.h"
#include <QTextBrowser>

namespace Ui {
class August;
}

class August : public QWidget
{
    Q_OBJECT

public:
    explicit August(QWidget *parent = 0);
    ~August();

private slots:
    /**
        *  @pre user is inside month view
        *  @post takes the user to the day of their choosing to add events
        *  @return None
        */
    void on_August1_clicked();

private:
    Ui::August *ui;
};

#endif // AUGUST_H
