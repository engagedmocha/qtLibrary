/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *Login;
    QPushButton *Create_acc;
    QLineEdit *username_in;
    QLineEdit *pass_in;
    QPushButton *admin_rdr;
    QLabel *label_2;
    QRadioButton *radioButton;
    QToolButton *pReset;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName("Library");
        Library->resize(805, 600);
        Library->setAutoFillBackground(false);
        centralwidget = new QWidget(Library);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 87, 37));
        QFont font;
        font.setFamilies({QString::fromUtf8("Z003")});
        font.setItalic(true);
        frame_2->setFont(font);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        Login = new QPushButton(frame);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(350, 350, 89, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("URW Bookman")});
        font1.setBold(true);
        font1.setItalic(true);
        Login->setFont(font1);
        Login->setStyleSheet(QString::fromUtf8(""));
        Create_acc = new QPushButton(frame);
        Create_acc->setObjectName("Create_acc");
        Create_acc->setGeometry(QRect(320, 390, 141, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("URW Bookman")});
        font2.setBold(true);
        Create_acc->setFont(font2);
        username_in = new QLineEdit(frame);
        username_in->setObjectName("username_in");
        username_in->setGeometry(QRect(170, 260, 441, 31));
        QFont font3;
        font3.setItalic(true);
        username_in->setFont(font3);
        username_in->setReadOnly(false);
        pass_in = new QLineEdit(frame);
        pass_in->setObjectName("pass_in");
        pass_in->setGeometry(QRect(170, 300, 441, 31));
        pass_in->setFont(font3);
        pass_in->setEchoMode(QLineEdit::Password);
        admin_rdr = new QPushButton(frame);
        admin_rdr->setObjectName("admin_rdr");
        admin_rdr->setGeometry(QRect(688, 0, 101, 21));
        QFont font4;
        font4.setBold(true);
        admin_rdr->setFont(font4);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, -10, 801, 601));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pngtree-an-old-bookcase-in-a-library-image_2642908.jpg")));
        label_2->setScaledContents(true);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(540, 300, 71, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font5.setBold(true);
        font5.setItalic(true);
        radioButton->setFont(font5);
        pReset = new QToolButton(frame);
        pReset->setObjectName("pReset");
        pReset->setGeometry(QRect(630, 300, 121, 31));
        label_2->raise();
        frame_2->raise();
        Login->raise();
        Create_acc->raise();
        username_in->raise();
        pass_in->raise();
        admin_rdr->raise();
        radioButton->raise();
        pReset->raise();

        verticalLayout->addWidget(frame);

        Library->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Library);
        statusbar->setObjectName("statusbar");
        Library->setStatusBar(statusbar);

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QMainWindow *Library)
    {
        Library->setWindowTitle(QCoreApplication::translate("Library", "Library", nullptr));
#if QT_CONFIG(statustip)
        frame->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("Library", "Welcome!", nullptr));
        Login->setText(QCoreApplication::translate("Library", "Login", nullptr));
        Create_acc->setText(QCoreApplication::translate("Library", "Create account", nullptr));
#if QT_CONFIG(tooltip)
        username_in->setToolTip(QCoreApplication::translate("Library", "<html><head/><body><p>username</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        username_in->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        username_in->setText(QString());
        username_in->setPlaceholderText(QCoreApplication::translate("Library", "username", nullptr));
        pass_in->setText(QString());
        pass_in->setPlaceholderText(QCoreApplication::translate("Library", "password", nullptr));
        admin_rdr->setText(QCoreApplication::translate("Library", "Admin panel", nullptr));
        label_2->setText(QString());
        radioButton->setText(QCoreApplication::translate("Library", "show", nullptr));
        pReset->setText(QCoreApplication::translate("Library", "reset password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
