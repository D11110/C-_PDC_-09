#include <iostream>

#ifndef CONTACTO_H
#define CONTACTO_H

using namespace std;
class Contacto
{
    int id;
    char nombre[50], telefono[15];

public:
    Contacto(){};
    
    void copiar_cadena(const string Cadena, char cadena[], int long_max)
    {
        int longitud = Cadena.size();
        longitud = (longitud < long_max ? longitud : long_max - 1);
        Cadena.copy(cadena, longitud);
        cadena[longitud] = '\0';
    }
    void establecerTelefono(const string &Telefono)
    {
        copiar_cadena(Telefono, telefono, 15);
    }
    string obtenerTelefono() const { return telefono; }
    void establecerNombre(const string &Nombre)
    {
        copiar_cadena(Nombre, nombre, 50);
    }
    string obtenerNombre() const { return nombre; }
    void establecerId(const int Id) { id = Id; }
    Contacto(const string &Tel, const string &Nom, const int Id)
    {
        establecerTelefono(Tel);
        establecerNombre(Nom);
        id = Id;
    }
    int obtenerId() const { return id; }
};

#endif
