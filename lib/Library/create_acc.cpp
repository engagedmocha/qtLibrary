#include "create_acc.h"
#include "ui_create_acc.h"

Create_acc::Create_acc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Create_acc)
{
    ui->setupUi(this);
}

Create_acc::~Create_acc()
{
    delete ui;
}



void Create_acc::on_pushButton_clicked()
{
    QString newuser,newpass,repeat,fullname;
    newuser = ui->newUsername->text();
    newpass = ui->newPass->text();
    repeat = ui->passRepeat->text();
    fullname = ui->fullname_in->text();

    if(repeat != newpass){
        ui->statusbar->showMessage("Passwords don't match!");
        return;
    }
    // function to check database

    //

    if(createa(newuser,newpass,fullname)){
        ui->statusbar->showMessage("account created succesfuly");
    }else{
        ui->statusbar->showMessage("username already exists");
    }


}


void Create_acc::on_radioButton_clicked(bool checked)
{
    if(checked){
        ui->passRepeat->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passRepeat->setEchoMode(QLineEdit::Password);
    }
}

bool createa(QString user,QString pass,QString name){
    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();
    QJsonArray users = jsonObject["Members"].toArray();
    jsonFile.close();

    //check if account already exists//

    QJsonObject newacc;
    newacc.insert("username",user);
    newacc.insert("password",pass);
    newacc.insert("name",name);
    newacc.insert("borrowed","0");

    users.append(newacc);

    jsonObject["Members"] = users;

    changeType.setObject(jsonObject);

    jsonFile.open(QIODevice::WriteOnly);
    jsonFile.write(changeType.toJson());

    jsonFile.close();

    return true;
}
