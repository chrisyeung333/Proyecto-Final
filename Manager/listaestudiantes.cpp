#include "listaestudiantes.h"
#include "ui_listaestudiantes.h"
#include "mainwindow.h"
ListaEstudiantes::ListaEstudiantes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaEstudiantes)
{
    ui->setupUi(this);
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [Nombre],[Apellido],[Carne],[Telefono],[correo] FROM [Manager].[dbo].[estudiantes]");
    ui->tableView->setModel(model);
}

ListaEstudiantes::~ListaEstudiantes()
{
    delete ui;
}
