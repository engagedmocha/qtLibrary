#ifndef ADMIN_LOGIN_H
#define ADMIN_LOGIN_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

namespace Ui {
class Admin_Login;
}

class Admin_Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin_Login(QWidget *parent = nullptr);
    ~Admin_Login();

private slots:
    void on_Login_clicked();

private:
    Ui::Admin_Login *ui;
};

#endif // ADMIN_LOGIN_H
