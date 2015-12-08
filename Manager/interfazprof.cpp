#include "interfazprof.h"
#include "ui_interfazprof.h"
#include "crearevento.h"
#include "listaestudiantes.h"
#include "listaeventos.h"
//Esta es la ventana principal si se ingresa como profesor
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
//cuando se oprima el boton de crear evento, se abre la ventana de crear evento
void InterfazProf::on_pushButton_clicked()
{
    CrearEvento evento;
    evento.setModal(true);
    evento.exec();
}
//cuando se oprime el boton de lista de estudiantes se abre la ventana de lista de estudiantes
void InterfazProf::on_pushButton_2_clicked()
{
    ListaEstudiantes lista;
    lista.setModal(true);
    lista.exec();
}
//cuando se oprime el boton de lista de eventos se abre la ventana lista de eventos
void InterfazProf::on_pushButton_3_clicked()
{
    ListaEventos lista;
    lista.setModal(true);
    lista.exec();
}
