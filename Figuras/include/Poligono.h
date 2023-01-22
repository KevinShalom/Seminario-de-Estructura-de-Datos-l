#ifndef POLIGONO_H
#define POLIGONO_H

class poligono
{
private:
    double base;
    double area;
    double lados;
    double perimetro;
    double apotema;
public:
    void setBase(double);
    double getBase();
    void setLados(double);
    double getLados();
    void CalcularApotema();
    double getApotema();
    void CalcularArea();
    double getArea();
    void setladoTriangulo(double);
    double getladoTriangulo();
    void CalcularPerimetro();
    double getPerimetro();
};

#endif // POLIGONO_H
