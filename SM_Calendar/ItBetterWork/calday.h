#ifndef CALDAY_H
#define CALDAY_H

#include <QDialog>

namespace Ui {
class calday;
}

class calday : public QDialog
{
    Q_OBJECT

public:
    explicit calday(QWidget *parent = 0);
    ~calday();

private:
    Ui::calday *ui;
};

#endif // CALDAY_H
