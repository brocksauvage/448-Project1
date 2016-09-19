/********************************************************************************
** Form generated from reading UI file 'calday.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALDAY_H
#define UI_CALDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_calday
{
public:

    void setupUi(QDialog *calday)
    {
        if (calday->objectName().isEmpty())
            calday->setObjectName(QStringLiteral("calday"));
        calday->resize(400, 300);

        retranslateUi(calday);

        QMetaObject::connectSlotsByName(calday);
    } // setupUi

    void retranslateUi(QDialog *calday)
    {
        calday->setWindowTitle(QApplication::translate("calday", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class calday: public Ui_calday {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALDAY_H
