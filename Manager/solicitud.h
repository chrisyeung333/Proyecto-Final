#ifndef SOLICITUD_H
#define SOLICITUD_H
#include <QtSql>
#include <QDialog>

namespace Ui {
class Solicitud;
}

class Solicitud : public QDialog
{
    Q_OBJECT

public:
    void setDatos(QString,QString,QString);
    explicit Solicitud(QWidget *parent = 0);
    ~Solicitud();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Solicitud *ui;
    QSqlQueryModel *model;
};

#endif // SOLICITUD_H
