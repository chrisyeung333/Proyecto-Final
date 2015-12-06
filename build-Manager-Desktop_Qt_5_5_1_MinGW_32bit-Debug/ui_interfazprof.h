/********************************************************************************
** Form generated from reading UI file 'interfazprof.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZPROF_H
#define UI_INTERFAZPROF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InterfazProf
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InterfazProf)
    {
        if (InterfazProf->objectName().isEmpty())
            InterfazProf->setObjectName(QStringLiteral("InterfazProf"));
        InterfazProf->resize(400, 300);
        pushButton = new QPushButton(InterfazProf);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 40, 121, 23));
        pushButton_2 = new QPushButton(InterfazProf);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 90, 191, 23));

        retranslateUi(InterfazProf);

        QMetaObject::connectSlotsByName(InterfazProf);
    } // setupUi

    void retranslateUi(QDialog *InterfazProf)
    {
        InterfazProf->setWindowTitle(QApplication::translate("InterfazProf", "Profesor", 0));
        pushButton->setText(QApplication::translate("InterfazProf", "Crear Evento", 0));
        pushButton_2->setText(QApplication::translate("InterfazProf", "Lista de Estudiantes", 0));
    } // retranslateUi

};

namespace Ui {
    class InterfazProf: public Ui_InterfazProf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZPROF_H
