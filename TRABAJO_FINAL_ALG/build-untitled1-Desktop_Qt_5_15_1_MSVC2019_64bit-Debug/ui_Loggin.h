/********************************************************************************
** Form generated from reading UI file 'Loggin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGIN_H
#define UI_LOGGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loggin
{
public:
    QWidget *centralwidget;
    QFrame *Panel_1;
    QLabel *lista_2;
    QFrame *frame;
    QLabel *lista_3;
    QLabel *lista_5;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txt_usuario;
    QLineEdit *txt_password;
    QPushButton *btn_ingresar;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *txt_id;
    QLineEdit *txt_correo;
    QLineEdit *txt_nombre;
    QLineEdit *txt_fecha;
    QPushButton *btn_registrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loggin)
    {
        if (Loggin->objectName().isEmpty())
            Loggin->setObjectName(QString::fromUtf8("Loggin"));
        Loggin->resize(983, 574);
        centralwidget = new QWidget(Loggin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Panel_1 = new QFrame(centralwidget);
        Panel_1->setObjectName(QString::fromUtf8("Panel_1"));
        Panel_1->setGeometry(QRect(0, 0, 981, 541));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Panel_1->setPalette(palette);
        Panel_1->setAutoFillBackground(true);
        Panel_1->setFrameShape(QFrame::StyledPanel);
        Panel_1->setFrameShadow(QFrame::Raised);
        lista_2 = new QLabel(Panel_1);
        lista_2->setObjectName(QString::fromUtf8("lista_2"));
        lista_2->setGeometry(QRect(820, 40, 71, 41));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        lista_2->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Quicksand Light"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lista_2->setFont(font);
        lista_2->setCursor(QCursor(Qt::BusyCursor));
        lista_2->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Panel_1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 200, 551, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lista_3 = new QLabel(frame);
        lista_3->setObjectName(QString::fromUtf8("lista_3"));
        lista_3->setGeometry(QRect(160, -10, 401, 161));
        QPalette palette2;
        QBrush brush3(QColor(6, 171, 237, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(6, 171, 237, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        lista_3->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Brush Script MT"));
        font1.setPointSize(72);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        lista_3->setFont(font1);
        lista_3->setCursor(QCursor(Qt::BusyCursor));
        lista_3->setStyleSheet(QString::fromUtf8(""));
        lista_5 = new QLabel(frame);
        lista_5->setObjectName(QString::fromUtf8("lista_5"));
        lista_5->setGeometry(QRect(20, -20, 171, 161));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Quicksand Light"));
        font2.setPointSize(44);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        lista_5->setFont(font2);
        lista_5->setCursor(QCursor(Qt::BusyCursor));
        lista_5->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(510, 110, 101, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush6(QColor(255, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        label->setPalette(palette3);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        layoutWidget = new QWidget(Panel_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(770, 50, 171, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        txt_usuario = new QLineEdit(layoutWidget);
        txt_usuario->setObjectName(QString::fromUtf8("txt_usuario"));

        verticalLayout_2->addWidget(txt_usuario);

        txt_password = new QLineEdit(layoutWidget);
        txt_password->setObjectName(QString::fromUtf8("txt_password"));

        verticalLayout_2->addWidget(txt_password);

        btn_ingresar = new QPushButton(layoutWidget);
        btn_ingresar->setObjectName(QString::fromUtf8("btn_ingresar"));

        verticalLayout_2->addWidget(btn_ingresar);

        layoutWidget1 = new QWidget(Panel_1);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(780, 250, 161, 241));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        txt_id = new QLineEdit(layoutWidget1);
        txt_id->setObjectName(QString::fromUtf8("txt_id"));

        verticalLayout->addWidget(txt_id);

        txt_correo = new QLineEdit(layoutWidget1);
        txt_correo->setObjectName(QString::fromUtf8("txt_correo"));

        verticalLayout->addWidget(txt_correo);

        txt_nombre = new QLineEdit(layoutWidget1);
        txt_nombre->setObjectName(QString::fromUtf8("txt_nombre"));

        verticalLayout->addWidget(txt_nombre);

        txt_fecha = new QLineEdit(layoutWidget1);
        txt_fecha->setObjectName(QString::fromUtf8("txt_fecha"));

        verticalLayout->addWidget(txt_fecha);

        btn_registrar = new QPushButton(layoutWidget1);
        btn_registrar->setObjectName(QString::fromUtf8("btn_registrar"));

        verticalLayout->addWidget(btn_registrar);

        Loggin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Loggin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 25));
        Loggin->setMenuBar(menubar);
        statusbar = new QStatusBar(Loggin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Loggin->setStatusBar(statusbar);

        retranslateUi(Loggin);

        QMetaObject::connectSlotsByName(Loggin);
    } // setupUi

    void retranslateUi(QMainWindow *Loggin)
    {
        Loggin->setWindowTitle(QCoreApplication::translate("Loggin", "MainWindow", nullptr));
        lista_2->setText(QCoreApplication::translate("Loggin", ".", nullptr));
        lista_3->setText(QCoreApplication::translate("Loggin", "Fanaticos", nullptr));
        lista_5->setText(QCoreApplication::translate("Loggin", "Only ", nullptr));
        label->setText(QCoreApplication::translate("Loggin", "2.0", nullptr));
        btn_ingresar->setText(QCoreApplication::translate("Loggin", "Ingresar", nullptr));
        btn_registrar->setText(QCoreApplication::translate("Loggin", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loggin: public Ui_Loggin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGIN_H
