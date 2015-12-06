#include "prof.h"
#include "ui_prof.h"

Prof::Prof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prof)
{
    ui->setupUi(this);
}

Prof::~Prof()
{
    delete ui;
}

void Prof::on_pushButton_clicked()
{

}
