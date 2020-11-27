#ifndef INTERACCIONES_H
#define INTERACCIONES_H
#include "Interaccion.h"
#include "Lista.h"

class Interacciones
{
public:
    Interacciones(){
        interacciones = new Lista<Interaccion*>([](Interaccion* in) {return in->getIDUser(); });
    }
    ~Interacciones(){}

    void agregar(Interaccion*in) {
        interacciones->addLast(in);
    }

    Interaccion*& get_por_IDUsuario(int idUser) {
        return interacciones->getPorID(idUser, [](Interaccion* i) {return i->getIDUser(); });
    }

    Interaccion*& get_Interaccion_ref(int pos) {
        return interacciones->get_referencia(pos);
    }

    Interaccion* get_Interaccion(int pos) {
        return interacciones->get_referencia(pos);
    }

    Interaccion*& get_por_id_ref(int id) {
        return interacciones->get_referencia(interacciones->find(new Interaccion(id,0,Fecha("0000-00-00"),"FALSE")));
    }

    int getSize() { return interacciones->size(); }

    Interaccion* get_por_id(int id) {
        return  interacciones->get(interacciones->find(new Interaccion(id, 0, Fecha("0000-00-00"), "FALSE")));
    }
private:
    Lista<Interaccion*> * interacciones;
};

#endif // INTERACCIONES_H
