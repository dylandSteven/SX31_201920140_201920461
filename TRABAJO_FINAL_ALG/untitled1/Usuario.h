#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include "Publicaciones.h"

using std::string;

class Usuario
{
public:
    Usuario(int id, string correo, string nombre, string fecha): id(id), correo(correo), nombre(nombre), fecha(fecha) {
        amigos = new Lista<int>;
        publicaciones = new Publicaciones;

    }
    ~Usuario() {

    }

    void agregar_amigo(int id) {
        amigos->addLast(id);
    }

    void agregar_publicacion(Publicacion*p) {
        publicaciones->agregar(p);
    }

    void agregar_publicacion_incio(Publicacion* publicacion) {
        publicaciones->agregar_al_inicio(publicacion);
    }

    Lista<int>* get_amigos() {
        return amigos;
    }

    Publicaciones* get_publicaciones() {
        return publicaciones;
    }


    int getid() { return id; }
    string getcorreo() { return correo; }
    string getnombre() { return nombre; }
    string getfecha() { return fecha; }

    void setid(int v) { id = v; }
    void setcorreo(string v) { correo = v; }
    void setnombre(string v) { nombre = v; }
    void setfecha(string v) { fecha = v; }


private:

    int id;
    string correo;
    string nombre;
    string fecha;
    Lista<int>* amigos;
    Publicaciones* publicaciones;
};


#endif // USUARIO_H
