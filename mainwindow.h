#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /**
        *  @pre file open and ready to be read
        *  @post sets text of text browser to what's in the file
        *  @return None
        */
    void setEventList();


private slots:
    /**
        *  @pre None
        *  @post opens dialog box for event description to be written
        * resets text box with the added event
        *  @return None
        */
    void on_Add1_clicked();

    /**
        *  @pre None
        *  @post opens up dialog box to choose which event they'd like to delete
        * and resets the text box with the deleted event removed
        *  @return None
        */
    void on_delete_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
