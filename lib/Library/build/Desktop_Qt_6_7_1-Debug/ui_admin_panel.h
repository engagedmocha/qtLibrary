/********************************************************************************
** Form generated from reading UI file 'admin_panel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PANEL_H
#define UI_ADMIN_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_panel
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *add_booklabel;
    QLineEdit *add_title;
    QLineEdit *add_author;
    QLineEdit *add_count;
    QPushButton *add_btn;
    QFrame *frame_2;
    QLabel *remove_label;
    QLineEdit *search_name;
    QLineEdit *search_author;
    QPushButton *search_Right;
    QLabel *removestat;
    QPushButton *confirm_right;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin_panel)
    {
        if (Admin_panel->objectName().isEmpty())
            Admin_panel->setObjectName("Admin_panel");
        Admin_panel->resize(800, 600);
        centralwidget = new QWidget(Admin_panel);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 381, 531));
        frame->setStyleSheet(QString::fromUtf8("background-color:#606c38"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        add_booklabel = new QLabel(frame);
        add_booklabel->setObjectName("add_booklabel");
        add_booklabel->setGeometry(QRect(100, 20, 211, 31));
        QFont font;
        font.setBold(true);
        add_booklabel->setFont(font);
        add_booklabel->setLayoutDirection(Qt::LeftToRight);
        add_booklabel->setStyleSheet(QString::fromUtf8("color:#000000"));
        add_booklabel->setAlignment(Qt::AlignCenter);
        add_title = new QLineEdit(frame);
        add_title->setObjectName("add_title");
        add_title->setGeometry(QRect(50, 190, 291, 31));
        add_title->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        add_title->setAlignment(Qt::AlignCenter);
        add_author = new QLineEdit(frame);
        add_author->setObjectName("add_author");
        add_author->setGeometry(QRect(50, 234, 291, 31));
        add_author->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        add_author->setAlignment(Qt::AlignCenter);
        add_count = new QLineEdit(frame);
        add_count->setObjectName("add_count");
        add_count->setGeometry(QRect(50, 274, 291, 31));
        add_count->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        add_count->setAlignment(Qt::AlignCenter);
        add_btn = new QPushButton(frame);
        add_btn->setObjectName("add_btn");
        add_btn->setGeometry(QRect(140, 330, 121, 31));
        add_btn->setStyleSheet(QString::fromUtf8("background-color:#432818"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(400, 20, 391, 531));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#780000"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        remove_label = new QLabel(frame_2);
        remove_label->setObjectName("remove_label");
        remove_label->setGeometry(QRect(80, 30, 251, 31));
        remove_label->setFont(font);
        remove_label->setStyleSheet(QString::fromUtf8("color:#000000"));
        remove_label->setAlignment(Qt::AlignCenter);
        search_name = new QLineEdit(frame_2);
        search_name->setObjectName("search_name");
        search_name->setGeometry(QRect(40, 90, 311, 31));
        QFont font1;
        font1.setItalic(true);
        search_name->setFont(font1);
        search_name->setStyleSheet(QString::fromUtf8("background-color:#eee2df;\n"
"color:#000000"));
        search_author = new QLineEdit(frame_2);
        search_author->setObjectName("search_author");
        search_author->setGeometry(QRect(40, 130, 311, 31));
        search_author->setFont(font1);
        search_author->setStyleSheet(QString::fromUtf8("background-color:#eee2df;\n"
"color:#000000"));
        search_Right = new QPushButton(frame_2);
        search_Right->setObjectName("search_Right");
        search_Right->setGeometry(QRect(150, 180, 89, 25));
        search_Right->setStyleSheet(QString::fromUtf8("background-color:#eed7c5;\n"
"color:#000000"));
        removestat = new QLabel(frame_2);
        removestat->setObjectName("removestat");
        removestat->setGeometry(QRect(50, 260, 301, 111));
        removestat->setStyleSheet(QString::fromUtf8("color:#000000"));
        confirm_right = new QPushButton(frame_2);
        confirm_right->setObjectName("confirm_right");
        confirm_right->setGeometry(QRect(138, 420, 111, 41));
        confirm_right->setStyleSheet(QString::fromUtf8("background-color:#eed7c5;\n"
"color:#000000"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 0, 81, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Dyuthi")});
        font2.setItalic(true);
        pushButton->setFont(font2);
        Admin_panel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin_panel);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Admin_panel->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin_panel);
        statusbar->setObjectName("statusbar");
        Admin_panel->setStatusBar(statusbar);

        retranslateUi(Admin_panel);

        QMetaObject::connectSlotsByName(Admin_panel);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_panel)
    {
        Admin_panel->setWindowTitle(QCoreApplication::translate("Admin_panel", "MainWindow", nullptr));
        add_booklabel->setText(QCoreApplication::translate("Admin_panel", "Add books to library", nullptr));
        add_title->setPlaceholderText(QCoreApplication::translate("Admin_panel", "Title", nullptr));
        add_author->setPlaceholderText(QCoreApplication::translate("Admin_panel", "author", nullptr));
        add_count->setPlaceholderText(QCoreApplication::translate("Admin_panel", "count", nullptr));
        add_btn->setText(QCoreApplication::translate("Admin_panel", "Add", nullptr));
        remove_label->setText(QCoreApplication::translate("Admin_panel", "Remove books from library", nullptr));
        search_name->setPlaceholderText(QCoreApplication::translate("Admin_panel", "search by name", nullptr));
        search_author->setPlaceholderText(QCoreApplication::translate("Admin_panel", "search by author", nullptr));
        search_Right->setText(QCoreApplication::translate("Admin_panel", "search", nullptr));
        removestat->setText(QString());
        confirm_right->setText(QCoreApplication::translate("Admin_panel", "Confirm", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_panel", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_panel: public Ui_Admin_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PANEL_H
