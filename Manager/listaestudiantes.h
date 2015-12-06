#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H
#include <QtSql>
#include <QDialog>
#include <QtGui>
#include <QtCore>
namespace Ui {
class ListaEstudiantes;
}

class ListaEstudiantes : public QDialog
{
    Q_OBJECT

public:
    explicit ListaEstudiantes(QWidget *parent = 0);
    ~ListaEstudiantes();

private:
    Ui::ListaEstudiantes *ui;
    QSqlQueryModel *model;
};

#endif // LISTAESTUDIANTES_H
