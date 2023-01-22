#ifndef FAHRENHEITCELSIUS_H
#define FAHRENHEITCELSIUS_H


class FahrenheitCelsius
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

#endif // FAHRENHEITCELSIUS_H
