#include "ui_Pag_Comentario.h"
#include "Pag_Comentario.h"


Pag_Comentario::Pag_Comentario(QWidget *parent,int id_Usuario, int id_publ, Usuarios*&u, int my_id, Publicaciones*&publ) :
    QMainWindow(parent),
    ui(new Ui::Pag_Comentario)
{
    ui->setupUi(this);
    aux = u;
    /*cout << aux->getUsuario(1)->getid();*/
    this->pag =parent;

    interacciones = new Interacciones();
    cargar_interacciones();

    this->publ = publ;
    this->id_Usuario = id_Usuario;
    this->id_publ = id_publ;
    this->my_id = my_id;
    pag_usuario = new Pag_Usuario(this, id_Usuario, my_id, u, publ);
    Load();

    //
}

Pag_Comentario::~Pag_Comentario()
{
    delete ui;
}

void Pag_Comentario::cargar_interacciones() {

        ifstream file("interaction.tsv");

        if (!file.is_open()) {
            return;
        }

        bool titles = true;
        string id_Usuario, id_Publ, fecha, share;
        while (getline(file, id_Usuario, '\t')) {

            getline(file, id_Publ, '\t');
            file >> fecha; file.get();
            getline(file, share);

            interacciones->agregar(new Interaccion(atoi(id_Usuario.c_str()), atoi(id_Publ.c_str()), Fecha(fecha), share));
        }
        file.close();

    }
void Pag_Comentario::guardar_interacciones() {
        ofstream guardar("interaction.tsv");

        for (int i = 0; i < interacciones->getSize();i++) {
            guardar << interacciones->get_Interaccion(i)->getIDUser() << '\t' << interacciones->get_Interaccion(i)->getIDPubl() << '\t'
                << interacciones->get_Interaccion(i)->get_Date().getfecha() << '\t' << interacciones->get_Interaccion(i)->get_share() << endl;
        }

        guardar.close();
    }

void Pag_Comentario::guardar_comentarios() {

        ofstream guardar("comment.tsv");


            for (int j = 0; j < publ->get_size(); j++) {

                for (int k = 0; k < publ->getpub(j)->getSizeComent(); k++) {

                    guardar << publ->getpub(j)->get_Comentario(k)->getid() << '\t'
                            << publ->getpub(j)->get_Comentario(k)->getidPub() << '\t'
                            << publ->getpub(j)->get_Comentario(k)->getfecha().getfecha() << '\t'
                            << publ->getpub(j)->get_Comentario(k)->gettexto() << endl;
                }
            }

        guardar.close();
    }

void Pag_Comentario::guardar_publicaciones() {
        ofstream guardar("publications.tsv");

        for (int i = 0; i < publ->get_size(); i++) {

            guardar << publ->getpub(i)->getid_publ() << '\t'
                << publ->getpub(i)->getid_Usuario() << '\t'
                << publ->getpub(i)->gettitulo() << '\t'
                << publ->getpub(i)->getdesc() << '\t'
                << publ->getpub(i)->getfecha().getfecha() << '\t'
                << publ->getpub(i)->getnumLikes() << endl;

        }

        guardar.close();
    }

void Pag_Comentario::on_btn_comentar_clicked(){

    publ->getpub(id_publ)->agregar_commetario(new Comentario(
                publ->getpub(id_publ)->getid_publ() + 1001, id_publ,
                Fecha("0000-00-00"), ui->txt_comentario->text().toStdString()));

            ui->listBox_coment->insertItem(0,ui->txt_comentario->text());
            guardar_comentarios();
}
void Pag_Comentario::Load(){

    int idx = aux->getUsuario(id_Usuario)->get_publicaciones()->getPub_ID(new Publicacion(id_publ, id_Usuario,"","", Fecha("0000-00-00"),0));

            ui->lbl_desc->setText(publ->getpub(id_publ)->getdesc().c_str());
            ui->lbl_titulo->setText(publ->getpub(id_publ)->gettitulo().c_str());


            for (int i = 0; i < publ->getpub(id_publ)->getSizeComent();i++) {
                ui->listBox_coment->insertItem(0,(publ->getpub(id_publ)->get_Comentario(i)->gettexto().c_str()));
            }
}



void Pag_Comentario::on_btn_share_clicked(){

    if (interacciones->get_por_IDUsuario(my_id)->get_share() == "FALSE") {
                interacciones->agregar(new Interaccion(my_id,id_publ, Fecha("2020-27-11"),"TRUE"));

            guardar_interacciones();

            }

}


void Pag_Comentario::on_pushButton_2_clicked(){
   pag_usuario->show();
            this->setVisible(false);
}

void Pag_Comentario::on_pushButton_clicked(){
    this->setVisible(false);
            pag->setVisible(true);
            pag->show();
}

void Pag_Comentario::on_btn_like_clicked(){
    publ->getPubIDUsuario(id_Usuario)->setnumLikes(publ->getPubIDUsuario(id_Usuario)->getnumLikes()+1);
            guardar_publicaciones();
}
