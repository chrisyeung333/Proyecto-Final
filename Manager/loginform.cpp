#include "loginform.h"
#include "ui_loginform.h"
#include "mainwindow.h"
#include "interfazprof.h"
LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_pushButton_clicked()
{
    QString usuario,pass;
    usuario=ui->lineEdit_User->text();
    pass=ui->lineEdit_Pass->text();
    QSqlQuery qry;

        if(qry.exec("SELECT * FROM [Manager].[dbo].[profesores]"))
        {
            int valido = 0;
         while(qry.next())
            {
              // qDebug() << qry.value(5).toString();
            if(pass == qry.value(5).toString() && usuario == qry.value(4).toString())
             {
            //Usuario y pass correcto
                 valido = 1;
                 close();
                 InterfazProf interfazProf;
                 interfazProf.setModal(true);
                 interfazProf.exec();


            }
           if(valido == 0)
              ui->label_Status->setText("Usuario o contraseña invalida");
            }

        }

}
