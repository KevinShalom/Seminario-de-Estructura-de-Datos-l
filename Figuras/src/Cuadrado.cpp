#include "Cuadrado.h"


void cuadrado::setladoCuadrado(double lado)
{
    this->lado=lado;
}
double cuadrado::getladoCuadrado()
{
    return this->lado;
}
void cuadrado::CalcularArea()
{
    this->area= this->lado * this->lado;
}
double cuadrado::getArea()
{
    return this->area;
}
void cuadrado::CalcularPerimetro()
{
    this->perimetro=this->lado * 4;

}
double cuadrado::getPerimetro()
{
    return this->perimetro;
}
