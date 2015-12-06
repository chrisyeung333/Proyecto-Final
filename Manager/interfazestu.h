#ifndef INTERFAZESTU_H
#define INTERFAZESTU_H

#include <QDialog>

namespace Ui {
class InterfazEstu;
}

class InterfazEstu : public QDialog
{
    Q_OBJECT

public:
    void setDatos(QString,QString,QString,QString,QString,QString);
    explicit InterfazEstu(QWidget *parent = 0);
    ~InterfazEstu();


private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::InterfazEstu *ui;
};

#endif // INTERFAZESTU_H
