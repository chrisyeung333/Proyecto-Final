#include "mainwindow.h"
#include <QApplication>
//este es el main que ejecuta el programa y abre la ventana principal
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
