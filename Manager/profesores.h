#ifndef PROFESORES_H
#define PROFESORES_H

#include <QDialog>

namespace Ui {
class Profesores;
}

class Profesores : public QDialog
{
    Q_OBJECT

public:
    explicit Profesores(QWidget *parent = 0);
    ~Profesores();

private:
    Ui::Profesores *ui;
};

#endif // PROFESORES_H
