/********************************************************************************
** Form generated from reading UI file 'loginform2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM2_H
#define UI_LOGINFORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm2
{
public:
    QGroupBox *groupBox;
    QLabel *label_Status;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_User;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Pass;
    QPushButton *pushButton;

    void setupUi(QDialog *LoginForm2)
    {
        if (LoginForm2->objectName().isEmpty())
            LoginForm2->setObjectName(QStringLiteral("LoginForm2"));
        LoginForm2->resize(400, 300);
        groupBox = new QGroupBox(LoginForm2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 331, 261));
        label_Status = new QLabel(groupBox);
        label_Status->setObjectName(QStringLiteral("label_Status"));
        label_Status->setGeometry(QRect(40, 220, 261, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(28, 30, 271, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_User = new QLineEdit(widget);
        lineEdit_User->setObjectName(QStringLiteral("lineEdit_User"));

        horizontalLayout->addWidget(lineEdit_User);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Pass = new QLineEdit(widget);
        lineEdit_Pass->setObjectName(QStringLiteral("lineEdit_Pass"));

        horizontalLayout_2->addWidget(lineEdit_Pass);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(LoginForm2);

        QMetaObject::connectSlotsByName(LoginForm2);
    } // setupUi

    void retranslateUi(QDialog *LoginForm2)
    {
        LoginForm2->setWindowTitle(QApplication::translate("LoginForm2", "Estudiante", 0));
        groupBox->setTitle(QString());
        label_Status->setText(QString());
        label->setText(QApplication::translate("LoginForm2", "Usuario", 0));
        label_2->setText(QApplication::translate("LoginForm2", "Contrase\303\261a", 0));
        pushButton->setText(QApplication::translate("LoginForm2", "Ingresar", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginForm2: public Ui_LoginForm2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM2_H
