/********************************************************************************
** Form generated from reading UI file 'registrado.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRADO_H
#define UI_REGISTRADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Registrado
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Registrado)
    {
        if (Registrado->objectName().isEmpty())
            Registrado->setObjectName(QStringLiteral("Registrado"));
        Registrado->resize(264, 127);
        label = new QLabel(Registrado);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 201, 71));
        pushButton = new QPushButton(Registrado);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 80, 75, 23));

        retranslateUi(Registrado);
        QObject::connect(pushButton, SIGNAL(clicked()), Registrado, SLOT(close()));

        QMetaObject::connectSlotsByName(Registrado);
    } // setupUi

    void retranslateUi(QDialog *Registrado)
    {
        Registrado->setWindowTitle(QString());
        label->setText(QApplication::translate("Registrado", "Su usuario ha sido creado exitosamente.", 0));
        pushButton->setText(QApplication::translate("Registrado", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Registrado: public Ui_Registrado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRADO_H
