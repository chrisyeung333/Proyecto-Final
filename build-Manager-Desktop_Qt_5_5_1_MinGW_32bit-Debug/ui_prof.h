/********************************************************************************
** Form generated from reading UI file 'prof.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROF_H
#define UI_PROF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Prof
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Prof)
    {
        if (Prof->objectName().isEmpty())
            Prof->setObjectName(QStringLiteral("Prof"));
        Prof->resize(400, 300);
        pushButton = new QPushButton(Prof);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 50, 75, 23));

        retranslateUi(Prof);

        QMetaObject::connectSlotsByName(Prof);
    } // setupUi

    void retranslateUi(QDialog *Prof)
    {
        Prof->setWindowTitle(QApplication::translate("Prof", "Dialog", 0));
        pushButton->setText(QApplication::translate("Prof", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Prof: public Ui_Prof {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROF_H
