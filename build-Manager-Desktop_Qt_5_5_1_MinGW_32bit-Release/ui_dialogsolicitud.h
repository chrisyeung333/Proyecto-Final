/********************************************************************************
** Form generated from reading UI file 'dialogsolicitud.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSOLICITUD_H
#define UI_DIALOGSOLICITUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSolicitud
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogSolicitud)
    {
        if (DialogSolicitud->objectName().isEmpty())
            DialogSolicitud->setObjectName(QStringLiteral("DialogSolicitud"));
        DialogSolicitud->resize(227, 143);
        verticalLayout = new QVBoxLayout(DialogSolicitud);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(DialogSolicitud);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        pushButton = new QPushButton(DialogSolicitud);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(DialogSolicitud);
        QObject::connect(pushButton, SIGNAL(clicked()), DialogSolicitud, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogSolicitud);
    } // setupUi

    void retranslateUi(QDialog *DialogSolicitud)
    {
        DialogSolicitud->setWindowTitle(QApplication::translate("DialogSolicitud", "Solicitud Enviada", 0));
        label->setText(QApplication::translate("DialogSolicitud", "Su solicitud ha sido enviada exitosamente.", 0));
        pushButton->setText(QApplication::translate("DialogSolicitud", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogSolicitud: public Ui_DialogSolicitud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSOLICITUD_H
