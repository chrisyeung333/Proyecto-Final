#include "datospersonales.h"
#include "ui_datospersonales.h"
//Esta es la ventana de los datos personales del estudiante
//se declaran las variables en donde se va a guardar la informacion del estudiante
QString nombre3;
QString apellido3;
QString carne3;
QString telefono3;
QString correo3;
QString usuario3;
DatosPersonales::DatosPersonales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DatosPersonales)
{
    ui->setupUi(this);

}

DatosPersonales::~DatosPersonales()
{
    delete ui;
}
// se crea el metodo set para poner los valores de las variables en las etiquetas
void DatosPersonales::setDatos(QString n,QString a,QString c,QString t,QString e,QString u)
{
    nombre3 = n;
    apellido3 =a;
    carne3 = c;
    correo3 = e;
    telefono3 = t;
    usuario3 = u;
    ui->label_7->setText (usuario3);
    ui->label_8->setText (nombre3);
    ui->label_9->setText (apellido3);
    ui->label_10->setText (carne3);
    ui->label_11->setText (telefono3);
    ui->label_12->setText (correo3);
}


