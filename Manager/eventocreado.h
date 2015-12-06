#ifndef EVENTOCREADO_H
#define EVENTOCREADO_H

#include <QDialog>

namespace Ui {
class EventoCreado;
}

class EventoCreado : public QDialog
{
    Q_OBJECT

public:
    explicit EventoCreado(QWidget *parent = 0);
    ~EventoCreado();

private:
    Ui::EventoCreado *ui;
};

#endif // EVENTOCREADO_H
