#ifndef PUBLICACION_H
#define PUBLICACION_H
#include <iostream>
#include "Comentarios.h"

using namespace std;


class Publicacion
{
public:

    Publicacion(int id_publ, int id_Usuario,string titulo, string desc, Fecha fecha, int numLikes) :id_publ(id_publ), id_Usuario(id_Usuario), titulo(titulo), desc(desc), fecha(fecha), numLikes(numLikes) {
        comentarios = new Comentarios();
    }

    ~Publicacion() {}

    void agregar_commetario(Comentario*com) {
        comentarios->agregar(com);
    }


    Comentario* get_Comentario(int pos) {
        return comentarios->getComentario(pos);
    }

    int getSizeComent() {
        return comentarios->size();
    }


    int getid_publ() { return id_publ; };
    int getid_Usuario() { return id_Usuario; };
    string gettitulo() { return titulo; };
    string getdesc() { return desc; };
    Fecha getfecha() { return fecha; };
    int getnumLikes() { return numLikes; };


    void setid_publ(int v) { id_publ = v; }
    void setid_Usuario(int v) { id_Usuario = v; }
    void settitulo(string v) { titulo = v; }
    void setdesc(string v) { desc = v; }
    void setfecha(Fecha v) { fecha = v; }
    void setnumLikes(int v) { numLikes = v; }

private:
    int id_publ;
    int id_Usuario;
    string titulo;
    string desc;
    Fecha fecha;
    int numLikes;
    Comentarios* comentarios;
};

#endif // PUBLICACION_H
