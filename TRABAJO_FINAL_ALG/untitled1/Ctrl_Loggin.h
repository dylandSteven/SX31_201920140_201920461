#ifndef CTRL_LOGGIN_H
#define CTRL_LOGGIN_H
#include "Usuarios.h"
class Control_Loggin
{
public:
    Control_Loggin() {
        usuarios = new Usuarios();
        cargar_usuarios();
    }

    ~Control_Loggin() {}

    void REGISTRAR_USUARIO(int id, string correo, string nombre, string fecha) {
        if (usuarios->getUsuario(id) == nullptr) {
            usuarios->agregar_usuario(new Usuario(id, correo, nombre, fecha));
            guardar_usuarios();

        }

    }

    bool LOGGEAR_USUARIO(int id) {
        for (int i = 0; i < usuarios->size(); i++) {
            if (usuarios->getUsuario(id)!=nullptr) {
                return true;
            }
        }
        return false;
    }

private:

    Usuarios* usuarios;

    void guardar_usuarios() {
        ofstream guardar("users.tsv");
        for (int i = 0; i < usuarios->size();i++) {
            guardar << usuarios->getUsuario(i)->getid() << '\t'
                    << usuarios->getUsuario(i)->getcorreo() << '\t'
                    << usuarios->getUsuario(i)->getnombre() << '\t'
                    << usuarios->getUsuario(i)->getfecha()<<endl;
        }

        guardar.close();
    }

    void cargar_usuarios() {

        ifstream file("users.tsv");

        if (!file.is_open()) {
            return;
        }


        string id, email, name, fecha;
        while (getline(file, id, '\t')) {

            getline(file, email, '\t');

            file >> name; file.get();
            getline(file, fecha);



            usuarios->agregar_usuario(new Usuario(atoi(id.c_str()), email, name, fecha));
        }
        file.close();
    }

};

#endif // CTRL_LOGGIN_H
