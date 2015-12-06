/********************************************************************************
** Form generated from reading UI file 'listaestudiantes.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAESTUDIANTES_H
#define UI_LISTAESTUDIANTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ListaEstudiantes
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QDialog *ListaEstudiantes)
    {
        if (ListaEstudiantes->objectName().isEmpty())
            ListaEstudiantes->setObjectName(QStringLiteral("ListaEstudiantes"));
        ListaEstudiantes->resize(501, 374);
        horizontalLayout = new QHBoxLayout(ListaEstudiantes);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(ListaEstudiantes);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(ListaEstudiantes);

        QMetaObject::connectSlotsByName(ListaEstudiantes);
    } // setupUi

    void retranslateUi(QDialog *ListaEstudiantes)
    {
        ListaEstudiantes->setWindowTitle(QApplication::translate("ListaEstudiantes", "Lista de Estudiantes", 0));
    } // retranslateUi

};

namespace Ui {
    class ListaEstudiantes: public Ui_ListaEstudiantes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAESTUDIANTES_H
