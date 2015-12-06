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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InterfazEstu
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InterfazEstu)
    {
        if (InterfazEstu->objectName().isEmpty())
            InterfazEstu->setObjectName(QStringLiteral("InterfazEstu"));
        InterfazEstu->resize(297, 203);
        verticalLayout = new QVBoxLayout(InterfazEstu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(InterfazEstu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(InterfazEstu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(InterfazEstu);

        QMetaObject::connectSlotsByName(InterfazEstu);
    } // setupUi

    void retranslateUi(QDialog *InterfazEstu)
    {
        InterfazEstu->setWindowTitle(QApplication::translate("InterfazEstu", "Estudiante", 0));
        pushButton->setText(QApplication::translate("InterfazEstu", "Datos Personales", 0));
        pushButton_2->setText(QApplication::translate("InterfazEstu", "Solcitar campo en un evento", 0));
    } // retranslateUi

};

namespace Ui {
    class InterfazEstu: public Ui_InterfazEstu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZESTU_H
