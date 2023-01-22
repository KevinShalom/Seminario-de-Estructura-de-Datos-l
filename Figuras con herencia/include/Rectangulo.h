#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figuras.h"

class rectangulo:public Figuras{
private:
    double area;
    double perimetro;
public :
    void CalcularAreaR();
    double getAreaR();
    void CalcularPerimetroR();
    double getPerimetroR();
};

#endif // RECTANGULO_H
