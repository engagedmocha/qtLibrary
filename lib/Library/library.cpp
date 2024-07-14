#include "library.h"
#include "ui_library.h"
#include "user_panel.h"
#include "admin_login.h"
#include "create_acc.h"
#include "passreset.h"

Library::Library(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Library)
{
    ui->setupUi(this);
    ui->pReset->setVisible(false);
}

Library::~Library()
{
    delete ui;
}


void Library::on_Login_clicked()
{
    QString Uname = ui->username_in->text();
    QString Upass = ui->pass_in->text();

    QJsonObject current_user = findaccount(Uname,Upass);

    if(!current_user.isEmpty()){
        User_panel *Upanel = new User_panel(Uname);
        Upanel->show();
        close();
    }else{
        ui->statusbar->showMessage("incorrect!");
        ui->pReset->setVisible(true);
    }
}

void Library::on_radioButton_clicked(bool checked)
{
    if(checked){
        ui->pass_in->setEchoMode(QLineEdit::Normal);
    }else{
        ui->pass_in->setEchoMode(QLineEdit::Password);
    }
}


void Library::on_admin_rdr_clicked()
{
    Admin_Login *admin = new Admin_Login;
    admin->show();


    close();
}


void Library::on_Create_acc_clicked()
{
    Create_acc *newacc = new Create_acc;
    newacc->show();

}


void Library::on_pReset_clicked()
{
    QString user = ui->username_in->text();
    passReset *Resetp = new passReset(this,user);
    Resetp->show();
}

QJsonObject findaccount(QString target_Username,QString target_password){
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
        if(account["username"].toString()==target_Username && account["password"].toString()==target_password){
            return account;
        }
    }
    return {};
}
