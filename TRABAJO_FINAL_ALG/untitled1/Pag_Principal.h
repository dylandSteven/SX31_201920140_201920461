#ifndef PAG_PRINCIPAL_H
#define PAG_PRINCIPAL_H

#include <QMainWindow>

#include "Ctrl_Pag_Principal.h"
#include "Pag_Comentario.h"
#include "Fecha.h"
#include <vector>
#include "Pag_Usuario.h"
#include <string>


namespace Ui {
class Pag_Principal;
}

class Pag_Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pag_Principal(QWidget *parent = nullptr, int my_id=0);
    ~Pag_Principal();

    void reestablecer();

    void Load();

/*private slots:
    void on_Pag_Principal_tabifiedDockWidgetActivated(QDockWidget *dockWidget);*/

private slots:
    void on_btn_publicar_clicked();

    void on_btn_ord_likes_clicked();

    void on_btn_ord_fecha_clicked();

    void on_btn_ord_num_letra_clicked();

    void on_btn_buscar_texto_clicked();

    void on_btn_empieza_clicked();

    void on_btn_temina_clicked();

    void on_btn_igual_clicked();

    void on_btn_no_contenido_clicked();

    void on_btn_Buscar_clicked();

//    QString namee(string name0);

    void on_label1_clicked();

    void on_label2_clicked();

    void on_label3_clicked();

    void on_label4_clicked();

    void on_label5_clicked();

    void on_label6_clicked();

    void on_label7_clicked();

    void on_label8_clicked();

    void on_label9_clicked();

    void on_label10_clicked();

    void on_label11_clicked();

    void on_label12_clicked();

    void on_label13_clicked();

    void on_label14_clicked();

private:
    Ui::Pag_Principal *ui;
    int my_id;
            Pag_Comentario* pag_Comentario;
            Control_Principal* ctrl_principal;
            vector<string>* publicaciones;
            vector<Publicacion*>* vec_publ_like;
            vector<Publicacion*>* vec_publ_fecha;
            vector<Publicacion*>* vec_publ_cant;
            vector<Publicacion*>* vec_publ_dentro;
            vector<Publicacion*>* vec_publ_empieza;
            vector<Publicacion*>* vec_publ_termina;
            vector<Publicacion*>* vec_publ_contenido_no;
            vector<Publicacion*>* vec_publ_igual;
            int veces_ver_mas;
            int cantidad_labels;
};



#endif // PAG_PRINCIPAL_H
