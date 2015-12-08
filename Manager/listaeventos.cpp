#include "listaeventos.h"
#include "ui_listaeventos.h"
#include "mainwindow.h"
//esta es la ventana de la lista de eventos
ListaEventos::ListaEventos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaEventos)
{
    ui->setupUi(this);

    QSqlQuery qry3;
    qry3.exec("SELECT * FROM [Manager].[dbo].[eventos]");
    {

     while(qry3.next())
        {

    ui->comboBox->addItem(qry3.value(0).toString());
        }
    }

}

ListaEventos::~ListaEventos()
{
    delete ui;
}
//cuando se oprime el boton de mostrar estudiantes, se saca de la base de datos los nombres de los estudiantes que solicitaron ese evento
void ListaEventos::on_pushButton_clicked()
{
    this->model = new QSqlQueryModel();
    QString x = QString("SELECT * FROM [Manager].[dbo].[%1]").arg(ui->comboBox->currentText());
    model->setQuery(x);
    ui->tableView->setModel(model);
}
