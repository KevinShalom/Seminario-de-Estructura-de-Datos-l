#ifndef CONVERSIONES_H
#define CONVERSIONES_H
#include "Dinero.h"

class Conversiones:public Dinero
{
    private:
        double total;
    public:
    void CalculoPesoDolar();
    double getPesoDolar();
    void CalculoDolarPeso();
    double getDolarPeso();
    void CalculoPesoEuro();
    double getPesoEuro();
    void CalculoEuroPeso();
    double getEuroPeso();
    void CalculoPesoYen();
    double getPesoYen();
    void CalculoYenPeso();
    double getYenPeso();
    void CalculoPesoYuan();
    double getPesoYuan();
    void CalculoYuanPeso();
    double getYuanPeso();

};

#endif // CONVERSIONES_H
