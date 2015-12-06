/********************************************************************************
** Form generated from reading UI file 'listaeventos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAEVENTOS_H
#define UI_LISTAEVENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ListaEventos
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *ListaEventos)
    {
        if (ListaEventos->objectName().isEmpty())
            ListaEventos->setObjectName(QStringLiteral("ListaEventos"));
        ListaEventos->resize(452, 408);
        verticalLayout = new QVBoxLayout(ListaEventos);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(ListaEventos);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(ListaEventos);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        tableView = new QTableView(ListaEventos);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(ListaEventos);

        QMetaObject::connectSlotsByName(ListaEventos);
    } // setupUi

    void retranslateUi(QDialog *ListaEventos)
    {
        ListaEventos->setWindowTitle(QApplication::translate("ListaEventos", "Lista de Eventos", 0));
        pushButton->setText(QApplication::translate("ListaEventos", "Mostrar estudiantes que solicitaron campo", 0));
    } // retranslateUi

};

namespace Ui {
    class ListaEventos: public Ui_ListaEventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAEVENTOS_H
