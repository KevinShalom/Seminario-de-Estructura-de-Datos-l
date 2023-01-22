#include "FahrenheitCelsius.h"
#include "math.h"
void FahrenheitCelsius::setTemperatura(double temp1){
this->temp1=temp1;
}
double FahrenheitCelsius::getTemperatura(){
return this->temp1;
}
void FahrenheitCelsius::CalcularTemperatura(){
    this->calculo = (this->temp1 - 32) * 5/9;
}
double FahrenheitCelsius::getConversion(){
    return this->calculo;
}
