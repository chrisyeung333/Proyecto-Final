#ifndef REGISTRADO_H
#define REGISTRADO_H

#include <QDialog>

namespace Ui {
class Registrado;
}

class Registrado : public QDialog
{
    Q_OBJECT

public:
    explicit Registrado(QWidget *parent = 0);
    ~Registrado();

private:
    Ui::Registrado *ui;
};

#endif // REGISTRADO_H
