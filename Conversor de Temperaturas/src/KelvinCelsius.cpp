#include "KelvinCelsius.h"
#include <math.h>
void KelvinCelsius::setTemperatura(double temp1){
this->temp1=temp1;
}
double KelvinCelsius::getTemperatura(){
return this->temp1;
}
void KelvinCelsius::CalcularTemperatura(){
    this->calculo = this->temp1 - 273.15;
}
double KelvinCelsius::getConversion(){
    return this->calculo;
}
