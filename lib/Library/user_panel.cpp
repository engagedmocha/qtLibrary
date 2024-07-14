#include "user_panel.h"
#include "ui_user_panel.h"
#include "library.h"

User_panel::User_panel(QString username,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::User_panel)
{
    ui->setupUi(this);
    this->thisusername = username;

    /*
     *     QFile File;
    QJsonDocument changeType;
    QJsonObject jsonObject;
    QJsonArray users;
    QJsonArray books;
     *
     */

    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();

    QJsonArray users = jsonObject["Members"].toArray();
    jsonFile.close();

    this->changeType = changeType;
    this->jsonObject = jsonObject;
    this->users = users;
    this->books = jsonObject["books"].toArray();
    this->jsonPath = direction.filePath("UserDatabase.json");
}

User_panel::~User_panel()
{
    this->jsonObject["Members"] = this->users;
    this->jsonObject["books"] = this->books;
    this->changeType.setObject(this->jsonObject);

    QFile File(this->jsonPath);
    File.open(QIODevice::WriteOnly);
    File.write(this->changeType.toJson());
    File.close();

    delete ui;
}

void User_panel::on_search_btn_clicked()
{
    QString req_title = ui->search_name->text().toLower();
    QString req_author = ui->search_author->text().toLower();

    for(QJsonValue value:books){
        this->book = value.toObject();
        if(book["title"].toString() == req_title || book["author"].toString() == req_author){
            QString info = book["title"].toString() + "\n" + "written by: " + book["author"].toString();
            ui->borrowinfo->setText(info);
        }
    }
}

void User_panel::on_Borrow_btn_clicked()
{
    if(book["available"].toString().toInt() == 0){
        ui->statusbar->showMessage("This book is not available");
        return;
    }

    int counter = 0;
    for(QJsonValue value:users){
        QJsonObject user = value.toObject();
        if(user["username"].toString() == this->thisusername){
            if(user["borrowed"].toString().toInt() > 1){
                ui->statusbar->showMessage("User borrow limit exceeded!");
                return;
            }
            user["borrowed"] = QString::number(user["borrowed"].toString().toInt()+1);
            users[counter] = user;
            break;
        }
        counter++;
    }

    counter = 0;
    for(QJsonValue value:books){
        QJsonObject it = value.toObject();
        if(it == book){
            it["available"] = QString::number(it["available"].toString().toInt()-1);
            books[counter] = it;
            break;
        }
        counter++;
    }
}


void User_panel::on_return_2_clicked()
{
    //check if the book is in the database//
    QString returnTi = ui->return_title->text().toLower();
    QString returnAu = ui->return_auth->text().toLower();

    int counter = 0;
    for(QJsonValue value:books){
        QJsonObject it = value.toObject();
        if(it["title"].toString() == returnTi && it["author"].toString() == returnAu){
            it["available"] = QString::number(it["available"].toString().toInt()+1);
            books[counter] = it;
            ui->statusbar->showMessage("succesful return");
            break;
        }
        counter++;
    }

    counter=0;
    for(QJsonValue value:users){
        QJsonObject user = value.toObject();
        if(user["username"].toString() == this->thisusername){
            user["borrowed"] = QString::number(user["borrowed"].toString().toInt()-1);
            users[counter] = user;
            break;
        }
        counter++;
    }
}


void User_panel::on_pushButton_clicked()
{

    Library *login = new Library;
    login->show();

    this->~User_panel();
}

