#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <iostream>

class Nodo{
public:
    int Valor;
    Nodo* Sig;
    Nodo(int);
};

Nodo::Nodo(int valor){
    Valor = valor;
    Sig = NULL;
}

#endif // NODO_H_INCLUDED
