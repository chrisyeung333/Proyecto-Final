#include "crearevento.h"
#include "ui_crearevento.h"
#include "mainwindow.h"
#include "eventocreado.h"
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
    //qDebug()<< tema<<aula<<cupos<<fechaString<<descripcion<<horaString<<aula;
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

    EventoCreado ventana;
    ventana.setModal(true);
    ventana.exec();
    close();
}
