#ifndef eventhandler_H
#define eventhandler_H

#include <QWidget>
#include "dialog.h"
#include <QString>
#include <iostream>

namespace Ui {
class eventhandler;
}

class eventhandler : public QWidget
{
    Q_OBJECT

public:
    explicit eventhandler(QWidget *parent = 0);
    ~eventhandler();
    /**
        *  @pre file open and ready to be read
        *  @post sets text of text browser to what's in the file
        *  @return None
        */
    void setEventListDel();
    void setEventOnClick();


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

    void on_events_clicked();

private:
    Ui::eventhandler *ui;
};

#endif // eventhandler_H
