#include "interfazprof.h"
#include "ui_interfazprof.h"
#include "crearevento.h"
#include "listaestudiantes.h"
#include "listaeventos.h"
InterfazProf::InterfazProf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfazProf)
{
    ui->setupUi(this);
}

InterfazProf::~InterfazProf()
{
    delete ui;
}

void InterfazProf::on_pushButton_clicked()
{
    CrearEvento evento;
    evento.setModal(true);
    evento.exec();
}

void InterfazProf::on_pushButton_2_clicked()
{
    ListaEstudiantes lista;
    lista.setModal(true);
    lista.exec();
}

void InterfazProf::on_pushButton_3_clicked()
{
    ListaEventos lista;
    lista.setModal(true);
    lista.exec();
}
