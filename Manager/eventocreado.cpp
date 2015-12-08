#include "eventocreado.h"
#include "ui_eventocreado.h"
//esto es solo una ventana de notificacion cuando se crea un evento
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
