#ifndef INCISO_3_H
#define INCISO_3_H
#include <string>
#include "contacto.hpp"
#include <fstream>
using namespace std;

class inciso_3
{
public:
    void escribir_o_leer(fstream &fcont, bool Escribir);
    void leer_el_3(fstream &fcont, Contacto &cont);
    void escribir_el_3(fstream &fcont, Contacto &cont);
    void cambios(fstream &fcont);
};
#endif