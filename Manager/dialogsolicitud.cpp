#include "dialogsolicitud.h"
#include "ui_dialogsolicitud.h"

DialogSolicitud::DialogSolicitud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSolicitud)
{
    ui->setupUi(this);
}

DialogSolicitud::~DialogSolicitud()
{
    delete ui;
}
