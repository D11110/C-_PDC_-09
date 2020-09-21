#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ofstream archivoClientesSalida("clientes.txt", ios::out);
    if (!archivoClientesSalida)
    {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Escriba la cuenta, nombre y saldo." << endl
         << "Escriba fin de archivo para terminar la entrada.\n? ";
    int cuenta;
    string nombre;
    double saldo;
    while (cin >> cuenta >> nombre >> saldo)
    {
        archivoClientesSalida << cuenta << ' ' << nombre << ' ' << saldo << endl;
        cout << "? ";
    }
}