#include "login_member.h"
#include "ui_login_member.h"

Login_member::Login_member(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_member)
{
    ui->setupUi(this);
}

Login_member::~Login_member()
{
    delete ui;
}
