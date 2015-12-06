#include "listaeventos.h"
#include "ui_listaeventos.h"
#include "mainwindow.h"
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

void ListaEventos::on_pushButton_clicked()
{
    this->model = new QSqlQueryModel();
    QString x = QString("SELECT * FROM [Manager].[dbo].[%1]").arg(ui->comboBox->currentText());
    model->setQuery(x);
    ui->tableView->setModel(model);
}
