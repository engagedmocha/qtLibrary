QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_login.cpp \
    admin_panel.cpp \
    create_acc.cpp \
    main.cpp \
    library.cpp \
    passreset.cpp \
    user_panel.cpp

HEADERS += \
    admin_login.h \
    admin_panel.h \
    create_acc.h \
    library.h \
    passreset.h \
    user_panel.h

FORMS += \
    admin_login.ui \
    admin_panel.ui \
    create_acc.ui \
    library.ui \
    passreset.ui \
    user_panel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../../images/login_image.qrc
