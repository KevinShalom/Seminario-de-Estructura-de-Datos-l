#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>

class Nodo{
public:
    int valor;
    Nodo* siguiente;
    Nodo(int);
};

Nodo::Nodo(int valor){
    this->valor=valor;
    siguiente = NULL;
}


#endif // NODO_H_INCLUDED
