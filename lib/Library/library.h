#ifndef LIBRARY_H
#define LIBRARY_H

#include <QMainWindow>

#include <QDir>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class Library;
}
QT_END_NAMESPACE

class Library : public QMainWindow
{
    Q_OBJECT

public:
    Library(QWidget *parent = nullptr);
    ~Library();

private slots:
    void on_Login_clicked();

    void on_radioButton_clicked(bool checked);

    void on_admin_rdr_clicked();

    void on_Create_acc_clicked();

    void on_pReset_clicked();

private:
    Ui::Library *ui;
};


QJsonObject findaccount(QString target_Username,QString target_password);

#endif // LIBRARY_H
