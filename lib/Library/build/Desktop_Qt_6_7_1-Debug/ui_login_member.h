/********************************************************************************
** Form generated from reading UI file 'login_member.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_MEMBER_H
#define UI_LOGIN_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_member
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login_member)
    {
        if (Login_member->objectName().isEmpty())
            Login_member->setObjectName("Login_member");
        Login_member->resize(800, 600);
        centralwidget = new QWidget(Login_member);
        centralwidget->setObjectName("centralwidget");
        Login_member->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login_member);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Login_member->setMenuBar(menubar);
        statusbar = new QStatusBar(Login_member);
        statusbar->setObjectName("statusbar");
        Login_member->setStatusBar(statusbar);

        retranslateUi(Login_member);

        QMetaObject::connectSlotsByName(Login_member);
    } // setupUi

    void retranslateUi(QMainWindow *Login_member)
    {
        Login_member->setWindowTitle(QCoreApplication::translate("Login_member", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_member: public Ui_Login_member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_MEMBER_H
