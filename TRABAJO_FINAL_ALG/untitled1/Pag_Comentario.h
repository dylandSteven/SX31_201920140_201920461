#ifndef PAG_COMENTARIO_H
#define PAG_COMENTARIO_H

#include <QMainWindow>
#include "Usuarios.h"


#include "Interacciones.h"
#include "Pag_Usuario.h"
namespace Ui {
class Pag_Comentario;
}

class Pag_Comentario : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pag_Comentario(QWidget *parent ,int id_Usuario, int id_publ, Usuarios*&u, int my_id, Publicaciones*&publ);
    ~Pag_Comentario();

private slots:
    void on_btn_comentar_clicked();

    void on_btn_share_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_btn_like_clicked();

    void cargar_interacciones();

    void guardar_interacciones();

    void guardar_comentarios();

    void guardar_publicaciones();

    void Load();

private:
    Ui::Pag_Comentario *ui;
    int id_Usuario;
    int id_publ;
    int my_id;
    Usuarios* aux;
    Publicaciones* publ;
    Pag_Usuario* pag_usuario;
    QWidget* pag;
    Interacciones* interacciones;
};




#endif // PAG_COMENTARIO_H
