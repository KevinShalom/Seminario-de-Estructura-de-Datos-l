#ifndef KELVINCELSIUS_H
#define KELVINCELSIUS_H


class KelvinCelsius
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

#endif // KELVINCELSIUS_H
