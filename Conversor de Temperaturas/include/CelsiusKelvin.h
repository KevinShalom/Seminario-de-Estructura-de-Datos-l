#ifndef CELSIUSKELVIN_H
#define CELSIUSKELVIN_H


class CelsiusKelvin
{
private:
    double temp1;
    double temp2;
    double calculo;
public:
    void setTemperatura(double);
    double getTemperatura();
    void CalcularTemperatura();
    double getConversion();
};


#endif // CELSIUSKELVIN_H
