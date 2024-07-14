#ifndef USER_PANEL_H
#define USER_PANEL_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

namespace Ui {
class User_panel;
}

class User_panel : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_panel(QString username = "" ,QWidget *parent = nullptr);
    ~User_panel();
    QString thisusername;

    QString jsonPath;
    QJsonDocument changeType;
    QJsonObject jsonObject;
    QJsonArray users;
    QJsonArray books;
    QJsonObject book;

private slots:
    void on_search_btn_clicked();

    void on_Borrow_btn_clicked();

    void on_return_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::User_panel *ui;
};

#endif // USER_PANEL_H
