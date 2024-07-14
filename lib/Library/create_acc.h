#ifndef CREATE_ACC_H
#define CREATE_ACC_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

namespace Ui {
class Create_acc;
}

class Create_acc : public QMainWindow
{
    Q_OBJECT

public:
    explicit Create_acc(QWidget *parent = nullptr);
    ~Create_acc();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked(bool checked);

private:
    Ui::Create_acc *ui;
};

bool createa(QString user,QString pass,QString name);

#endif // CREATE_ACC_H
