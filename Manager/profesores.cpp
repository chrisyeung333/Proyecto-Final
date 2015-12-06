#include "profesores.h"
#include "ui_profesores.h"

Profesores::Profesores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Profesores)
{
    ui->setupUi(this);
}

Profesores::~Profesores()
{
    delete ui;
}
