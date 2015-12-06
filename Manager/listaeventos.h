#ifndef LISTAEVENTOS_H
#define LISTAEVENTOS_H
#include <QtSql>
#include <QDialog>

namespace Ui {
class ListaEventos;
}

class ListaEventos : public QDialog
{
    Q_OBJECT

public:
    explicit ListaEventos(QWidget *parent = 0);
    ~ListaEventos();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ListaEventos *ui;
    QSqlQueryModel *model;
};

#endif // LISTAEVENTOS_H
