#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <math.h>
#define TAMCADENA 10000
#include "CelsiusKelvin.h"
#include "KelvinCelsius.h"
#include "CelsiusFahrenheit.h"
#include "FahrenheitCelsius.h"
char CG1[TAMCADENA];
char CG2[TAMCADENA];
using namespace std;
bool validacion_decimal(char *cadena);
string cadfinal;

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
        fflush(stdin);
        cout<<"------------CONVERTIDOR DE TEMPERATURAS------------"<<endl<<endl;
        cout<<"-------Menu-------"<<endl;
        cout<<"1)Celsius-Kelvin"<<endl;
        cout<<"2)Kelvin-Celsius"<<endl;
        cout<<"3)Celsius-Fahrenheit"<<endl;
        cout<<"4)Fahrenheit-Celsius"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>CG1;
        fflush(stdin);
        if(validacion_decimal(CG1)){
        fflush(stdin);
        opc = atoi(cadfinal.c_str());
        switch(opc)
        {
        case 1:{
            fflush(stdin);
            system("cls");
            system("color 0B");
            cout<<">>>>Celsius-Kelvin<<<<"<<endl<<endl;
            cout<<"Ingrese la temperatura: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            temperatura = atoi(cadfinal.c_str());
            ck.setTemperatura(temperatura);
            ck.CalcularTemperatura();
            cout<<"La Temperatura es: "<<ck.getConversion()<<endl<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        case 2:{
            fflush(stdin);
            system("cls");
            system("color 0B");
            cout<<">>>>>Kelvin-Celsius<<<<<"<<endl<<endl;
            cout<<"Ingrese la temperatura: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            temperatura = atoi(cadfinal.c_str());
            kc.setTemperatura(temperatura);
            kc.CalcularTemperatura();
            cout<<"La Temperatura es: "<<kc.getConversion()<<endl<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        case 3:{
            fflush(stdin);
            system("cls");
            system("color 0B");
            cout<<">>>>>Celsius-Fahrenheit<<<<<"<<endl<<endl;
            cout<<"Ingrese la temperatura: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            temperatura = atoi(cadfinal.c_str());
            cf.setTemperatura(temperatura);
            cf.CalcularTemperatura();
            cout<<"La Temperatura es: "<<cf.getConversion()<<endl<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        case 4:{
            fflush(stdin);
            system("cls");
            system("color 0B");
            cout<<">>>>>Fahrenheit-Celsius<<<<<"<<endl<<endl;
            cout<<"Ingrese la temperatura: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            temperatura = atoi(cadfinal.c_str());
            fc.setTemperatura(temperatura);
            fc.CalcularTemperatura();
            cout<<"La Temperatura es: "<<fc.getConversion()<<endl<<endl;
            }
            else{
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
        else{
            system("cls");
            system("color 0C");
            cout<<"Datos no validos..."<<endl<<endl;
        }
        cout<<"Continuar 1[si] 2[no]"<<endl;
        cin>>opc2;
    }
    while(opc2!=2);
    system("pause>>cls");
    return 0;
}
bool validacion_decimal(char cadena[]){
    int tamanio , i,validaciones = 0;
    bool cadvalida=false;
    tamanio = strlen(cadena);
    cadfinal="";
    if(cadena[0]=='-'){
      validaciones++;
    for(i=1;i<tamanio-1;i++){
    if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57))){
      validaciones++;
    }
    }
    }
    else{
    for(i=0;i<tamanio-1;i++){
    if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57))){
      validaciones++;
    }
    }
    }
    if(validaciones==tamanio-1){
      cadvalida=true;
    }
    for(i=0;i<tamanio;i++){
      cadfinal=cadfinal+cadena[i];
    }
    return cadvalida;
}
