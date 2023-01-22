#include "Conversiones.h"
#include "Dinero.h"

void Conversiones::CalculoPesoDolar()
{
    this->total = this->getPeso() * 0.050;
}
double Conversiones::getPesoDolar()
{
    return this->total;
}
void Conversiones::CalculoDolarPeso()
{
    this->total = this->getDolar() * 20.08;
}
double Conversiones::getDolarPeso()
{
    return this->total;
}
void Conversiones::CalculoPesoEuro()
{
    this->total = this->getPeso() * 0.050;
}
double Conversiones::getPesoEuro()
{
    return this->total;
}
void Conversiones::CalculoEuroPeso()
{
    this->total = this->getEuro() * 20.09;
}
double Conversiones::getEuroPeso()
{
    return this->total;
}
void Conversiones::CalculoPesoYen()
{
    this->total = this->getPeso() * 7.15;
}
double Conversiones::getPesoYen()
{
    return this->total;
}
void Conversiones::CalculoYenPeso()
{
    this->total = this->getYen() * 0.14;
}
double Conversiones::getYenPeso()
{
    return this->total;
}
void Conversiones::CalculoPesoYuan()
{
    this->total = this->getPeso() * 0.35;
}
double Conversiones::getPesoYuan()
{
    return this->total;
}
void Conversiones::CalculoYuanPeso()
{
    this->total = this->getYuan() * 2.87;
}
double Conversiones::getYuanPeso()
{
    return this->total;
}
