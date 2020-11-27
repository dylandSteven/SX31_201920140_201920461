#include "ui_Pag_Principal.h"
#include "Pag_Principal.h"




Pag_Principal::Pag_Principal(QWidget *parent, int my_id) :
    QMainWindow(parent),
    ui(new Ui::Pag_Principal)
{
    ui->setupUi(this);
    this->my_id = my_id;
                veces_ver_mas = 0;
                cantidad_labels = 14;
                ctrl_principal = new Control_Principal(my_id);
                publicaciones= new vector<string>;
                vec_publ_contenido_no = new vector<Publicacion*>;
                vec_publ_igual = new vector<Publicacion*>;
                vec_publ_like = new vector<Publicacion*>;
                vec_publ_fecha = new vector<Publicacion*>;
                vec_publ_cant = new vector<Publicacion*>;
                vec_publ_dentro = new vector<Publicacion*>;
                vec_publ_empieza = new vector<Publicacion*>;
                vec_publ_termina = new vector<Publicacion*>;
        Load();
}

Pag_Principal::~Pag_Principal()
{
    delete ui;
}

void Pag_Principal::reestablecer() {

        ui->label1->setAccessibleName("label1");
        ui->label1_1->setAccessibleName("label1_1");


        ui->label2->setAccessibleName("label2");
        ui->label1_2->setAccessibleName("label2_2");

        ui->label3->setAccessibleName("label3");
        ui->label1_3->setAccessibleName("label1_3");

        ui->label4->setAccessibleName("label4");
        ui->label1_4->setAccessibleName("label4_4");

        ui->label5->setAccessibleName("label5");
        ui->label1_5->setAccessibleName("label1_5");


        ui->label6->setAccessibleName("label6");
        ui->label1_6->setAccessibleName("label1_6");


        ui->label7->setAccessibleName("label7");
        ui->label1_7->setAccessibleName("label1_7");

        ui->label8->setAccessibleName("label8");
        ui->label1_8->setAccessibleName("label1_8");

        ui->label9->setAccessibleName("label9");
        ui->label1_9->setAccessibleName("label1_9");

        ui->label10->setAccessibleName("label10");
        ui->label1_10->setAccessibleName("label1_10");

        ui->label11->setAccessibleName("label11");
        ui->label1_11->setAccessibleName("label1_11");


        ui->label12->setAccessibleName("label12");
        ui->label1_12->setAccessibleName("label1_12");

        ui->label13->setAccessibleName("label13");
        ui->label1_13->setAccessibleName("label1_13");

        ui->label14->setAccessibleName("label14");
        ui->label1_14->setAccessibleName("label1_14");



    }


void Pag_Principal::Load(){

//       QVector< QLabel*  > pVector= QVector< QLabel*  >();

//         pVector.push_back(findChild< QLabel*  >( "label1" ));

//       string name0="label"+ to_string(1);

//       QString name= QString::fromStdString(name0.c_str());

//       QLabel* button = findChild<QLabel*> ( name);

//       button->setText("sddsffdsf");

                int indice = 0;
                reestablecer();
                ctrl_principal->crear_arboles();

                for (int i = 0; i < ctrl_principal->get_publicaiones()->get_size()&&indice<cantidad_labels; i++) {

                    if (ctrl_principal->get_publicaiones()->getpub(i)->getid_Usuario()==my_id) {

                            string name0="label"+ to_string(indice+1);

                            QString name= QString::fromStdString(name0.c_str());

                            QPushButton* label = findChild<QPushButton*> ( name);

                            label->setText(QString::fromStdString(ctrl_principal->get_publicaiones()->getpub(i)->gettitulo()+" "+
                                                                  to_string(ctrl_principal->get_publicaiones()->getpub(i)->getnumLikes()).c_str()));

                            label->setAccessibleName(to_string(ctrl_principal->get_publicaiones()->getpub(i)->getid_Usuario()).c_str());

                            string name1="label"+ to_string(1)+"_"+ to_string(indice+1);
                            QString name1_1= QString::fromStdString(name1.c_str());
                            QPushButton* label1_1 = findChild<QPushButton*> ( name1_1);

                            label1_1->setText(to_string(ctrl_principal->get_publicaiones()->getpub(i)->getid_publ()).c_str());
                            label1_1->setAccessibleName(to_string(ctrl_principal->get_publicaiones()->getpub(i)->getid_publ()).c_str());

                            ctrl_principal->add_Publ_Arbol_like(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL LIKES
                            ctrl_principal->add_Publ_Arbol_fecha(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL FECHA
                            ctrl_principal->add_Publ_Arbol_cant(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL CANTIDAD
                            ctrl_principal->add_Publ_Arbol_dentro(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL DENTRO
                            ctrl_principal->add_Publ_Arbol_empieza(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL CANTIDAD
                            ctrl_principal->add_Publ_Arbol_termina(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL DENTRO
                            ctrl_principal->add_Publ_Arbol_dentro_no(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL DENTRO
                            ctrl_principal->add_Publ_Arbol_igual(ctrl_principal->get_publicaiones()->getpub(i));//ARBOL DENTRO

                            /*tope3 = indice + 1;*/
                            indice++;
                    }
                }


                for (int i = 0; i < ctrl_principal->soyyo()->get_amigos()->size();i++) {

                                if (indice <= cantidad_labels) {

                                string name0="label"+ to_string(indice+1);

                                QString name= QString::fromStdString(name0.c_str());

                                QPushButton* label = findChild<QPushButton*> ( name);

                                label->setText(QString::fromStdString(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i))->gettitulo()+" "+
                                to_string(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i))->getnumLikes())));

                                label->setAccessibleName(to_string(ctrl_principal->getUssuarios()->getUsuario(i)->getid()).c_str());

                                string name1="label"+ to_string(1)+"_"+ to_string(indice+1);

                                QString name1_1= QString::fromStdString(name1.c_str());

                                QPushButton* label1_1 = findChild<QPushButton*> ( name1_1);


                                label1_1->setText(to_string(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i))->getid_publ()).c_str());
                                label1_1->setAccessibleName(to_string(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i))->getid_publ()).c_str());

                                ctrl_principal->add_Publ_Arbol_like(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL LIKE
                                ctrl_principal->add_Publ_Arbol_fecha(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL FECHA
                                ctrl_principal->add_Publ_Arbol_cant(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL CANTIDAD
                                ctrl_principal->add_Publ_Arbol_dentro(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL DENTRO
                                ctrl_principal->add_Publ_Arbol_empieza(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL DENTRO
                                ctrl_principal->add_Publ_Arbol_termina(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL DENTRO
                                ctrl_principal->add_Publ_Arbol_igual(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL DENTRO
                                ctrl_principal->add_Publ_Arbol_dentro_no(ctrl_principal->get_publicaiones()->getPubIDUsuario(ctrl_principal->soyyo()->get_amigos()->get(i)));//ARBOL DENTRO

                                 indice++;
                                }

                        }
    }

void Pag_Principal::on_btn_publicar_clicked(){


        ctrl_principal->get_publicaiones()->agregar(new Publicacion( ctrl_principal->get_publicaiones()->get_size()+1, my_id,
        ui->txt_titulo->text().toStdString(), ui->txt_desc->text().toStdString(), Fecha( ui->txt_fecha->text().toStdString()),0));

        ctrl_principal->guardar_publicaciones();
        Load();

}

//QString Pag_Usuario::namee(string name0){
//    return QString::fromStdString(name0.c_str());
//}


void Pag_Principal::on_btn_ord_likes_clicked(){

    reestablecer();

            vec_publ_like = ctrl_principal->inorden_like();

            for (int i = 0; i < vec_publ_like->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_like->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_like->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_like->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_like->at(i)->getid_publ()).c_str());
            }
}

void Pag_Principal::on_btn_ord_fecha_clicked(){
    reestablecer();

            vec_publ_fecha = ctrl_principal->inorden_fecha();

            for (int i = 0; i < vec_publ_fecha->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_fecha->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_fecha->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_fecha->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_fecha->at(i)->getid_publ()).c_str());
            }

}

void Pag_Principal::on_btn_ord_num_letra_clicked(){
    reestablecer();

            vec_publ_cant = ctrl_principal->inorden_cant();

            for (int i = 0; i < vec_publ_cant->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_cant->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
            }
}

void Pag_Principal::on_btn_buscar_texto_clicked(){
    reestablecer();

            vec_publ_dentro = ctrl_principal->inorden_dentro(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_dentro->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_dentro->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_dentro->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_dentro->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_dentro->at(i)->getid_publ()).c_str());
            }
}

void Pag_Principal::on_btn_empieza_clicked(){
    reestablecer();

            vec_publ_empieza = ctrl_principal->inorden_empieza(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_empieza->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_empieza->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_empieza->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_empieza->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_empieza->at(i)->getid_publ()).c_str());
            }
}


void Pag_Principal::on_btn_temina_clicked(){
    reestablecer();

            vec_publ_termina = ctrl_principal->inorden_termina(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_termina->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_termina->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_termina->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_termina->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_termina->at(i)->getid_publ()).c_str());
            }
}


void Pag_Principal::on_btn_igual_clicked(){
    reestablecer();

            vec_publ_cant = ctrl_principal->inorden_igual(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_cant->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_cant->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_cant->at(i)->getid_publ()).c_str());
            }
}

void Pag_Principal::on_btn_no_contenido_clicked(){
    reestablecer();

            vec_publ_contenido_no = ctrl_principal->inorden_dentro_no(ui->txt_buscar_texto->text().toStdString());

            for (int i = 0; i < vec_publ_contenido_no->size(); i++) {

                QPushButton* label = findChild<QPushButton*> ( QString::fromStdString("label"+to_string(i+1)));

                label->setText(vec_publ_contenido_no->at(i)->gettitulo().c_str());
                label->setAccessibleName(to_string(vec_publ_contenido_no->at(i)->getid_Usuario()).c_str());

                QPushButton* label1 = findChild<QPushButton*> ( QString::fromStdString("label"+ to_string(1)+"_"+ to_string(i+1)));

                label1->setText(to_string(vec_publ_contenido_no->at(i)->getid_publ()).c_str());
                label1->setAccessibleName(to_string(vec_publ_contenido_no->at(i)->getid_publ()).c_str());
            }
}

void Pag_Principal::on_btn_Buscar_clicked(){

            int a= ui->txt_Buscar_Users->text().toInt();

            Pag_Usuario* pag_buscado = new Pag_Usuario(this, a ,my_id, ctrl_principal->getUssuarios(), ctrl_principal->get_publicaiones());
            pag_buscado->setVisible(true);
            pag_buscado->show();
}


void Pag_Principal::on_label1_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label1->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_1->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label2_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label2->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_2->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);

}

void Pag_Principal::on_label3_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label3->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_3->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label4_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label4->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_4->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label5_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label5->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_5->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label6_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label6->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_6->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label7_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label7->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_7->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label8_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label8->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_8->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label9_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label9->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_9->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label10_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label10->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_10->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label11_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label11->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_11->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label12_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label12->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_12->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label13_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label13->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_13->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}

void Pag_Principal::on_label14_clicked(){
    pag_Comentario = new Pag_Comentario(this, atoi((ui->label14->accessibleName().toStdString()).c_str()),
            atoi((ui->label1_14->accessibleName().toStdString()).c_str()), ctrl_principal->getUssuarios(), ctrl_principal->soyyo()->getid(), ctrl_principal->get_publicaiones());

            pag_Comentario->show();
            this->setVisible(false);
}


