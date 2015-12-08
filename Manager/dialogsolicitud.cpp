#include "dialogsolicitud.h"
#include "ui_dialogsolicitud.h"
//esto es solo una ventana de notificacion cuando se hace una solicitud
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
