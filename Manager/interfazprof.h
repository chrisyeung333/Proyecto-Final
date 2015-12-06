#ifndef INTERFAZPROF_H
#define INTERFAZPROF_H

#include <QDialog>

namespace Ui {
class InterfazProf;
}

class InterfazProf : public QDialog
{
    Q_OBJECT

public:
    explicit InterfazProf(QWidget *parent = 0);
    ~InterfazProf();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::InterfazProf *ui;
};

#endif // INTERFAZPROF_H
