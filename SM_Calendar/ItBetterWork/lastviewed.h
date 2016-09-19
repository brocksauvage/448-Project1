#ifndef LASTVIEWED_H
#define LASTVIEWED_H

#include <QDialog>
#include <QObject>
#include <iostream>

namespace Ui {
class lastViewed;
}

class lastViewed : public QDialog
{
    Q_OBJECT

public:
    explicit lastViewed(QWidget *parent = 0);
    ~lastViewed();
    void setEvents();
    void setDateLabel();

private:
    Ui::lastViewed *ui;
};

#endif // LASTVIEWED_H
