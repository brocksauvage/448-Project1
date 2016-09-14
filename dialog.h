#ifndef Dialog_H
#define Dialog_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    /**
        *  @pre add button has been pushed from main window
        *  @post writes event to file and to text browser
        *  @return None
        */
    void on_Confirm_clicked();

private:
    Ui::Dialog *ui;

};
#endif // Dialog_H
