#include "admin_panel.h"
#include "ui_admin_panel.h"
#include "library.h"


Admin_panel::Admin_panel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Admin_panel)
{
    ui->setupUi(this);

    QDir direction(QCoreApplication:: applicationDirPath());
    QString jsonPath = direction.filePath("UserDatabase.json");
    QFile jsonFile(jsonPath);
    jsonFile.open(QIODevice::ReadOnly);

    QByteArray readJson = jsonFile.readAll();

    QJsonDocument changeType = QJsonDocument::fromJson(readJson);
    QJsonObject jsonObject = changeType.object();
    jsonFile.close();

    this->changeType = changeType;
    this->jsonObject = jsonObject;
    this->books = jsonObject["books"].toArray();
    this->jsonPath = direction.filePath("UserDatabase.json");
}

Admin_panel::~Admin_panel()
{
    this->jsonObject["books"] = this->books;
    this->changeType.setObject(this->jsonObject);

    QFile File(this->jsonPath);
    File.open(QIODevice::WriteOnly);
    File.write(this->changeType.toJson());
    File.close();

    delete ui;
}

void Admin_panel::on_search_Right_clicked()
{
    QString req_title = ui->search_name->text();
    QString req_author = ui->search_author->text();


    for(QJsonValue value:books){
        this->book = value.toObject();
        if(book["title"].toString() == req_title || book["author"].toString() == req_author){
            QString info = book["title"].toString() + "\n" + "written by: " + book["author"].toString();
            ui->removestat->setText(info);
        }
    }
}


void Admin_panel::on_confirm_right_clicked()
{
    int counter =0;
    for(QJsonValue value:books){
        QJsonObject rm = value.toObject();
        if(rm == this->book){
            rm["available"] = QString::number(rm["available"].toString().toInt()-1);
            books[counter] = rm;
            break;
        }
        counter++;
    }
}


void Admin_panel::on_pushButton_clicked()
{
    Library *login = new Library;
    login->show();

    this->~Admin_panel();
}


void Admin_panel::on_add_btn_clicked()
{
    QString titleN = ui->add_booklabel->text();
    QString authN = ui->add_author->text();
    QString amount = ui->add_count->text();

    QJsonObject newbook;
    newbook.insert("title",titleN);
    newbook.insert("author",authN);
    newbook.insert("available",amount);

    this->books.append(newbook);

    ui->statusbar->showMessage("Book has been succesfully added to the library");
}

