#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>

#include "Operaciones.hpp"

using namespace std;

int main()
{
    Operacion op;
    fstream fcont0("contactos.dat", ios::out);
    fcont0.close();
    fstream fcont("contactos.dat", ios::in | ios::out | ios::binary);
    op.escribir_o_leer(fcont, true);
    cout << "ANTES:" << endl;
    op.escribir_o_leer(fcont, false);
    cout << endl
         << "CAMBIOS:" << endl;
    op.cambios(fcont);
    cout << endl
         << "DESPUES:" << endl;
    op.escribir_o_leer(fcont, false);
}