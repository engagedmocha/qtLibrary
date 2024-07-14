#ifndef PASSRESET_H
#define PASSRESET_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>


namespace Ui {
class passReset;
}

class passReset : public QMainWindow
{
    Q_OBJECT

public:
    explicit passReset(QWidget *parent = nullptr,QString username = "");
    ~passReset();

private slots:
    void on_submit_clicked();

private:
    Ui::passReset *ui;
};

QJsonObject findaccount(QString target_Username);

void setnewpass(QJsonObject ResetACC,QString newpass);

#endif // PASSRESET_H
