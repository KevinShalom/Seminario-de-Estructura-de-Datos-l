#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figuras.h"


class cuadrado:public Figuras{
private:
    double area;
    double perimetro;
public :
    void CalcularAreaC();
    double getAreaC();
    void CalcularPerimetroC();
    double getPerimetroC();
};

#endif // CUADRADO_H
