#include "loginform.h"
#include "ui_loginform.h"
#include "mainwindow.h"
#include "interfazprof.h"
//esta es la ventana de login para los profesores
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
//cuando se oprime el boton de login, se compara los datos ingresados en las cajas de texto para ver si el usuario y contraseña coinciden con algun par que este en la base de datos
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
            //Usuario y pass correcto, se abre la ventana principal de profesor
                 valido = 1;
                 close();
                 InterfazProf interfazProf;
                 interfazProf.setModal(true);
                 interfazProf.exec();


            }
           if(valido == 0)
               //si no es valido, se abre una notificacion
              ui->label_Status->setText("Usuario o contraseña invalida");
            }

        }

}
