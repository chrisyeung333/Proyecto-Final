#ifndef LOGINFORM2_H
#define LOGINFORM2_H

#include <QDialog>

namespace Ui {
class LoginForm2;
}

class LoginForm2 : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm2(QWidget *parent = 0);
    ~LoginForm2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginForm2 *ui;
};

#endif // LOGINFORM2_H
