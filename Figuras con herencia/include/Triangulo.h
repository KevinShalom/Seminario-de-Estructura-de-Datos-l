#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figuras.h"


class triangulo:public Figuras{
private:
    double area;
    double perimetro;
public :
    void CalcularAreaT();
    double getAreaT();
    void CalcularPerimetroT();
    double getPerimetroT();

};

#endif // TRIANGULO_H
