#ifndef CUADRADO_H
#define CUADRADO_H


class cuadrado
{
private:
    double area;
    double lado;
    double perimetro;
public:
    void CalcularArea();
    double getArea();
    void setladoCuadrado(double);
    double getladoCuadrado();
    void CalcularPerimetro();
    double getPerimetro();
};
#endif // CUADRADO_H
