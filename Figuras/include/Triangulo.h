#ifndef TRIANGULO_H
#define TRIANGULO_H

class triangulo
{
private:
    double base;
    double altura;
    double area;
    double lado;
    double perimetro;
public:
    void setBase(double);
    double getBase();
    void setAltura(double);
    double getAltura();
    void CalcularArea();
    double getArea();
    void setladoTriangulo(double);
    double getladoTriangulo();
    void CalcularPerimetro();
    double getPerimetro();
};

#endif // TRIANGULO_H
