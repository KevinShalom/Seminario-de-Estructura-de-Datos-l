#ifndef CELSIUSFAHRENHEIT_H
#define CELSIUSFAHRENHEIT_H


class CelsiusFahrenheit
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

#endif // CELSIUSFAHRENHEIT_H
