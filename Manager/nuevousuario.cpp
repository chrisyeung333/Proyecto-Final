#include "nuevousuario.h"
#include "ui_nuevousuario.h"
#include "mainwindow.h"
#include "registrado.h"
//esta es la ventana para crear un nuevo usuario
NuevoUsuario::NuevoUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevoUsuario)
{
    ui->setupUi(this);
}

NuevoUsuario::~NuevoUsuario()
{
    delete ui;
}
//se toman los datos de las cajas de texto  y se guardan en la base de datos
void NuevoUsuario::on_pushButton_clicked()
{
    QString nombre,apellido,carne,telefono,correo,usuario,pass;
    nombre=ui->lineEdit_7->text();
    apellido=ui->lineEdit_6->text();
    carne=ui->lineEdit_5->text();
    telefono=ui->lineEdit_4->text();
    correo=ui->lineEdit_3->text();
    usuario=ui->lineEdit_2->text();
    pass=ui->lineEdit->text();
    QString sQuery = "INSERT INTO [Manager].[dbo].[estudiantes]([Nombre],[Apellido],[Carne],[Telefono],[correo],[usuario],[pass])VALUES(:nombre,:apellido,:carne,:telefono,:correo,:usuario,:pass)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    qry.bindValue(":nombre",nombre);
    qry.bindValue(":apellido",apellido);
    qry.bindValue(":carne",carne);
    qry.bindValue(":telefono",telefono);
    qry.bindValue(":correo",correo);
    qry.bindValue(":usuario",usuario);
    qry.bindValue(":pass",pass);
    qry.exec();
    Registrado reg;
    reg.setModal(true);
    reg.exec();

}
