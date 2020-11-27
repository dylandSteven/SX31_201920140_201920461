#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class Fecha
{
public:
    Fecha(string fecha) {
        dar_fecha(fecha, dia, mes, anio);
    }
    ~Fecha() {

    }

    void dar_fecha(string fecha, int& dia_, int& mes_, int& anio_) {
        this->fecha = fecha;
        string dia = "";
        string mes = "";
        string anio = "";

        for (int i = 0; i < 4; i++) {
            anio += fecha.at(i);
        }

        for (int i = 5; i < 7; i++) {
            mes += fecha.at(i);
        }

        for (int i = 8; i < 10; i++) {
            dia += fecha.at(i);
        }
        dia_ = atoi(dia.c_str());
        mes_ = atoi(mes.c_str());
        anio_ = atoi(anio.c_str());
    }

    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAnio() { return anio; }
    string getfecha() {
        return fecha;
    }

private:
    int dia;
    int mes;
    int anio;
    string fecha;
};
#endif // FECHA_H
