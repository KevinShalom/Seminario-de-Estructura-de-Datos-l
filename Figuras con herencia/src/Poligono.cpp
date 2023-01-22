#include "Poligono.h"
#include "Figuras.h"
#include <math.h>

void poligono::CalcularAreaP(){
this->area=((this->getBase()*this->getLados())*this->getApotema())/2;
}
double poligono::getAreaP(){
return this->area;
}
void poligono::CalcularPerimetroP(){
this->perimetro=(this->getBase()*this->getLados());
}
double poligono::getPerimetroP(){
return this->perimetro;
}
