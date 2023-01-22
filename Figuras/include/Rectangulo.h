#ifndef RECTANGULO_H
#define RECTANGULO_H


class rectangulo
{
private:
    double base;
    double altura;
    double area;
    double lado;
    double lado2;
    double perimetro;
public:
    void setBase(double);
    double getBase();
    void setAltura(double);
    double getAltura();
    void CalcularArea();
    double getArea();
    void setladoRectangulo(double);
    double getladoRectangulo();
    void setladoRectangulo2(double);
    double getladoRectangulo2();
    void CalcularPerimetro();
    double getPerimetro();
};

#endif // RECTANGULO_H
