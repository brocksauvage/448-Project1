/********************************************************************************
** Form generated from reading UI file 'dialogdel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEL_H
#define UI_DIALOGDEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogDel
{
public:
    QPushButton *dConfirm;
    QLabel *label_2;
    QSpinBox *spinBox;

    void setupUi(QDialog *DialogDel)
    {
        if (DialogDel->objectName().isEmpty())
            DialogDel->setObjectName(QStringLiteral("DialogDel"));
        DialogDel->resize(400, 300);
        dConfirm = new QPushButton(DialogDel);
        dConfirm->setObjectName(QStringLiteral("dConfirm"));
        dConfirm->setGeometry(QRect(160, 200, 115, 32));
        label_2 = new QLabel(DialogDel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 241, 16));
        spinBox = new QSpinBox(DialogDel);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(280, 120, 47, 24));

        retranslateUi(DialogDel);

        QMetaObject::connectSlotsByName(DialogDel);
    } // setupUi

    void retranslateUi(QDialog *DialogDel)
    {
        DialogDel->setWindowTitle(QApplication::translate("DialogDel", "Dialog", 0));
        dConfirm->setText(QApplication::translate("DialogDel", "Delete", 0));
        label_2->setText(QApplication::translate("DialogDel", "Choose Event by Order of Appearance", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogDel: public Ui_DialogDel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEL_H
