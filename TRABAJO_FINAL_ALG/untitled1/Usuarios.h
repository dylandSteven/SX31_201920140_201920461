#ifndef USUARIOS_H
#define USUARIOS_H
#include "Usuario.h"
#include "Lista.h"
class Usuarios
{
public:
    Usuarios() {
        usuarios = new Lista<Usuario*>([](Usuario* u) {return u->getid();});
    }
    ~Usuarios() {

    }

    void agregar_usuario(Usuario* u) {
        usuarios->addLast(u);
    }

    Usuario* getUsuario(int pos ) {
        return usuarios->get(pos);
    }

    int size() { return usuarios->size(); }

    Usuario*& getUsuario_ref(int pos) {
        return usuarios->get_referencia(pos);
    }

private:
    Lista<Usuario*>* usuarios;
};

#endif // USUARIOS_H
