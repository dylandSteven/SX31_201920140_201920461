#ifndef PUBLICACIONES_H
#define PUBLICACIONES_H
#include "Publicacion.h"
class Publicaciones
{
public:
    Publicaciones() {
        publicaciones = new Lista<Publicacion*>([](Publicacion* p) {return p->getid_publ(); });

    }
    ~Publicaciones() {}

    Publicacion* get_Last() {
        return publicaciones->getLast();
    }

    void agregar(Publicacion* p) {
        publicaciones->addLast(p);
    }

    int getPub_ID(Publicacion*p) {
        return publicaciones->find(p);
    }

    Publicacion*& getPubIDUsuario(int idUsuario) {
        return publicaciones->getPorID(idUsuario, [](Publicacion*p) {return p->getid_Usuario();});
    }

    void agregar_al_inicio(Publicacion* p) {
        publicaciones->addFirst(p);
    }

    Publicacion* getpub(int pos) {
        return publicaciones->get(pos);
    }

    int get_size() {
        return publicaciones->size();
    }

private:
    Lista<Publicacion*>* publicaciones;

};
#endif // PUBLICACIONES_H
