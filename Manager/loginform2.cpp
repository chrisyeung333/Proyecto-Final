#include "loginform2.h"
#include "ui_loginform2.h"
#include "mainwindow.h"
#include "interfazestu.h"
//esta es la ventana de login para estudiantes
LoginForm2::LoginForm2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm2)
{
    ui->setupUi(this);
}

LoginForm2::~LoginForm2()
{
    delete ui;
}
//cuando se oprime el boton de login, se compara los datos ingresado con los usuario y su contraseña respectiva de la base de datos
void LoginForm2::on_pushButton_clicked()
{
    QString usuario,pass;
    usuario=ui->lineEdit_User->text();
    pass=ui->lineEdit_Pass->text();
    QSqlQuery qry;

        if(qry.exec("SELECT * FROM [Manager].[dbo].[estudiantes]"))
        {
            int valido = 0;
         while(qry.next())
            {

            if(pass == qry.value(6).toString() && usuario == qry.value(5).toString())
             {
            //Usuario y pass correcto,se abre la ventana de principal de estudiante
                ui->label_Status->setText("VALIDO");

                valido =1;
                close();
                InterfazEstu interfaz;
                interfaz.setDatos(qry.value(0).toString(),qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString(),qry.value(5).toString());
                interfaz.setModal(true);
                interfaz.exec();

            }
            if(valido==0)
                //si los datos no son correcto se abre una notificacion
                  ui->label_Status->setText("Usuario o contraseña invalida");
            }

        }
}
