#include "solicitud.h"
#include "ui_solicitud.h"
#include "dialogsolicitud.h"
#include <QDebug>
QString nombre2;
QString apellido2;
QString carne2;
QString eventoSelec;
Solicitud::Solicitud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Solicitud)
{
    ui->setupUi(this);
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [Tema],[Aula],[Fecha],[Hora],[Descripcion],[Cupos],[Solicitudes]FROM [Manager].[dbo].[eventos]");
    ui->tableView->setModel(model);
    QSqlQuery qry3;
    qry3.exec("SELECT * FROM [Manager].[dbo].[eventos]");
    {

     while(qry3.next())
        {

    ui->comboBox->addItem(qry3.value(0).toString());
        }
    }
}

Solicitud::~Solicitud()
{
    delete ui;
}
void Solicitud::setDatos(QString n,QString a,QString c)
{
    nombre2 = n;
    apellido2 =a;
    carne2 = c;

    qDebug() << nombre2 << apellido2 << carne2;
}

void Solicitud::on_pushButton_clicked()
{
    eventoSelec = ui->comboBox->currentText();
    QString sQuery4 = QString("INSERT INTO [Manager].[dbo].[%1]([Nombre],[Apellido],[Carne])VALUES(:nombre,:apellido,:carne)").arg(eventoSelec);
    QSqlQuery qry4;
    qry4.prepare(sQuery4);
    qry4.bindValue(":nombre",nombre2);
    qry4.bindValue(":apellido",apellido2);
    qry4.bindValue(":carne",carne2);
    qry4.exec();
    QString eventoString = "\'" + eventoSelec + "\'";
    QSqlQuery qry6;

    int solicitud;
    if(qry6.exec("SELECT * FROM [Manager].[dbo].[eventos]"))
    {
     while(qry6.next())
        {
          // qDebug() << qry.value(5).toString();
        if(eventoSelec == qry6.value(0).toString())
         {
             solicitud = qry6.value(6).toInt();
             qDebug() << solicitud;
             solicitud = solicitud +1;
             qDebug() << solicitud;

        }
        }
    }
                 qDebug() << solicitud;
    QString SQuery7 = "UPDATE [Manager].[dbo].[eventos] SET [Solicitudes] = :solicitudes WHERE [Tema] = :evento";
    QSqlQuery qry7;
    qry7.prepare(SQuery7);
    qry7.bindValue(":solicitudes",solicitud);
    qry7.bindValue(":evento",eventoSelec);
    qry7.exec();
    close();

    DialogSolicitud dialogSolicitud;
    dialogSolicitud.setModal(true);
    dialogSolicitud.exec();

}
