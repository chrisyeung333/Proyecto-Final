#ifndef DIALOGSOLICITUD_H
#define DIALOGSOLICITUD_H

#include <QDialog>

namespace Ui {
class DialogSolicitud;
}

class DialogSolicitud : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSolicitud(QWidget *parent = 0);
    ~DialogSolicitud();

private:
    Ui::DialogSolicitud *ui;
};

#endif // DIALOGSOLICITUD_H
