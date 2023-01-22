#ifndef DINERO_H
#define DINERO_H


class Dinero
{
private:
    double peso;
    double dolar;
    double euro;
    double yen;
    double yuan;
public:
    void setPeso(double);
    double getPeso();
    void setDolar(double);
    double getDolar();
    void setEuro(double);
    double getEuro();
    void setYen(double);
    double getYen();
    void setYuan(double);
    double getYuan();
};

#endif // DINERO_H
