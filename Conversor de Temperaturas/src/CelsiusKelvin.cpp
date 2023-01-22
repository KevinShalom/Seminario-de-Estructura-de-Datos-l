#include "CelsiusKelvin.h"
#include <math.h>
void CelsiusKelvin::setTemperatura(double temp1){
this->temp1=temp1;
}
double CelsiusKelvin::getTemperatura(){
return this->temp1;
}
void CelsiusKelvin::CalcularTemperatura(){
    this->calculo = this->temp1 + 273.15;
}
double CelsiusKelvin::getConversion(){
    return this->calculo;
}
