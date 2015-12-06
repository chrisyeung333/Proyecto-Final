#include "eventocreado.h"
#include "ui_eventocreado.h"

EventoCreado::EventoCreado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventoCreado)
{
    ui->setupUi(this);
}

EventoCreado::~EventoCreado()
{
    delete ui;
}
