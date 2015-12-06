/********************************************************************************
** Form generated from reading UI file 'eventocreado.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTOCREADO_H
#define UI_EVENTOCREADO_H

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

class Ui_EventoCreado
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *EventoCreado)
    {
        if (EventoCreado->objectName().isEmpty())
            EventoCreado->setObjectName(QStringLiteral("EventoCreado"));
        EventoCreado->resize(204, 93);
        verticalLayout = new QVBoxLayout(EventoCreado);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(EventoCreado);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(EventoCreado);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(EventoCreado);
        QObject::connect(pushButton, SIGNAL(clicked()), EventoCreado, SLOT(close()));

        QMetaObject::connectSlotsByName(EventoCreado);
    } // setupUi

    void retranslateUi(QDialog *EventoCreado)
    {
        EventoCreado->setWindowTitle(QApplication::translate("EventoCreado", "Evento Creado", 0));
        label->setText(QApplication::translate("EventoCreado", "El evento ha sido creado exitosamente", 0));
        pushButton->setText(QApplication::translate("EventoCreado", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class EventoCreado: public Ui_EventoCreado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTOCREADO_H
