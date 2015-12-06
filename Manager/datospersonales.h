#ifndef DATOSPERSONALES_H
#define DATOSPERSONALES_H

#include <QDialog>

namespace Ui {
class DatosPersonales;
}

class DatosPersonales : public QDialog
{
    Q_OBJECT

public:
    void setDatos(QString,QString,QString,QString,QString,QString);
    explicit DatosPersonales(QWidget *parent = 0);
    ~DatosPersonales();

private slots:


private:
    Ui::DatosPersonales *ui;
};

#endif // DATOSPERSONALES_H
