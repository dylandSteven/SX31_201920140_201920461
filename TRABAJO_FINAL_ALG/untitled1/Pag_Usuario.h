#ifndef PAG_USUARIO_H
#define PAG_USUARIO_H


#include <QMainWindow>
#include "Ctrl_Pag_Usuario.h"
#include "Usuarios.h"
#include "Interacciones.h"

namespace Ui {
class Pag_Usuario;
}

class Pag_Usuario : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pag_Usuario(QWidget *parent , int id_usuario, int my_id, Usuarios*&u,  Publicaciones*& publ);
    ~Pag_Usuario();

private slots:
    void on_btn_ord_likes_clicked();

    void on_btn_ord_fecha_clicked();

    void on_btn_ord_num_letra_clicked();

    void on_btn_buscar_texto_clicked();

    void on_btn_empieza_clicked();

    void on_btn_temina_clicked();

    void on_btn_igual_clicked();

    void on_btn_no_contenido_clicked();

    void on_btn_agregar_clicked();

    void Load();

    void reestablecer();

    void on_btn_back_clicked();

//    QString namee(string name0);

private:
    Ui::Pag_Usuario *ui;

    int id_usuario;
            int my_id;
            Usuarios* usuarios;
            Publicaciones* publ;
            int cantidad_labels;
            QWidget* pag;
            Control_Pag_Usuario* ctrl_pag_usuario;
            vector<Publicacion*>* vec_publ_like;
            vector<Publicacion*>* vec_publ_fecha;
            vector<Publicacion*>* vec_publ_cant;
            vector<Publicacion*>* vec_publ_dentro;
            vector<Publicacion*>* vec_publ_empieza;
            vector<Publicacion*>* vec_publ_termina;
            vector<Publicacion*>* vec_publ_contenido_no;
};



#endif // PAG_USUARIO_H
