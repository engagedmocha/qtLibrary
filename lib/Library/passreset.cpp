#include "passreset.h"
#include "ui_passreset.h"

passReset::passReset(QWidget *parent,QString username)
    : QMainWindow(parent)
    , ui(new Ui::passReset)
{
    ui->setupUi(this);
    ui->username_in->setPlaceholderText(username);
    ui->passin->setPlaceholderText("password");
    ui->passrepeat->setPlaceholderText("repeat");
}

passReset::~passReset()
{
    delete ui;
}


void passReset::on_submit_clicked()
{
    QString newpass = ui->passin->text();
    QString prepeat = ui->passrepeat->text();
    QString username = ui->username_in->text();

    if(newpass != prepeat){
        ui->statusbar->showMessage("passwords don't match");
        return;
    }

    QJsonObject current_user = findaccount(username);
    if(current_user.isEmpty()){
        ui->statusbar->showMessage("Username Doesn't exist");
        return;
    }

    //function to set new password
    setnewpass(current_user,newpass);
    //

    ui->statusbar->showMessage("password has been succesfully reseted");

}

void setnewpass(QJsonObject ResetACC,QString newpass){
    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();

    QJsonArray users = jsonObject["Members"].toArray();
    jsonFile.close();

    int counter = 0;
    for(QJsonValue value:users){
        QJsonObject account = value.toObject();
        if(account["username"].toString()==ResetACC["username"].toString()){
            account["password"] = newpass;
            users[counter] = account;
            break;
        }
        counter++;
    }


    jsonObject["Members"] = users;
    changeType.setObject(jsonObject);

    jsonFile.open(QIODevice::WriteOnly);
    jsonFile.write(changeType.toJson());

    jsonFile.close();
}



QJsonObject findaccount(QString target_Username){
    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();
    QJsonArray users = jsonObject["Members"].toArray();
    jsonFile.close();

    for(QJsonValue value:users){
        QJsonObject account = value.toObject();
        if(account["username"].toString()==target_Username){
            return account;
        }
    }
    return {};
}
