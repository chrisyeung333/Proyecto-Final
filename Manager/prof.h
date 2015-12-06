#ifndef PROF_H
#define PROF_H

#include <QDialog>

namespace Ui {
class Prof;
}

class Prof : public QDialog
{
    Q_OBJECT

public:
    explicit Prof(QWidget *parent = 0);
    ~Prof();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Prof *ui;
};

#endif // PROF_H
