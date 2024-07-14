/********************************************************************************
** Form generated from reading UI file 'passreset.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSRESET_H
#define UI_PASSRESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passReset
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLineEdit *username_in;
    QLineEdit *passin;
    QLineEdit *passrepeat;
    QPushButton *submit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *passReset)
    {
        if (passReset->objectName().isEmpty())
            passReset->setObjectName("passReset");
        passReset->resize(800, 600);
        passReset->setStyleSheet(QString::fromUtf8("background-color:#003049"));
        centralwidget = new QWidget(passReset);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 70, 341, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color:#90e0ef"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/573-5735318_forgot-password-background-image-png-transparent-png.png")));
        label->setScaledContents(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(400, 70, 361, 451));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#0077b6"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        username_in = new QLineEdit(frame_2);
        username_in->setObjectName("username_in");
        username_in->setStyleSheet(QString::fromUtf8("background-color:#000000"));

        gridLayout->addWidget(username_in, 0, 0, 1, 1);

        passin = new QLineEdit(frame_2);
        passin->setObjectName("passin");
        passin->setStyleSheet(QString::fromUtf8("background-color:#000000"));

        gridLayout->addWidget(passin, 1, 0, 1, 1);

        passrepeat = new QLineEdit(frame_2);
        passrepeat->setObjectName("passrepeat");
        passrepeat->setStyleSheet(QString::fromUtf8("background-color:#000000"));

        gridLayout->addWidget(passrepeat, 2, 0, 1, 1);

        submit = new QPushButton(frame_2);
        submit->setObjectName("submit");
        submit->setStyleSheet(QString::fromUtf8("background-color:#03045e"));

        gridLayout->addWidget(submit, 3, 0, 1, 1);

        passReset->setCentralWidget(centralwidget);
        menubar = new QMenuBar(passReset);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        passReset->setMenuBar(menubar);
        statusbar = new QStatusBar(passReset);
        statusbar->setObjectName("statusbar");
        passReset->setStatusBar(statusbar);

        retranslateUi(passReset);

        QMetaObject::connectSlotsByName(passReset);
    } // setupUi

    void retranslateUi(QMainWindow *passReset)
    {
        passReset->setWindowTitle(QCoreApplication::translate("passReset", "MainWindow", nullptr));
        label->setText(QString());
        submit->setText(QCoreApplication::translate("passReset", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class passReset: public Ui_passReset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSRESET_H
