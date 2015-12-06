/********************************************************************************
** Form generated from reading UI file 'interfazestu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZESTU_H
#define UI_INTERFAZESTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InterfazEstu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InterfazEstu)
    {
        if (InterfazEstu->objectName().isEmpty())
            InterfazEstu->setObjectName(QStringLiteral("InterfazEstu"));
        InterfazEstu->resize(400, 300);
        pushButton = new QPushButton(InterfazEstu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 30, 121, 23));
        pushButton_2 = new QPushButton(InterfazEstu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 90, 75, 23));

        retranslateUi(InterfazEstu);

        QMetaObject::connectSlotsByName(InterfazEstu);
    } // setupUi

    void retranslateUi(QDialog *InterfazEstu)
    {
        InterfazEstu->setWindowTitle(QApplication::translate("InterfazEstu", "Dialog", 0));
        pushButton->setText(QApplication::translate("InterfazEstu", "Mostrar Eventos", 0));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InterfazEstu: public Ui_InterfazEstu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZESTU_H
