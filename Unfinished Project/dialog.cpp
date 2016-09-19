#include "Dialog.h"
#include "ui_Dialog.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Confirm_clicked()
{
    QFile file("C:\\Users\\Denae\\Documents\\CalendarRedo\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
                return;
        }
    QString lastDate;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lastDate = in.readLine();
    }

    QFile myFile("C:\\Users\\Denae\\Documents\\CalendarRedo\\EventList.txt");
    if(!myFile.open(QIODevice::ReadWrite | QFile::Append)){
        return;
    }

    QTextStream outFile(&myFile);
    QString line = ui->Description->text();
    if(line == ""){
        this->close();
    }
    else{
        outFile << lastDate << "\r\n";
        outFile << line << "\r\n";
        line = ui->timeEdit->text();
        outFile << line << "\r\n\r\n";
        myFile.close();
        this->close();
    }
}


