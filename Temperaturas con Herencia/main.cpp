//Con herencia
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <math.h>
#define TAMCADENA 10000
char CG1[TAMCADENA];
char CG2[TAMCADENA];
bool validacion_decimal(char *cadena);
using namespace std;
string cadfinal;
class Temperaturas
{
private:
    double temp;
public:
    void setTemperatura(double);
    double getTemperatura();
};
void Temperaturas::setTemperatura(double temp){
this->temp=temp;
}
double Temperaturas::getTemperatura(){
return this->temp;
}
class CelsiusKelvin:public Temperaturas{
private:
    double calculo;
public:
    void CalcularTemperaturaCK();
    double getConversionCK();
};
void CelsiusKelvin::CalcularTemperaturaCK(){
    this->calculo = getTemperatura() +  273.15;
}
double CelsiusKelvin::getConversionCK(){
    return this->calculo;
}
class KelvinCelsius:public Temperaturas{
private:
    double calculo;
public:
    void CalcularTemperaturaKC();
    double getConversionKC();
};
void KelvinCelsius::CalcularTemperaturaKC(){
    this->calculo = getTemperatura() -  273.15;
}
double KelvinCelsius::getConversionKC(){
    return this->calculo;
}
class CelsiusFahrenheit:public Temperaturas{
private:
    double calculo;
public:
    void CalcularTemperaturaCF();
    double getConversionCF();
};
void CelsiusFahrenheit::CalcularTemperaturaCF(){
    this->calculo = (getTemperatura() * 9/5) + 32;
}
double CelsiusFahrenheit::getConversionCF(){
    return this->calculo;
}
class FahrenheitCelsius:public Temperaturas{
private:
    double calculo;
public:
    void CalcularTemperaturaFC();
    double getConversionFC();
};
void FahrenheitCelsius::CalcularTemperaturaFC(){
    this->calculo = (getTemperatura() -  32) * 5/9;
}
double FahrenheitCelsius::getConversionFC(){
    return this->calculo;
}


int main()
{
    int opc = 0, opc2 = 0;
    double temperatura = 0;
    do
    {
        system("cls");
        system("color 0E");

        CelsiusKelvin ck;
        KelvinCelsius kc;
        CelsiusFahrenheit cf;
        FahrenheitCelsius fc;

        cout<<"------------CONVERTIDOR DE TEMPERATURAS CON HERENCIA------------"<<endl<<endl;
        cout<<"-------Menu-------"<<endl;
        cout<<"1)Celsius-Kelvin"<<endl;
        cout<<"2)Kelvin-Celsius"<<endl;
        cout<<"3)Celsius-Fahrenheit"<<endl;
        cout<<"4)Fahrenheit-Celsius"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>CG1;
        fflush(stdin);
        if(validacion_decimal(CG1))
        {
            fflush(stdin);
            opc = atoi(cadfinal.c_str());
            switch(opc)
            {
            case 1:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>Celsius-Kelvin<<<<"<<endl<<endl;
                cout<<"Ingrese la temperatura: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    temperatura = atoi(cadfinal.c_str());
                    ck.setTemperatura(temperatura);
                    ck.CalcularTemperaturaCK();
                    cout<<"La Temperatura es: "<<ck.getConversionCK()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            case 2:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>Kelvin-Celsius<<<<<"<<endl<<endl;
                cout<<"Ingrese la temperatura: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    temperatura = atoi(cadfinal.c_str());
                    kc.setTemperatura(temperatura);
                    kc.CalcularTemperaturaKC();
                    cout<<"La Temperatura es: "<<kc.getConversionKC()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            case 3:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>Celsius-Fahrenheit<<<<<"<<endl<<endl;
                cout<<"Ingrese la temperatura: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    temperatura = atoi(cadfinal.c_str());
                    cf.setTemperatura(temperatura);
                    cf.CalcularTemperaturaCF();
                    cout<<"La Temperatura es: "<<cf.getConversionCF()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            case 4:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>Fahrenheit-Celsius<<<<<"<<endl<<endl;
                cout<<"Ingrese la temperatura: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    temperatura = atoi(cadfinal.c_str());
                    fc.setTemperatura(temperatura);
                    fc.CalcularTemperaturaFC();
                    cout<<"La Temperatura es: "<<fc.getConversionFC()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            {
                default:
                    system("cls");
                    system("color 0C");
                    cout<<"Esa opcion no existe..."<<endl;
                    break;
                }
            }
        }
        else
        {
            system("cls");
            system("color 0C");
            cout<<"Datos no validos..."<<endl<<endl;
        }
        do
        {
            cout<<"Continuar 1[si] 2[no]"<<endl;
            cin>>CG1;
            if(validacion_decimal(CG1))
            {
                fflush(stdin);
                opc2 = atoi(cadfinal.c_str());
            }
            else
            {
                cout<<"Datos no validos..."<<endl;
            }
            system("pause");
        }
        while(opc2==0);
    }
    while(opc2!=2);
    system("pause>>cls");
    return 0;
}
bool validacion_decimal(char cadena[])
{
    int tamanio, i,validaciones = 0;
    bool cadvalida=false;
    tamanio = strlen(cadena);
    cadfinal="";
    if(cadena[0]=='-')
    {
        validaciones++;
        for(i=1; i<tamanio-1; i++)
        {
            if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57)))
            {
                validaciones++;
            }
        }
    }
    else
    {
        for(i=0; i<tamanio-1; i++)
        {
            if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57)))
            {
                validaciones++;
            }
        }
    }
    if(validaciones==tamanio-1)
    {
        cadvalida=true;
    }
    for(i=0; i<tamanio; i++)
    {
        cadfinal=cadfinal+cadena[i];
    }
    return cadvalida;
}
