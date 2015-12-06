/********************************************************************************
** Form generated from reading UI file 'solicitud.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLICITUD_H
#define UI_SOLICITUD_H

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

class Ui_Solicitud
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *Solicitud)
    {
        if (Solicitud->objectName().isEmpty())
            Solicitud->setObjectName(QStringLiteral("Solicitud"));
        Solicitud->resize(405, 314);
        verticalLayout = new QVBoxLayout(Solicitud);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(Solicitud);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        comboBox = new QComboBox(Solicitud);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(Solicitud);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Solicitud);

        QMetaObject::connectSlotsByName(Solicitud);
    } // setupUi

    void retranslateUi(QDialog *Solicitud)
    {
        Solicitud->setWindowTitle(QApplication::translate("Solicitud", "Solicitud", 0));
        pushButton->setText(QApplication::translate("Solicitud", "Solicitar Campo en evento", 0));
    } // retranslateUi

};

namespace Ui {
    class Solicitud: public Ui_Solicitud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLICITUD_H
