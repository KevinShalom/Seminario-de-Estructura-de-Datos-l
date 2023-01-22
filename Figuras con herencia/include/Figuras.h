#ifndef FIGURAS_H
#define FIGURAS_H


class Figuras{
private:
    double base;
    double altura;
    double lado;
    double lado2;
    double lados;
    double apotema;
public:
    void setBase(double);
    double getBase();
    void setAltura(double);
    double getAltura();
    void setLados(double);
    double getLados();
    void setLado(double);
    double getLado();
    void setLado2(double);
    double getLado2();
    void CalcularApotema();
    double getApotema();
};
#endif // FIGURAS_H
