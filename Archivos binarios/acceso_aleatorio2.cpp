#include <iostream>
#include "inciso_3.hpp"
using namespace std;
int main()
{
    inciso_3 prueba;
    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary);
    prueba.escribir_o_leer(fcont, true);
    cout << "ANTES:" << endl;
    prueba.escribir_o_leer(fcont, false);
    cout << endl
         << "CAMBIOS:" << endl;
    prueba.cambios(fcont);
    cout << endl
         << "DESPUES:" << endl;
    prueba.escribir_o_leer(fcont, false);
}