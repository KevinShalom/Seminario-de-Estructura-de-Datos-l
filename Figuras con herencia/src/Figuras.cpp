#include "Figuras.h"
#include <math.h>
void Figuras::setBase(double base)
{
    this->base=base;
}
double Figuras::getBase()
{
    return this->base;
}
void Figuras::setAltura(double altura)
{
    this->altura=altura;
}
double Figuras::getAltura()
{
    return this->altura;
}
void Figuras::setLado(double lado)
{
    this->lado=lado;
}
double Figuras::getLado()
{
    return this->lado;
}
void Figuras::setLado2(double lado2)
{
    this->lado2=lado2;
}
double Figuras::getLado2()
{
    return this->lado2;
}
void Figuras::setLados(double lados){
this->lados=lados;
}
double Figuras::getLados(){
return this->lados;
}
void Figuras::CalcularApotema(){
this->apotema=(this->base/(2*(tan((360/(2*this->lados)*3.1416/180)))));
}
double Figuras::getApotema(){
return this->apotema;
}
