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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InterfazProf
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *InterfazProf)
    {
        if (InterfazProf->objectName().isEmpty())
            InterfazProf->setObjectName(QStringLiteral("InterfazProf"));
        InterfazProf->resize(400, 300);
        verticalLayout = new QVBoxLayout(InterfazProf);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(InterfazProf);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(InterfazProf);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(InterfazProf);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(InterfazProf);

        QMetaObject::connectSlotsByName(InterfazProf);
    } // setupUi

    void retranslateUi(QDialog *InterfazProf)
    {
        InterfazProf->setWindowTitle(QApplication::translate("InterfazProf", "Profesor", 0));
        pushButton->setText(QApplication::translate("InterfazProf", "Crear Evento", 0));
        pushButton_2->setText(QApplication::translate("InterfazProf", "Lista de Estudiantes", 0));
        pushButton_3->setText(QApplication::translate("InterfazProf", "Lista de Eventos", 0));
    } // retranslateUi

};

namespace Ui {
    class InterfazProf: public Ui_InterfazProf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZPROF_H
