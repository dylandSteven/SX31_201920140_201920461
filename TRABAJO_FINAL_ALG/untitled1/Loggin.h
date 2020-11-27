#ifndef LOGGIN_H
#define LOGGIN_H
#include <QMainWindow>

#include "Ctrl_Loggin.h"
#include "Pag_Principal.h"

namespace Ui {
class Loggin;
}

class Loggin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loggin(QWidget *parent = nullptr);
    ~Loggin();

private slots:
    void on_btn_ingresar_clicked();

    void on_btn_registrar_clicked();

private:
    Ui::Loggin *ui;

    Control_Loggin* ctrl_loggin;


    Pag_Principal* pag_principal;


};





#endif // LOGGIN_H
