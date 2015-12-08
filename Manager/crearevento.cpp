#include "crearevento.h"
#include "ui_crearevento.h"
#include "mainwindow.h"
#include "eventocreado.h"
//Esta es la ventana de creacion de un evento
CrearEvento::CrearEvento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CrearEvento)
{
    ui->setupUi(this);
}

CrearEvento::~CrearEvento()
{
    delete ui;
}

void CrearEvento::on_pushButton_clicked()
{
    //Se declaran las variables y se determina el valor de cada variable a partir de lo que el profesor escriba en las cajas de texto
    QString tema,aula,descripcion,fechaString,horaString;
    int cupos;
    QDate fecha;
    QTime hora;
    tema=ui->lineEdit->text();
    aula=ui->lineEdit_2->text();
    cupos=ui->lineEdit_7->text().toInt();
    descripcion=ui->textEdit->toPlainText();
    fecha=ui->dateEdit->date();
    hora=ui->timeEdit->time();
    fechaString=fecha.toString();
    horaString=hora.toString();
    //se invoca el query para insertar en la base de datos los datos suministrados
    QString sQuery = "INSERT INTO [Manager].[dbo].[eventos]([Tema],[Aula],[Fecha],[Hora],[Descripcion],[Cupos],[Solicitudes])VALUES(:tema,:aula,:fecha,:hora,:descripcion,:cupos,:sol)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    qry.bindValue(":tema",tema);
    qry.bindValue(":aula",aula);
    qry.bindValue(":descripcion",descripcion);
    qry.bindValue(":hora",horaString);
    qry.bindValue(":fecha",fechaString);
    qry.bindValue(":cupos",cupos);
    qry.bindValue(":sol",0);
    qry.exec();
qDebug() << horaString << hora;
    QString sQuery2 = QString("CREATE TABLE [Manager].[dbo].[%1]([Nombre] [varchar](30) NOT NULL,[Apellido] [varchar](30) NOT NULL,[Carne] [varchar](10) NOT NULL) ON [PRIMARY]").arg(tema);
    QSqlQuery qry2;
    qry2.prepare(sQuery2);
    qry2.exec();
//despues de haber insertado los datos se abre una notificacion y se cierra la ventana.
    EventoCreado ventana;
    ventana.setModal(true);
    ventana.exec();
    close();
}
