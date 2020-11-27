/********************************************************************************
** Form generated from reading UI file 'Pag_Principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAG_PRINCIPAL_H
#define UI_PAG_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pag_Principal
{
public:
    QWidget *centralwidget;
    QLineEdit *txt_desc;
    QLineEdit *txt_titulo;
    QLineEdit *txt_fecha;
    QLineEdit *txt_buscar_texto;
    QPushButton *btn_publicar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QPushButton *label1;
    QPushButton *label2;
    QPushButton *label3;
    QPushButton *label4;
    QPushButton *label5;
    QPushButton *label6;
    QPushButton *label7;
    QPushButton *label8;
    QPushButton *label9;
    QPushButton *label10;
    QPushButton *label11;
    QPushButton *label12;
    QPushButton *label13;
    QPushButton *label14;
    QGridLayout *gridLayout_2;
    QPushButton *label1_9;
    QPushButton *label1_12;
    QPushButton *label1_2;
    QPushButton *label1_11;
    QPushButton *label1_3;
    QPushButton *label1_5;
    QPushButton *label1_10;
    QPushButton *label1_6;
    QPushButton *label1_13;
    QPushButton *label1_7;
    QPushButton *label1_14;
    QPushButton *label1_4;
    QPushButton *label1_8;
    QPushButton *label1_1;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_igual;
    QPushButton *btn_empieza;
    QPushButton *btn_no_contenido;
    QPushButton *btn_buscar_texto;
    QPushButton *btn_temina;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_Buscar_Users;
    QPushButton *btn_Buscar;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_ord_likes;
    QPushButton *btn_ord_fecha;
    QPushButton *btn_ord_num_letra;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pag_Principal)
    {
        if (Pag_Principal->objectName().isEmpty())
            Pag_Principal->setObjectName(QString::fromUtf8("Pag_Principal"));
        Pag_Principal->resize(800, 666);
        centralwidget = new QWidget(Pag_Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txt_desc = new QLineEdit(centralwidget);
        txt_desc->setObjectName(QString::fromUtf8("txt_desc"));
        txt_desc->setGeometry(QRect(11, 203, 108, 24));
        txt_titulo = new QLineEdit(centralwidget);
        txt_titulo->setObjectName(QString::fromUtf8("txt_titulo"));
        txt_titulo->setGeometry(QRect(11, 234, 108, 24));
        txt_fecha = new QLineEdit(centralwidget);
        txt_fecha->setObjectName(QString::fromUtf8("txt_fecha"));
        txt_fecha->setGeometry(QRect(11, 265, 108, 24));
        txt_buscar_texto = new QLineEdit(centralwidget);
        txt_buscar_texto->setObjectName(QString::fromUtf8("txt_buscar_texto"));
        txt_buscar_texto->setGeometry(QRect(510, 10, 108, 24));
        btn_publicar = new QPushButton(centralwidget);
        btn_publicar->setObjectName(QString::fromUtf8("btn_publicar"));
        btn_publicar->setGeometry(QRect(20, 300, 80, 25));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(140, 220, 611, 384));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 592, 465));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label1 = new QPushButton(scrollAreaWidgetContents);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout_3->addWidget(label1, 0, 0, 1, 1);

        label2 = new QPushButton(scrollAreaWidgetContents);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout_3->addWidget(label2, 1, 0, 1, 1);

        label3 = new QPushButton(scrollAreaWidgetContents);
        label3->setObjectName(QString::fromUtf8("label3"));

        gridLayout_3->addWidget(label3, 2, 0, 1, 1);

        label4 = new QPushButton(scrollAreaWidgetContents);
        label4->setObjectName(QString::fromUtf8("label4"));

        gridLayout_3->addWidget(label4, 3, 0, 1, 1);

        label5 = new QPushButton(scrollAreaWidgetContents);
        label5->setObjectName(QString::fromUtf8("label5"));

        gridLayout_3->addWidget(label5, 4, 0, 1, 1);

        label6 = new QPushButton(scrollAreaWidgetContents);
        label6->setObjectName(QString::fromUtf8("label6"));

        gridLayout_3->addWidget(label6, 5, 0, 1, 1);

        label7 = new QPushButton(scrollAreaWidgetContents);
        label7->setObjectName(QString::fromUtf8("label7"));

        gridLayout_3->addWidget(label7, 6, 0, 1, 1);

        label8 = new QPushButton(scrollAreaWidgetContents);
        label8->setObjectName(QString::fromUtf8("label8"));

        gridLayout_3->addWidget(label8, 7, 0, 1, 1);

        label9 = new QPushButton(scrollAreaWidgetContents);
        label9->setObjectName(QString::fromUtf8("label9"));

        gridLayout_3->addWidget(label9, 8, 0, 1, 1);

        label10 = new QPushButton(scrollAreaWidgetContents);
        label10->setObjectName(QString::fromUtf8("label10"));

        gridLayout_3->addWidget(label10, 9, 0, 1, 1);

        label11 = new QPushButton(scrollAreaWidgetContents);
        label11->setObjectName(QString::fromUtf8("label11"));

        gridLayout_3->addWidget(label11, 10, 0, 1, 1);

        label12 = new QPushButton(scrollAreaWidgetContents);
        label12->setObjectName(QString::fromUtf8("label12"));

        gridLayout_3->addWidget(label12, 11, 0, 1, 1);

        label13 = new QPushButton(scrollAreaWidgetContents);
        label13->setObjectName(QString::fromUtf8("label13"));

        gridLayout_3->addWidget(label13, 12, 0, 1, 1);

        label14 = new QPushButton(scrollAreaWidgetContents);
        label14->setObjectName(QString::fromUtf8("label14"));

        gridLayout_3->addWidget(label14, 13, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label1_9 = new QPushButton(scrollAreaWidgetContents);
        label1_9->setObjectName(QString::fromUtf8("label1_9"));

        gridLayout_2->addWidget(label1_9, 8, 0, 1, 1);

        label1_12 = new QPushButton(scrollAreaWidgetContents);
        label1_12->setObjectName(QString::fromUtf8("label1_12"));

        gridLayout_2->addWidget(label1_12, 11, 0, 1, 1);

        label1_2 = new QPushButton(scrollAreaWidgetContents);
        label1_2->setObjectName(QString::fromUtf8("label1_2"));

        gridLayout_2->addWidget(label1_2, 1, 0, 1, 1);

        label1_11 = new QPushButton(scrollAreaWidgetContents);
        label1_11->setObjectName(QString::fromUtf8("label1_11"));

        gridLayout_2->addWidget(label1_11, 10, 0, 1, 1);

        label1_3 = new QPushButton(scrollAreaWidgetContents);
        label1_3->setObjectName(QString::fromUtf8("label1_3"));

        gridLayout_2->addWidget(label1_3, 2, 0, 1, 1);

        label1_5 = new QPushButton(scrollAreaWidgetContents);
        label1_5->setObjectName(QString::fromUtf8("label1_5"));

        gridLayout_2->addWidget(label1_5, 4, 0, 1, 1);

        label1_10 = new QPushButton(scrollAreaWidgetContents);
        label1_10->setObjectName(QString::fromUtf8("label1_10"));

        gridLayout_2->addWidget(label1_10, 9, 0, 1, 1);

        label1_6 = new QPushButton(scrollAreaWidgetContents);
        label1_6->setObjectName(QString::fromUtf8("label1_6"));

        gridLayout_2->addWidget(label1_6, 5, 0, 1, 1);

        label1_13 = new QPushButton(scrollAreaWidgetContents);
        label1_13->setObjectName(QString::fromUtf8("label1_13"));

        gridLayout_2->addWidget(label1_13, 12, 0, 1, 1);

        label1_7 = new QPushButton(scrollAreaWidgetContents);
        label1_7->setObjectName(QString::fromUtf8("label1_7"));

        gridLayout_2->addWidget(label1_7, 6, 0, 1, 1);

        label1_14 = new QPushButton(scrollAreaWidgetContents);
        label1_14->setObjectName(QString::fromUtf8("label1_14"));

        gridLayout_2->addWidget(label1_14, 13, 0, 1, 1);

        label1_4 = new QPushButton(scrollAreaWidgetContents);
        label1_4->setObjectName(QString::fromUtf8("label1_4"));

        gridLayout_2->addWidget(label1_4, 3, 0, 1, 1);

        label1_8 = new QPushButton(scrollAreaWidgetContents);
        label1_8->setObjectName(QString::fromUtf8("label1_8"));

        gridLayout_2->addWidget(label1_8, 7, 0, 1, 1);

        label1_1 = new QPushButton(scrollAreaWidgetContents);
        label1_1->setObjectName(QString::fromUtf8("label1_1"));

        gridLayout_2->addWidget(label1_1, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(500, 40, 126, 155));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_igual = new QPushButton(widget);
        btn_igual->setObjectName(QString::fromUtf8("btn_igual"));

        verticalLayout->addWidget(btn_igual);

        btn_empieza = new QPushButton(widget);
        btn_empieza->setObjectName(QString::fromUtf8("btn_empieza"));

        verticalLayout->addWidget(btn_empieza);

        btn_no_contenido = new QPushButton(widget);
        btn_no_contenido->setObjectName(QString::fromUtf8("btn_no_contenido"));

        verticalLayout->addWidget(btn_no_contenido);

        btn_buscar_texto = new QPushButton(widget);
        btn_buscar_texto->setObjectName(QString::fromUtf8("btn_buscar_texto"));

        verticalLayout->addWidget(btn_buscar_texto);

        btn_temina = new QPushButton(widget);
        btn_temina->setObjectName(QString::fromUtf8("btn_temina"));

        verticalLayout->addWidget(btn_temina);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(11, 10, 211, 27));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        txt_Buscar_Users = new QLineEdit(widget1);
        txt_Buscar_Users->setObjectName(QString::fromUtf8("txt_Buscar_Users"));

        horizontalLayout->addWidget(txt_Buscar_Users);

        btn_Buscar = new QPushButton(widget1);
        btn_Buscar->setObjectName(QString::fromUtf8("btn_Buscar"));

        horizontalLayout->addWidget(btn_Buscar);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 50, 256, 27));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_ord_likes = new QPushButton(widget2);
        btn_ord_likes->setObjectName(QString::fromUtf8("btn_ord_likes"));

        horizontalLayout_2->addWidget(btn_ord_likes);

        btn_ord_fecha = new QPushButton(widget2);
        btn_ord_fecha->setObjectName(QString::fromUtf8("btn_ord_fecha"));

        horizontalLayout_2->addWidget(btn_ord_fecha);

        btn_ord_num_letra = new QPushButton(widget2);
        btn_ord_num_letra->setObjectName(QString::fromUtf8("btn_ord_num_letra"));

        horizontalLayout_2->addWidget(btn_ord_num_letra);

        Pag_Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pag_Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Pag_Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Pag_Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pag_Principal->setStatusBar(statusbar);

        retranslateUi(Pag_Principal);

        QMetaObject::connectSlotsByName(Pag_Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Pag_Principal)
    {
        Pag_Principal->setWindowTitle(QCoreApplication::translate("Pag_Principal", "MainWindow", nullptr));
        btn_publicar->setText(QCoreApplication::translate("Pag_Principal", "Publicar", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
        label8->setText(QString());
        label9->setText(QString());
        label10->setText(QString());
        label11->setText(QString());
        label12->setText(QString());
        label13->setText(QString());
        label14->setText(QString());
        label1_9->setText(QString());
        label1_12->setText(QString());
        label1_2->setText(QString());
        label1_11->setText(QString());
        label1_3->setText(QString());
        label1_5->setText(QString());
        label1_10->setText(QString());
        label1_6->setText(QString());
        label1_13->setText(QString());
        label1_7->setText(QString());
        label1_14->setText(QString());
        label1_4->setText(QString());
        label1_8->setText(QString());
        label1_1->setText(QString());
        btn_igual->setText(QCoreApplication::translate("Pag_Principal", "Buscar igual", nullptr));
        btn_empieza->setText(QCoreApplication::translate("Pag_Principal", "Buscar Empieza", nullptr));
        btn_no_contenido->setText(QCoreApplication::translate("Pag_Principal", "Buscar no contenido", nullptr));
        btn_buscar_texto->setText(QCoreApplication::translate("Pag_Principal", "Buscar Texto", nullptr));
        btn_temina->setText(QCoreApplication::translate("Pag_Principal", "Buscar termina", nullptr));
        btn_Buscar->setText(QCoreApplication::translate("Pag_Principal", "Buscar Usuario", nullptr));
        btn_ord_likes->setText(QCoreApplication::translate("Pag_Principal", "Likes", nullptr));
        btn_ord_fecha->setText(QCoreApplication::translate("Pag_Principal", "Fecha", nullptr));
        btn_ord_num_letra->setText(QCoreApplication::translate("Pag_Principal", "Letra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pag_Principal: public Ui_Pag_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAG_PRINCIPAL_H
