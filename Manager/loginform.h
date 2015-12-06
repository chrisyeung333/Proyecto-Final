#ifndef LOGINFORM_H
#define LOGINFORM_H
//#include <QtSql>
//#include <QDebug>
#include <QDialog>

namespace Ui {
class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginForm *ui;
   // QSqlDatabase db;
};

#endif // LOGINFORM_H
