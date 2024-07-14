/********************************************************************************
** Form generated from reading UI file 'create_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_ACC_H
#define UI_CREATE_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create_acc
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *newUsername;
    QLineEdit *newPass;
    QLineEdit *passRepeat;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLineEdit *fullname_in;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Create_acc)
    {
        if (Create_acc->objectName().isEmpty())
            Create_acc->setObjectName("Create_acc");
        Create_acc->resize(800, 600);
        centralwidget = new QWidget(Create_acc);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 140, 111, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/6522516.png")));
        label->setScaledContents(true);
        newUsername = new QLineEdit(centralwidget);
        newUsername->setObjectName("newUsername");
        newUsername->setGeometry(QRect(200, 310, 401, 41));
        newUsername->setStyleSheet(QString::fromUtf8("background-color:#caf0f8"));
        newPass = new QLineEdit(centralwidget);
        newPass->setObjectName("newPass");
        newPass->setGeometry(QRect(200, 360, 401, 41));
        newPass->setStyleSheet(QString::fromUtf8("background-color:#caf0f8"));
        passRepeat = new QLineEdit(centralwidget);
        passRepeat->setObjectName("passRepeat");
        passRepeat->setGeometry(QRect(200, 410, 401, 41));
        passRepeat->setStyleSheet(QString::fromUtf8("background-color:#caf0f8"));
        passRepeat->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 470, 131, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#90e0ef;\n"
"color:black"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(540, 410, 61, 41));
        radioButton->setStyleSheet(QString::fromUtf8("color:black"));
        fullname_in = new QLineEdit(centralwidget);
        fullname_in->setObjectName("fullname_in");
        fullname_in->setGeometry(QRect(200, 260, 401, 41));
        fullname_in->setStyleSheet(QString::fromUtf8("background-color:#caf0f8"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, -10, 821, 561));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/login-bg.png")));
        label_2->setScaledContents(true);
        Create_acc->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        newUsername->raise();
        newPass->raise();
        passRepeat->raise();
        pushButton->raise();
        radioButton->raise();
        fullname_in->raise();
        menubar = new QMenuBar(Create_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Create_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(Create_acc);
        statusbar->setObjectName("statusbar");
        Create_acc->setStatusBar(statusbar);

        retranslateUi(Create_acc);

        QMetaObject::connectSlotsByName(Create_acc);
    } // setupUi

    void retranslateUi(QMainWindow *Create_acc)
    {
        Create_acc->setWindowTitle(QCoreApplication::translate("Create_acc", "MainWindow", nullptr));
        label->setText(QString());
        newUsername->setPlaceholderText(QCoreApplication::translate("Create_acc", "username", nullptr));
        newPass->setPlaceholderText(QCoreApplication::translate("Create_acc", "password", nullptr));
        passRepeat->setPlaceholderText(QCoreApplication::translate("Create_acc", "repeat password", nullptr));
        pushButton->setText(QCoreApplication::translate("Create_acc", "Submit", nullptr));
        radioButton->setText(QCoreApplication::translate("Create_acc", "show", nullptr));
        fullname_in->setPlaceholderText(QCoreApplication::translate("Create_acc", "Full name", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Create_acc: public Ui_Create_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_ACC_H
