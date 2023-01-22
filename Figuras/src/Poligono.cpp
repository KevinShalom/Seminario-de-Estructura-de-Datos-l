#include "Poligono.h"
#include <math.h>
void poligono::setBase(double base){
this->base=base;
}
double poligono::getBase(){
return this->base;
}
void poligono::setLados(double lados){
this->lados=lados;
}
double poligono::getLados(){
return this->lados;
}
void poligono::CalcularApotema(){
this->apotema=(this->base/(2*(tan((360/(2*this->lados)*3.1416/180)))));
}
double poligono::getApotema(){
return this->apotema;
}
void poligono::CalcularArea(){
this->area=((this->base*this->lados)*this->apotema)/2;
}
double poligono::getArea(){
return this->area;
}
void poligono::CalcularPerimetro(){
this->perimetro=(this->base*this->lados);
}
double poligono::getPerimetro(){
return this->perimetro;
}
