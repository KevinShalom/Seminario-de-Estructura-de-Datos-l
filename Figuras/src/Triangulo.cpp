#include "Triangulo.h"

void triangulo::setBase(double base)
{
    this->base=base;
}
double triangulo::getBase()
{
    return this->base;
}
void triangulo::setAltura(double altura)
{
    this->altura=altura;
}
double triangulo::getAltura()
{
    return this->altura;
}
void triangulo::CalcularArea()
{
    this->area=(this->base*this->altura)/2;
}
double triangulo::getArea()
{
    return this->area;
}
void triangulo::setladoTriangulo(double lado)
{
    this->lado=lado;
}
double triangulo::getladoTriangulo()
{
    return this->lado;
}
void triangulo::CalcularPerimetro()
{
    this->perimetro=this->lado * 3;

}
double triangulo::getPerimetro()
{
    return this->perimetro;
}
