#include "ui_Loggin.h"
#include "Loggin.h"

Loggin::Loggin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Loggin)
{
    ui->setupUi(this);
    ctrl_loggin = new Control_Loggin();
}

Loggin::~Loggin()
{
    delete ui;
}


void Loggin::on_btn_ingresar_clicked()
{
    if (ctrl_loggin->LOGGEAR_USUARIO(ui->txt_usuario->text().toInt())) {
                pag_principal = new Pag_Principal(this,ui->txt_usuario->text().toInt());
                pag_principal->show();
                this->setVisible(false);
       }
}

void Loggin::on_btn_registrar_clicked()
{
    ctrl_loggin->REGISTRAR_USUARIO(ui->txt_id->text().toInt() ,ui->txt_correo->text().toStdString(),ui->txt_nombre->text().toStdString(),
                                   ui->txt_fecha->text().toStdString());

}
