#include "admin_login.h"
#include "ui_admin_login.h"
#include "admin_panel.h"

Admin_Login::Admin_Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_Login)
{
    ui->setupUi(this);
}

Admin_Login::~Admin_Login()
{
    delete ui;
}

void Admin_Login::on_Login_clicked()
{
    QString current_username = ui->username->text();
    QString current_password = ui->password->text();

    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();

    QJsonArray admins = jsonObject["Admins"].toArray();
    jsonFile.close();

    for(QJsonValue value:admins){
        QJsonObject admin = value.toObject();
        if(admin["username"].toString() == current_username && admin["password"].toString() == current_password){
            Admin_panel *panel = new Admin_panel;
            panel->show();
            close();
        }
    }
}

