QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Loggin.cpp \
    Pag_Comentario.cpp \
    Pag_Principal.cpp \
    Pag_Usuario.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ABS.h \
    Arbol.h \
    Comentario.h \
    Comentarios.h \
    Ctrl_Loggin.h \
    Ctrl_Pag_Principal.h \
    Ctrl_Pag_Usuario.h \
    Fecha.h \
    Interaccion.h \
    Interacciones.h \
    Lista.h \
    Loggin.h \
    Pag_Comentario.h \
    Pag_Principal.h \
    Pag_Usuario.h \
    Publicacion.h \
    Publicaciones.h \
    Usuario.h \
    Usuarios.h \
    mainwindow.h

FORMS += \
    Loggin.ui \
    Pag_Comentario.ui \
    Pag_Principal.ui \
    Pag_Usuario.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
