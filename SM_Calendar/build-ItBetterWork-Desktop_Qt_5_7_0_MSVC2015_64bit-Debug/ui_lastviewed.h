/********************************************************************************
** Form generated from reading UI file 'lastviewed.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTVIEWED_H
#define UI_LASTVIEWED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lastViewed
{
public:
    QTextBrowser *textBrowser;
    QLabel *LastView;
    QLabel *label;

    void setupUi(QWidget *lastViewed)
    {
        if (lastViewed->objectName().isEmpty())
            lastViewed->setObjectName(QStringLiteral("lastViewed"));
        lastViewed->resize(245, 276);
        textBrowser = new QTextBrowser(lastViewed);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 181, 192));
        LastView = new QLabel(lastViewed);
        LastView->setObjectName(QStringLiteral("LastView"));
        LastView->setGeometry(QRect(140, 30, 91, 16));
        label = new QLabel(lastViewed);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 111, 16));

        retranslateUi(lastViewed);

        QMetaObject::connectSlotsByName(lastViewed);
    } // setupUi

    void retranslateUi(QWidget *lastViewed)
    {
        lastViewed->setWindowTitle(QApplication::translate("lastViewed", "Form", 0));
        LastView->setText(QApplication::translate("lastViewed", "TextLabel", 0));
        label->setText(QApplication::translate("lastViewed", "Last Date Viewed:", 0));
    } // retranslateUi

};

namespace Ui {
    class lastViewed: public Ui_lastViewed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTVIEWED_H
