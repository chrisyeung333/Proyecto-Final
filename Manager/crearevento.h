#ifndef CREAREVENTO_H
#define CREAREVENTO_H

#include <QDialog>

namespace Ui {
class CrearEvento;
}

class CrearEvento : public QDialog
{
    Q_OBJECT

public:
    explicit CrearEvento(QWidget *parent = 0);
    ~CrearEvento();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CrearEvento *ui;
};

#endif // CREAREVENTO_H
