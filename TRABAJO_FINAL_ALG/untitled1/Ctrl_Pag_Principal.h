#ifndef CTRL_PAG_PRINCIPAL_H
#define CTRL_PAG_PRINCIPAL_H

#include "Usuarios.h"
#include "Interacciones.h"
#include <vector>
#include "ABS.h"
using namespace std;



class Control_Principal
{
public:
    Control_Principal(int my_id) {

        mi_id = my_id;
        usuarios = new Usuarios;
        publicaciones = new Publicaciones;
        cargar_usuarios();
        cargar_publicaciones();
        cargar_comentarios();

        cargar_amigos();
    }

    ~Control_Principal() {

    }

    void guardar_publicaciones() {
        ofstream guardar("publications.tsv");

        for (int i = 0; i < publicaciones->get_size(); i++) {

                guardar << publicaciones->getpub(i)->getid_publ() << '\t'
                        << publicaciones->getpub(i)->getid_Usuario() << '\t'
                        << publicaciones->getpub(i)->gettitulo() << '\t'
                        << publicaciones->getpub(i)->getdesc() << '\t'
                        << publicaciones->getpub(i)->getfecha().getfecha() << '\t'
                        << publicaciones->getpub(i)->getnumLikes() << endl;

        }

        guardar.close();
    }

    Usuarios*& get_usuarios() { return usuarios; }

    Publicaciones*& get_publicaiones() { return publicaciones; }

    Usuario*& soyyo() {
        return usuarios->getUsuario_ref(mi_id);
    }

    void crear_arboles() {

        bst_publicaciones_buscar_dentro = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });
        bst_publicaciones_buscar_empieza = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });
        bst_publicaciones_buscar_termina = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });

        bst_publicaciones_like =  new Bst<Publicacion*, int>([](Publicacion* p) {return p->getnumLikes(); });
        bst_publicaciones_fecha = new Bst<Publicacion*, int>([](Publicacion* p) {return (p->getfecha().getDia() + p->getfecha().getMes() * 30 + p->getfecha().getAnio() * 360); });
        bst_publicaciones_cantidad = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });

        bst_publicaciones_buscar_igual    = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });;
        bst_publicaciones_buscar_dentro_no = new Bst<Publicacion*, int>([](Publicacion* p) {return p->gettitulo().size(); });;
    }

    Bst<Publicacion*, int>*& getArbol_Public_like() {
        return bst_publicaciones_like;
    }

    Bst<Publicacion*, int>*& getArbol_Public_cant() {
        return bst_publicaciones_cantidad;
    }

    Bst<Publicacion*, int>*& getArbol_Public_fecha() {
        return bst_publicaciones_fecha;
    }

    Bst<Publicacion*, int>*& getArbol_Public_dentro() {
        return bst_publicaciones_buscar_dentro;
    }

    Bst<Publicacion*, int>*& getArbol_Public_empieza() {
        return bst_publicaciones_buscar_empieza;
    }

    Bst<Publicacion*, int>*& getArbol_Public_termina() {
        return bst_publicaciones_buscar_termina;
    }

    /*vector<string>* inOrden_like() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_like = new vector<string>;

        bst_publicaciones_like->inOrder([aux](Publicacion* p) {
            aux->push_back(p->gettitulo());
        });
        for (int i = 0; i < aux->size();i++) {
            vec_str_like->push_back(aux->at(i));
        }
        return vec_str_like;
    }*/

    vector<Publicacion*>* inorden_like() {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_likes = new vector<Publicacion*>;

        bst_publicaciones_like->inOrder([aux](Publicacion* p) {
            aux->push_back(p);
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_likes->push_back(aux->at(i));
        }
        return vec_publ_likes;
    }

    /*vector<string>* inOrden_fecha() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_fecha = new vector<string>;

        bst_publicaciones_fecha->inOrder([aux](Publicacion* p) {
            aux->push_back(p->gettitulo());
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_str_fecha->push_back(aux->at(i));
        }
        return vec_str_fecha;
    }*/

    vector<Publicacion*>* inorden_fecha() {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_fecha = new vector<Publicacion*>;
        bst_publicaciones_fecha->inOrder([aux](Publicacion* p) {
            aux->push_back(p);
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_fecha->push_back(aux->at(i));
        }
        return vec_publ_fecha;
    }

    /*vector<string>* inOrden_cant() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_cant = new vector<string>;

        bst_publicaciones_cantidad->inOrder([aux](Publicacion* p) {	aux->push_back(p->gettitulo());});
        for (int i = 0; i < aux->size(); i++) {
            vec_str_cant->push_back(aux->at(i));
        }
        return vec_str_cant;
    }*/

    vector<Publicacion*>* inorden_cant() {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_cantidad = new vector<Publicacion*>;


        bst_publicaciones_cantidad->inOrder([aux](Publicacion* p) {
            aux->push_back(p);
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_cantidad->push_back(aux->at(i));
        }
        return vec_publ_cantidad;
    }

    /*vector<string>* inOrden_dentro() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_dentro = new vector<string>;

        bst_publicaciones_buscar_dentro->inOrder([aux](Publicacion* p) {
            aux->push_back(p->gettitulo());
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_str_dentro->push_back(aux->at(i));
        }
        return vec_str_dentro;
    }*/

    vector<Publicacion*>* inorden_dentro(string texto_a_buscar) {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_dentro = new vector<Publicacion*>;

        bst_publicaciones_buscar_dentro->inOrder([aux, texto_a_buscar](Publicacion* p) {

            if (p->gettitulo().find(texto_a_buscar) != string::npos)
                aux->push_back(p);

            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_dentro->push_back(aux->at(i));
        }
        return vec_publ_dentro;
    }

    /*vector<string>* inOrden_empieza() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_empieza = new vector<string>;

        bst_publicaciones_buscar_empieza->inOrder([aux](Publicacion* p) {
            aux->push_back(p->gettitulo());
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_str_empieza->push_back(aux->at(i));
        }
        return vec_str_empieza;
    }*/

    vector<Publicacion*>* inorden_empieza(string texto_a_buscar) {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_empieza = new vector<Publicacion*>;


        bst_publicaciones_buscar_empieza->inOrder([aux, texto_a_buscar](Publicacion* p) {

            if (p->gettitulo().at(0)== texto_a_buscar.at(0))
                aux->push_back(p);

            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_empieza->push_back(aux->at(i));
        }
        return vec_publ_empieza;
    }

    /*vector<string>* inOrden_termina() {
        vector<string>* aux = new vector<string>;
        vector<string>* vec_str_termina = new vector<string>;

        bst_publicaciones_buscar_termina->inOrder([aux](Publicacion* p) {
            aux->push_back(p->gettitulo());
            });
        for (int i = 0; i < aux->size(); i++) {
            vec_str_termina->push_back(aux->at(i));
        }
        return vec_str_termina;
    }*/

    vector<Publicacion*>* inorden_termina(string texto_a_buscar) {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_termina = new vector<Publicacion*>;

        bst_publicaciones_buscar_termina->inOrder([aux, texto_a_buscar](Publicacion* p) {

            if (p->gettitulo().at(p->gettitulo().size() - 1) == texto_a_buscar.at(0))
                aux->push_back(p);

            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_termina->push_back(aux->at(i));
        }
        return vec_publ_termina;
    }


    vector<Publicacion*>* inorden_igual(string texto_a_buscar) {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_igual = new vector<Publicacion*>;

        bst_publicaciones_buscar_igual->inOrder([aux, texto_a_buscar](Publicacion* p) {

            if (p->gettitulo() == texto_a_buscar)
                aux->push_back(p);

            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_igual->push_back(aux->at(i));
        }
        return vec_publ_igual;
    }

    vector<Publicacion*>* inorden_dentro_no(string texto_a_buscar) {
        vector<Publicacion*>* aux = new vector<Publicacion*>;
        vector<Publicacion*>* vec_publ_dentro_no = new vector<Publicacion*>;

        bst_publicaciones_buscar_dentro_no->inOrder([aux, texto_a_buscar](Publicacion* p) {

            if (p->gettitulo().find(texto_a_buscar) == string::npos)
                aux->push_back(p);

            });
        for (int i = 0; i < aux->size(); i++) {
            vec_publ_dentro_no->push_back(aux->at(i));
        }
        return vec_publ_dentro_no;
    }

    void add_Publ_Arbol_like(Publicacion*p) {
        bst_publicaciones_like->add(p);
    }

    void add_Publ_Arbol_fecha(Publicacion* p) {
        bst_publicaciones_fecha->add(p);
    }

    void add_Publ_Arbol_cant(Publicacion* p) {
        bst_publicaciones_cantidad->add(p);
    }

    void add_Publ_Arbol_dentro(Publicacion* p) {
        bst_publicaciones_buscar_dentro->add(p);
    }

    void add_Publ_Arbol_empieza(Publicacion* p) {
        bst_publicaciones_buscar_empieza->add(p);
    }

    void add_Publ_Arbol_termina(Publicacion* p) {
        bst_publicaciones_buscar_termina->add(p);
    }

    void add_Publ_Arbol_dentro_no(Publicacion* p) {
        bst_publicaciones_buscar_dentro_no->add(p);
    }

    void add_Publ_Arbol_igual(Publicacion* p) {
        bst_publicaciones_buscar_igual->add(p);
    }

    Lista<int>* getAmigos() {
        return usuarios->getUsuario(mi_id)->get_amigos();
    }

    Usuarios*& getUssuarios() {
        return usuarios;
    }

private:
    Usuarios* usuarios;
    int mi_id;
    Usuario* soy_yo;
    Publicaciones* publicaciones;

    Bst<Publicacion*, int>* bst_publicaciones_like;
    Bst<Publicacion*, int>* bst_publicaciones_fecha;
    Bst<Publicacion*, int>* bst_publicaciones_cantidad;
    Bst<Publicacion*, int>* bst_publicaciones_buscar_dentro;
    Bst<Publicacion*, int>* bst_publicaciones_buscar_empieza;
    Bst<Publicacion*, int>* bst_publicaciones_buscar_termina;
    Bst<Publicacion*, int>* bst_publicaciones_buscar_igual;
    Bst<Publicacion*, int>* bst_publicaciones_buscar_dentro_no;



    void guardar_interacciones() {
        ofstream guardar("interaction.tsv");

        guardar.close();
    }

    void guardar_amigos() {
        ofstream guardar("followers.tsv");

        guardar.close();
    }

    void cargar_publicaciones() {

        ifstream file("publications.tsv");

        if (!file.is_open()) {
            return;
        }

        bool titles = true;
        string id, idU, titulo, desc, fecha, numLikes;
        while (getline(file, id, '\t')) {

            getline(file, idU, '\t');
            getline(file, titulo, '\t');
            getline(file, desc, '\t');

            file >> fecha; file.get();
            getline(file, numLikes);

            publicaciones->agregar(new Publicacion(atoi(id.c_str()), atoi(idU.c_str()), titulo, desc, Fecha(fecha), atoi(numLikes.c_str())));
            usuarios->getUsuario(atoi(idU.c_str()))->agregar_publicacion(new Publicacion(atoi(id.c_str()), atoi(idU.c_str()), titulo, desc, Fecha(fecha), atoi(numLikes.c_str())));
        }
        file.close();



    }

    void cargar_usuarios() {

        ifstream file("users.tsv");

        if (!file.is_open()) {
            return;
        }

        bool titles = true;
        string id, email, name, fecha;
        while (getline(file, id, '\t')) {

            getline(file, email, '\t');
            file >> name; file.get();
            getline(file, fecha);



            usuarios->agregar_usuario(new Usuario(atoi(id.c_str()), email, name, fecha));

        }
        file.close();
    }

    void cargar_amigos() {
        string line = "";
        Usuario* u;
        int posi = 0;
        ifstream leer("followers.tsv");

        while (getline(leer, line))
        {
            stringstream strstr(line);
            string word = "";
            int i = 0;
            while (getline(strstr, word, ','))
            {
                if (i == 0) {
                    posi = atoi(word.c_str());
                }
                if (i == 1) {
                    u = usuarios->getUsuario(atoi(word.c_str()));
                    for (int j = 0; j < usuarios->getUsuario(posi)->get_amigos()->size(); j++) {
                        if (usuarios->getUsuario(posi)->get_amigos()->find(atoi(word.c_str())) != -1) {
                            return;
                        }
                    }
                    usuarios->getUsuario(posi)->agregar_amigo(u->getid());
                }

                i++;
            }
        }

        leer.close();


    }

    void cargar_comentarios() {

        ifstream file("comment.tsv");

        if (!file.is_open()) {
            return;
        }

        bool titles = true;
        string id, idPub, date, text;

        while (getline(file, id, '\t')) {

            getline(file, idPub, '\t');
            file >> date; file.get();
            getline(file, text);

            publicaciones->getpub(atoi(idPub.c_str()))->agregar_commetario(new Comentario(atoi(id.c_str()), atoi(idPub.c_str()), Fecha(date), text));

        }
        file.close();
    }



};

#endif // CTRL_PAG_PRINCIPAL_H
