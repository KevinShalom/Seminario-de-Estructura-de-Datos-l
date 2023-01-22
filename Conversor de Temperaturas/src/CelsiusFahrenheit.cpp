#include "CelsiusFahrenheit.h"
#include <math.h>
void CelsiusFahrenheit::setTemperatura(double temp1){
this->temp1=temp1;
}
double CelsiusFahrenheit::getTemperatura(){
return this->temp1;
}
void CelsiusFahrenheit::CalcularTemperatura(){
    this->calculo = (this->temp1 * 9/5) + 32;
}
double CelsiusFahrenheit::getConversion(){
    return this->calculo;
}

