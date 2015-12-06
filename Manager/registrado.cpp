#include "registrado.h"
#include "ui_registrado.h"

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
