#include "listaestudiantes.h"
#include "ui_listaestudiantes.h"
#include "mainwindow.h"
//esta es la ventana de la lista de estudiantes
ListaEstudiantes::ListaEstudiantes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaEstudiantes)
{
    //se crea una tabla y se introducen los datos de la base de datos
    ui->setupUi(this);
    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [Nombre],[Apellido],[Carne],[Telefono],[correo] FROM [Manager].[dbo].[estudiantes]");
    ui->tableView->setModel(model);
}

ListaEstudiantes::~ListaEstudiantes()
{
    delete ui;
}
