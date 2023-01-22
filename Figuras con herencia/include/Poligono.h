#ifndef POLIGONO_H
#define POLIGONO_H
#include "Figuras.h"

class poligono:public Figuras{
private:
    double area;
    double perimetro;
public :
    void CalcularAreaP();
    double getAreaP();
    void CalcularPerimetroP();
    double getPerimetroP();
};

#endif // POLIGONO_H
