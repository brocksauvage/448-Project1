#ifndef CALENDARYEAR_H
#define CALENDARYEAR_H

#include <QWidget>

namespace Ui {
class calendaryear;
}

class calendaryear : public QWidget
{
    Q_OBJECT

public:
    explicit calendaryear(QWidget *parent = 0);
    ~calendaryear();

private:
    Ui::calendaryear *ui;
};

#endif // CALENDARYEAR_H
