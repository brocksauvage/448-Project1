/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTimeEdit *timeEdit;
    QLabel *Title;
    QLabel *Time;
    QLineEdit *Description;
    QPushButton *Confirm;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        timeEdit = new QTimeEdit(Dialog);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(190, 160, 118, 24));
        Title = new QLabel(Dialog);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(58, 130, 71, 20));
        Time = new QLabel(Dialog);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(70, 180, 59, 16));
        Description = new QLineEdit(Dialog);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(180, 120, 113, 21));
        Confirm = new QPushButton(Dialog);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setGeometry(QRect(150, 220, 115, 32));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        Title->setText(QApplication::translate("Dialog", "Event Title", 0));
        Time->setText(QApplication::translate("Dialog", "Time", 0));
        Confirm->setText(QApplication::translate("Dialog", "Add Event", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
