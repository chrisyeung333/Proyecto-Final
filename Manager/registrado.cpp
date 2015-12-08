#include "registrado.h"
#include "ui_registrado.h"
//esta es una ventana de notificacion cuando se crea una nuevo usuario
Registrado::Registrado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registrado)
{
    ui->setupUi(this);
}

Registrado::~Registrado()
{
    delete ui;
}
