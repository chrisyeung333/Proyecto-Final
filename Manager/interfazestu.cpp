#include "interfazestu.h"
#include "ui_interfazestu.h"
#include "listaeventos.h"
#include "solicitud.h"
#include "datospersonales.h"
#include <QDebug>
QString nombre;
QString apellido;
QString carne;
QString telefono;
QString correo;
QString usuario;
InterfazEstu::InterfazEstu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazEstu)
{
    ui->setupUi(this);
}

InterfazEstu::~InterfazEstu()
{
    delete ui;
}


void InterfazEstu::on_pushButton_2_clicked()
{
    Solicitud solicitud;
    solicitud.setModal(true);
    solicitud.setDatos(nombre,apellido,carne);
    solicitud.exec();
}

void InterfazEstu::setDatos(QString n,QString a,QString c,QString t,QString e,QString u)
{
    nombre = n;
    apellido =a;
    carne = c;
    correo = e;
    telefono = t;
    usuario = u;
}


void InterfazEstu::on_pushButton_clicked()
{
    DatosPersonales datos;
    datos.setModal(true);
    datos.setDatos(nombre,apellido,carne,telefono,correo,usuario);
    datos.exec();
}
