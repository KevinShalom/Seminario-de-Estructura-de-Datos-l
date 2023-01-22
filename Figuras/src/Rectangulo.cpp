#include "Rectangulo.h"

void rectangulo::setBase(double base)
{
    this->base=base;
}
double rectangulo::getBase()
{
    return this->base;
}
void rectangulo::setAltura(double altura)
{
    this->altura=altura;
}
double rectangulo::getAltura()
{
    return this->altura;
}
void rectangulo::CalcularArea()
{
    this->area= (this->base * this->altura)/1;
}
double rectangulo::getArea()
{
    return this->area;
}
void rectangulo::setladoRectangulo(double lado)
{
    this->lado=lado;
}
double rectangulo::getladoRectangulo()
{
    return this->lado;
}
void rectangulo::setladoRectangulo2(double lado2)
{
    this->lado2=lado2;
}
double rectangulo::getladoRectangulo2()
{
    return this->lado2;
}
void rectangulo::CalcularPerimetro()
{
    this->perimetro=(this->base * 2) + (this->altura * 2);

}
double rectangulo::getPerimetro()
{
    return this->perimetro;
}
