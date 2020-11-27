/********************************************************************************
** Form generated from reading UI file 'Pag_Comentario.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAG_COMENTARIO_H
#define UI_PAG_COMENTARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pag_Comentario
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *lbl_titulo;
    QLabel *lbl_desc;
    QPushButton *btn_like;
    QLineEdit *txt_comentario;
    QPushButton *btn_comentar;
    QPushButton *btn_share;
    QListWidget *listBox_coment;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pag_Comentario)
    {
        if (Pag_Comentario->objectName().isEmpty())
            Pag_Comentario->setObjectName(QString::fromUtf8("Pag_Comentario"));
        Pag_Comentario->resize(697, 532);
        centralwidget = new QWidget(Pag_Comentario);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 81, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 30, 80, 25));
        lbl_titulo = new QLabel(centralwidget);
        lbl_titulo->setObjectName(QString::fromUtf8("lbl_titulo"));
        lbl_titulo->setGeometry(QRect(310, 70, 111, 16));
        lbl_desc = new QLabel(centralwidget);
        lbl_desc->setObjectName(QString::fromUtf8("lbl_desc"));
        lbl_desc->setGeometry(QRect(310, 93, 111, 16));
        btn_like = new QPushButton(centralwidget);
        btn_like->setObjectName(QString::fromUtf8("btn_like"));
        btn_like->setGeometry(QRect(470, 290, 41, 25));
        txt_comentario = new QLineEdit(centralwidget);
        txt_comentario->setObjectName(QString::fromUtf8("txt_comentario"));
        txt_comentario->setGeometry(QRect(210, 320, 171, 24));
        btn_comentar = new QPushButton(centralwidget);
        btn_comentar->setObjectName(QString::fromUtf8("btn_comentar"));
        btn_comentar->setGeometry(QRect(380, 320, 80, 25));
        btn_share = new QPushButton(centralwidget);
        btn_share->setObjectName(QString::fromUtf8("btn_share"));
        btn_share->setGeometry(QRect(210, 350, 80, 25));
        listBox_coment = new QListWidget(centralwidget);
        listBox_coment->setObjectName(QString::fromUtf8("listBox_coment"));
        listBox_coment->setGeometry(QRect(210, 120, 256, 192));
        Pag_Comentario->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pag_Comentario);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 697, 25));
        Pag_Comentario->setMenuBar(menubar);
        statusbar = new QStatusBar(Pag_Comentario);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pag_Comentario->setStatusBar(statusbar);

        retranslateUi(Pag_Comentario);

        QMetaObject::connectSlotsByName(Pag_Comentario);
    } // setupUi

    void retranslateUi(QMainWindow *Pag_Comentario)
    {
        Pag_Comentario->setWindowTitle(QCoreApplication::translate("Pag_Comentario", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Pag_Comentario", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Pag_Comentario", "Perfil_User", nullptr));
        lbl_titulo->setText(QCoreApplication::translate("Pag_Comentario", "label1", nullptr));
        lbl_desc->setText(QCoreApplication::translate("Pag_Comentario", "label1", nullptr));
        btn_like->setText(QCoreApplication::translate("Pag_Comentario", "Like", nullptr));
        btn_comentar->setText(QCoreApplication::translate("Pag_Comentario", "Comentar", nullptr));
        btn_share->setText(QCoreApplication::translate("Pag_Comentario", "Compartir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pag_Comentario: public Ui_Pag_Comentario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAG_COMENTARIO_H
