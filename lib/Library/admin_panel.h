#ifndef ADMIN_PANEL_H
#define ADMIN_PANEL_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

namespace Ui {
class Admin_panel;
}

class Admin_panel : public QMainWindow
{
    Q_OBJECT

public:
    explicit Admin_panel(QWidget *parent = nullptr);
    ~Admin_panel();

    QString jsonPath;
    QJsonDocument changeType;
    QJsonObject jsonObject;
    QJsonArray books;
    QJsonObject book;

private slots:
    void on_search_Right_clicked();

    void on_confirm_right_clicked();

    void on_pushButton_clicked();

    void on_add_btn_clicked();

private:
    Ui::Admin_panel *ui;
};

#endif // ADMIN_PANEL_H
