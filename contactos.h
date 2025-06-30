#ifndef CONTACTOS_H
#define CONTACTOS_H
#include <string>
using namespace std;

const int TAM=100;

struct contactoEmail{
    string nombre;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

extern contactoEmail contactos[TAM]; // extern se usa para definir las variables en otra parte, en este caso en contactos.cpp
extern int cantidad;

void agregar();
void eliminar();
void mostrar();
void orden();
string buscar(const string &email);

#endif
