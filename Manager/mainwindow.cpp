#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "loginform.h"
#include "loginform2.h"
#include "nuevousuario.h"
//esta es la ventana principal, aqui es donde se abre la coneccion con la base de datos
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("Kevin-THINK\\SQLEXPRESS");
    db.setDatabaseName("mydsn32");
//cuando se haya conectado exitosamente con la base de datos, hay un texto que dice conectado
    if(db.open())
    {
        ui->label->setText ("Conectado");
    }

}

MainWindow::~MainWindow()
{

    delete ui;
}




//cuando se presiona alguno de los botones, se abre la ventana correspondiente a cada boton
void MainWindow::on_pushButton_2_clicked()
{
    LoginForm2 loginEstu;
    loginEstu.setModal(true);
    loginEstu.exec();

}

void MainWindow::on_pushButton_clicked()
{
    LoginForm loginProf;
    loginProf.setModal(true);
    loginProf.exec();

}

void MainWindow::on_pushButton_3_clicked()
{
   NuevoUsuario nuevo;
   nuevo.setModal(true);
   nuevo.exec();
}
