#ifndef COMENTARIOS_H
#define COMENTARIOS_H

#include "Lista.h"
#include "Comentario.h"

class Comentarios
{
public:
    Comentarios() {
        comentarios = new Lista<Comentario*>([](Comentario* c) {return c->getid(); });
    }
    ~Comentarios() {}

    void agregar(Comentario*com) {
        comentarios->addLast(com);
    }

    Comentario* getComentario(int pos) {
        return comentarios->get(pos);
    }

    int size() {
        return comentarios->size();
    }



private:
    Lista<Comentario*>* comentarios;
};
#endif // COMENTARIOS_H
