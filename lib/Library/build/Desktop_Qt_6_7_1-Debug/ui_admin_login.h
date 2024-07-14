/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Login
{
public:
    QWidget *centralwidget;
    QLineEdit *password;
    QPushButton *Login;
    QLineEdit *username;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin_Login)
    {
        if (Admin_Login->objectName().isEmpty())
            Admin_Login->setObjectName("Admin_Login");
        Admin_Login->resize(800, 600);
        centralwidget = new QWidget(Admin_Login);
        centralwidget->setObjectName("centralwidget");
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(180, 300, 451, 41));
        password->setStyleSheet(QString::fromUtf8("color:#0081a7"));
        password->setAlignment(Qt::AlignCenter);
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(330, 370, 161, 31));
        Login->setStyleSheet(QString::fromUtf8("background-color:#14213d;\n"
"color:#cdb4db"));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(180, 250, 451, 41));
        username->setStyleSheet(QString::fromUtf8("color:#0081a7"));
        username->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -30, 791, 621));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/desktop-wallpaper-backgrounds-for-login-page-login-page.jpg")));
        Admin_Login->setCentralWidget(centralwidget);
        label->raise();
        password->raise();
        Login->raise();
        username->raise();
        menubar = new QMenuBar(Admin_Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Admin_Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin_Login);
        statusbar->setObjectName("statusbar");
        Admin_Login->setStatusBar(statusbar);

        retranslateUi(Admin_Login);

        QMetaObject::connectSlotsByName(Admin_Login);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_Login)
    {
        Admin_Login->setWindowTitle(QCoreApplication::translate("Admin_Login", "MainWindow", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Admin_Login", "Admin password", nullptr));
        Login->setText(QCoreApplication::translate("Admin_Login", "Login", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Admin_Login", "Admin username", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin_Login: public Ui_Admin_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
