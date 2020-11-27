#include "ui_Pag_Usuario.h"
#include "Pag_Usuario.h"



Pag_Usuario::Pag_Usuario(QWidget *parent, int id_usuario, int my_id, Usuarios*&u,  Publicaciones*& publ) :
    QMainWindow(parent),
    ui(new Ui::Pag_Usuario)
{
    ui->setupUi(this);
    ctrl_pag_usuario = new Control_Pag_Usuario(u, publ, id_usuario);
                cantidad_labels = 10;
                this->id_usuario = id_usuario;
                this->my_id = my_id;
                this->publ = publ;
                usuarios = u;
                this->pag = parent;
                vec_publ_like = new vector<Publicacion*>;
                vec_publ_fecha = new vector<Publicacion*>;
                vec_publ_cant = new vector<Publicacion*>;
                vec_publ_dentro = new vector<Publicacion*>;
                vec_publ_empieza = new vector<Publicacion*>;
                vec_publ_termina = new vector<Publicacion*>;
                vec_publ_contenido_no = new vector<Publicacion*>;
                Load();
}

Pag_Usuario::~Pag_Usuario()
{
    delete ui;
}


void Pag_Usuario::reestablecer(){

    ui->label_1->setAccessibleName("label_1");
    ui->label1__1->setAccessibleName("label1__1");


    ui->label_2->setAccessibleName("label_2");
    ui->label1__2->setAccessibleName("label1__2");

    ui->label_3->setAccessibleName("label_3");
    ui->label1__3->setAccessibleName("label1__3");

    ui->label_4->setAccessibleName("label_4");
    ui->label1__4->setAccessibleName("label1__4");

    ui->label_5->setAccessibleName("label_5");
    ui->label1__5->setAccessibleName("label1__5");


    ui->label_6->setAccessibleName("label_6");
    ui->label1__6->setAccessibleName("label1__6");


    ui->label_7->setAccessibleName("label_7");
    ui->label1__7->setAccessibleName("label1__7");

    ui->label_8->setAccessibleName("label_8");
    ui->label1__8->setAccessibleName("label1__8");

    ui->label_9->setAccessibleName("label_9");
    ui->label1__9->setAccessibleName("label1__9");

    ui->label_10->setAccessibleName("label_10");
    ui->label1__10->setAccessibleName("label1__10");


}


//QString Pag_Usuario::namee(string name0){
//    return QString::fromStdString(name0.c_str());
//}

void Pag_Usuario::on_btn_agregar_clicked(){

    for (int i = 0; i < usuarios->getUsuario(my_id)->get_amigos()->size();i++) {
                if (my_id==id_usuario|| usuarios->getUsuario(my_id)->get_amigos()->get(i)==id_usuario) {
                    return;
                }
            }
            usuarios->getUsuario(my_id)->agregar_amigo(id_usuario);
            ctrl_pag_usuario->guardar_followrs();

}


void Pag_Usuario::Load(){


            int indice = 0;
            reestablecer();
            ctrl_pag_usuario->crear_arboles();

            for (int i = 0; i < publ->get_size() && indice < cantidad_labels; i++) {

                if  (publ->getpub(i)->getid_Usuario() == id_usuario) {

                        string name0="label_"+ to_string(indice+1);

                        QString name= QString::fromStdString(name0.c_str());

                        QPushButton* label = findChild<QPushButton*> ( name);

                        label->setText(QString::fromStdString(publ->getpub(i)->gettitulo().c_str()) + " " + to_string(publ->getpub(i)->getnumLikes()).c_str());

                        label->setAccessibleName(to_string(publ->getpub(i)->getid_Usuario()).c_str());

                        string name1="label"+ to_string(1)+"__"+ to_string(indice+1);
                        QString name1_1= QString::fromStdString(name1.c_str());
                        QPushButton* label1_1 = findChild<QPushButton*> ( name1_1);

                        label1_1->setText(to_string(publ->getpub(i)->getid_publ()).c_str());
                        label1_1->setAccessibleName(to_string(publ->getpub(i)->getid_publ()).c_str());

                        ctrl_pag_usuario->add_Publ_Arbol_like(publ->getpub(i));//ARBOL LIKES
                        ctrl_pag_usuario->add_Publ_Arbol_fecha(publ->getpub(i));//ARBOL FECHA
                        ctrl_pag_usuario->add_Publ_Arbol_cant(publ->getpub(i));//ARBOL CANTIDAD
                        ctrl_pag_usuario->add_Publ_Arbol_dentro(publ->getpub(i));//ARBOL DENTRO
                        ctrl_pag_usuario->add_Publ_Arbol_empieza(publ->getpub(i));//ARBOL CANTIDAD
                        ctrl_pag_usuario->add_Publ_Arbol_termina(publ->getpub(i));//ARBOL DENTRO
                        ctrl_pag_usuario->add_Publ_Arbol_dentro_no(publ->getpub(i));//ARBOL DENTRO
                        ctrl_pag_usuario->add_Publ_Arbol_igual(publ->getpub(i));//ARBOL DENTRO

                        /*tope3 = indice + 1;*/
                        indice++;
                }
            }
}


void Pag_Usuario::on_btn_ord_likes_clicked(){

    reestablecer();

           vec_publ_like = ctrl_pag_usuario->inorden_like();

            for (int i = 0; i < vec_publ_like->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_like->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_like->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_like->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_like->at(i)->getid_publ()).c_str());
            }

}

void Pag_Usuario::on_btn_ord_fecha_clicked(){
    reestablecer();

            vec_publ_fecha = ctrl_pag_usuario->inorden_fecha();

            for (int i = 0; i < vec_publ_fecha->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_fecha->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_fecha->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_fecha->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_fecha->at(i)->getid_publ()).c_str());
            }

}

void Pag_Usuario::on_btn_ord_num_letra_clicked(){

    reestablecer();

            vec_publ_cant = ctrl_pag_usuario->inorden_cant();

            for (int i = 0; i < vec_publ_cant->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_cant->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
            }
}

void Pag_Usuario::on_btn_buscar_texto_clicked(){

    reestablecer();

            vec_publ_dentro = ctrl_pag_usuario->inorden_dentro(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_dentro->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_dentro->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_dentro->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_dentro->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_dentro->at(i)->getid_publ()).c_str());
            }
}

void Pag_Usuario::on_btn_empieza_clicked(){
    reestablecer();

            vec_publ_empieza = ctrl_pag_usuario->inorden_empieza(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_empieza->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_empieza->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_empieza->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_empieza->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_empieza->at(i)->getid_publ()).c_str());
            }

}

void Pag_Usuario::on_btn_temina_clicked(){

    reestablecer();

            vec_publ_termina = ctrl_pag_usuario->inorden_termina(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_termina->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_termina->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_termina->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_termina->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_termina->at(i)->getid_publ()).c_str());
            }
}

void Pag_Usuario::on_btn_igual_clicked(){

    reestablecer();

            vec_publ_cant = ctrl_pag_usuario->inorden_igual(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_cant->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_cant->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
            }
}

void Pag_Usuario::on_btn_no_contenido_clicked(){


    reestablecer();

            vec_publ_contenido_no = ctrl_pag_usuario->inorden_dentro_no(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_contenido_no->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label_"+to_string(i+1)));

                label->setText(vec_publ_contenido_no->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_contenido_no->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"__"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_contenido_no->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_contenido_no->at(i)->getid_publ()).c_str());
            }
}
void Pag_Usuario::on_btn_back_clicked(){
    this->setVisible(false);
        this->close();
        pag->setVisible(true);
        pag->show();
}
