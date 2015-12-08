#include "interfazestu.h"
#include "ui_interfazestu.h"
#include "listaeventos.h"
#include "solicitud.h"
#include "datospersonales.h"
#include <QDebug>
//Esta es la ventana principal depues de que un estudiante ingresa
//se declaran las variables donde se va guardar la informacion del estudiante que ingreso
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

// cuando se oprima el boton de solicitar evento, se abre la ventana de solicitud
void InterfazEstu::on_pushButton_2_clicked()
{
    Solicitud solicitud;
    solicitud.setModal(true);
    solicitud.setDatos(nombre,apellido,carne);
    solicitud.exec();
}
//metodo se de set para asignar los valores de la informacion del estudiante
void InterfazEstu::setDatos(QString n,QString a,QString c,QString t,QString e,QString u)
{
    nombre = n;
    apellido =a;
    carne = c;
    correo = e;
    telefono = t;
    usuario = u;
}

//cuando se oprima el boton de datos personales, se abre la ventana de datos personales
void InterfazEstu::on_pushButton_clicked()
{
    DatosPersonales datos;
    datos.setModal(true);
    datos.setDatos(nombre,apellido,carne,telefono,correo,usuario);
    datos.exec();
}
