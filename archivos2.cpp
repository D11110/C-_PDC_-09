#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    ifstream archivoClientesEntrada("clientes.txt", ios::in);
    if (!archivoClientesEntrada)
    {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    int cuenta;
    string nombre;
    double saldo;
    cout << left << setw(10) << "Cuenta" << setw(13)
         << "Nombre"
         << "Saldo" << endl
         << fixed << showpoint;
    while (archivoClientesEntrada >> cuenta >> nombre >> saldo)
        cout << left << setw(10) << cuenta << setw(13) << nombre
             << setw(7) << setprecision(2) << right << saldo << endl;
}