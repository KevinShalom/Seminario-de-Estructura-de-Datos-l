#include "Cuadrado.h"
#include "Figuras.h"
#include <math.h>

void cuadrado::CalcularAreaC()
{
    this->area= this->getLado() * this->getLado();
}
double cuadrado::getAreaC()
{
    return this->area;
}
void cuadrado::CalcularPerimetroC()
{
    this->perimetro=this->getLado() * 4;

}
double cuadrado::getPerimetroC()
{
    return this->perimetro;
}
