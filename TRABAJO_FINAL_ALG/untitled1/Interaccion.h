#ifndef INTERACCION_H
#define INTERACCION_H
#include <iostream>
#include "Fecha.h"
using namespace std;

class Interaccion
{
public:
    Interaccion(int id_User, int id_Publ, Fecha date, string share = "FALSE"):id_User(id_User), id_Publ(id_Publ), date(date), share(share){}
    ~Interaccion(){}

    int getIDUser() {
        return id_User;
    }

    int getIDPubl() {
        return id_Publ;
    }

    string get_share() {
        return share;
    }

    Fecha get_Date() {
        return date;
    }
private:
    int id_User;
    int id_Publ;
    Fecha date;
    string share;

};

#endif // INTERACCION_H
