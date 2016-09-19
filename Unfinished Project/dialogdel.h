#ifndef DIALOGDEL_H
#define DIALOGDEL_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class DialogDel;
}

class DialogDel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDel(QWidget *parent = 0);
    ~DialogDel();


private slots:
    /**
        *  @pre delete button has been pushed from mainwindow
        *  @post deletes event from file
        *  @return None
        */
    void on_dConfirm_clicked();

private:
    Ui::DialogDel *ui;

};

#endif // DIALOGDEL_H
