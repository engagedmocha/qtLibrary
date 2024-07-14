/********************************************************************************
** Form generated from reading UI file 'user_panel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PANEL_H
#define UI_USER_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_panel
{
public:
    QWidget *centralwidget;
    QTextBrowser *borrowinfo;
    QLineEdit *search_name;
    QLineEdit *search_author;
    QPushButton *search_btn;
    QPushButton *Borrow_btn;
    QLabel *welcome_label;
    QLineEdit *return_title;
    QLineEdit *return_auth;
    QPushButton *return_2;
    QLabel *label;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User_panel)
    {
        if (User_panel->objectName().isEmpty())
            User_panel->setObjectName("User_panel");
        User_panel->resize(800, 600);
        User_panel->setStyleSheet(QString::fromUtf8("background-color:#a98467"));
        centralwidget = new QWidget(User_panel);
        centralwidget->setObjectName("centralwidget");
        borrowinfo = new QTextBrowser(centralwidget);
        borrowinfo->setObjectName("borrowinfo");
        borrowinfo->setGeometry(QRect(20, 30, 421, 281));
        borrowinfo->setStyleSheet(QString::fromUtf8("background-color:#99582a;\n"
"color:#6f1d1b"));
        search_name = new QLineEdit(centralwidget);
        search_name->setObjectName("search_name");
        search_name->setGeometry(QRect(460, 60, 311, 31));
        search_name->setStyleSheet(QString::fromUtf8("background-color:#99582a"));
        search_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        search_author = new QLineEdit(centralwidget);
        search_author->setObjectName("search_author");
        search_author->setGeometry(QRect(460, 110, 311, 31));
        search_author->setStyleSheet(QString::fromUtf8("background-color:#99582a"));
        search_btn = new QPushButton(centralwidget);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(570, 170, 89, 25));
        search_btn->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        Borrow_btn = new QPushButton(centralwidget);
        Borrow_btn->setObjectName("Borrow_btn");
        Borrow_btn->setGeometry(QRect(470, 260, 301, 41));
        Borrow_btn->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(10, 10, 131, 21));
        return_title = new QLineEdit(centralwidget);
        return_title->setObjectName("return_title");
        return_title->setGeometry(QRect(260, 400, 331, 31));
        return_title->setStyleSheet(QString::fromUtf8("background-color:#99582a"));
        return_auth = new QLineEdit(centralwidget);
        return_auth->setObjectName("return_auth");
        return_auth->setGeometry(QRect(260, 440, 331, 31));
        return_auth->setStyleSheet(QString::fromUtf8("background-color:#99582a"));
        return_2 = new QPushButton(centralwidget);
        return_2->setObjectName("return_2");
        return_2->setGeometry(QRect(380, 500, 89, 25));
        return_2->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 360, 691, 31));
        label->setStyleSheet(QString::fromUtf8("background-color:#432818;\n"
"color:black"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 550, 161, 21));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        User_panel->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(User_panel);
        statusbar->setObjectName("statusbar");
        User_panel->setStatusBar(statusbar);

        retranslateUi(User_panel);

        QMetaObject::connectSlotsByName(User_panel);
    } // setupUi

    void retranslateUi(QMainWindow *User_panel)
    {
        User_panel->setWindowTitle(QCoreApplication::translate("User_panel", "MainWindow", nullptr));
        search_name->setPlaceholderText(QCoreApplication::translate("User_panel", "Search by name", nullptr));
        search_author->setPlaceholderText(QCoreApplication::translate("User_panel", "Search by author", nullptr));
        search_btn->setText(QCoreApplication::translate("User_panel", "Search", nullptr));
        Borrow_btn->setText(QCoreApplication::translate("User_panel", "Borrow", nullptr));
        welcome_label->setText(QString());
        return_title->setPlaceholderText(QCoreApplication::translate("User_panel", "Title", nullptr));
        return_auth->setPlaceholderText(QCoreApplication::translate("User_panel", "author", nullptr));
        return_2->setText(QCoreApplication::translate("User_panel", "Return", nullptr));
        label->setText(QCoreApplication::translate("User_panel", "Returning a book?", nullptr));
        pushButton->setText(QCoreApplication::translate("User_panel", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User_panel: public Ui_User_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PANEL_H
