#ifndef NUEVOUSUARIO_H
#define NUEVOUSUARIO_H

#include <QDialog>

namespace Ui {
class NuevoUsuario;
}

class NuevoUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit NuevoUsuario(QWidget *parent = 0);
    ~NuevoUsuario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NuevoUsuario *ui;
};

#endif // NUEVOUSUARIO_H
