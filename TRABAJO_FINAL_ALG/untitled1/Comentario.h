#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <iostream>
#include "Fecha.h"
using  std::string;


class Comentario
{
public:
    Comentario(int id, int idPub, Fecha fecha, string texto) : id(id), idPub(idPub), fecha(fecha), texto(texto) {}
    ~Comentario() {}

    int getid() { return id; };
    int getidPub() { return idPub; };
    Fecha getfecha() { return fecha; };
    string gettexto() { return texto; };


    void setid(int v) { id = v; }
    void setidPub(int v) { idPub = v; }
    void setfecha(string v) { fecha = v; }
    void settexto(string v) { texto = v; }

private:
    int id;
    int idPub;
    Fecha fecha;
    string texto;
};

#endif // COMENTARIO_H
