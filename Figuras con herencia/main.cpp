#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <math.h>
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Poligono.h"
#define TAMCADENA 10000
using namespace std;
char CG1[TAMCADENA];
char CG2[TAMCADENA];
char CG3[TAMCADENA];
char CG4[TAMCADENA];
bool validacion_decimal(char *cadena);
string cadfinal;

int main()
{
    double base = 0, altura = 0, lado = 0, lado2=0, lados = 0;
    int opc = 0, opc2 = 0;
    do
    {
        system("cls");
        system("color 0E");
        triangulo t;
        rectangulo r;
        cuadrado c;
        poligono p;
        cout<<"------------FIGURAS GEOMETRICAS CON HERENCIA------------"<<endl<<endl;
        cout<<"-------Menu-------"<<endl;
        cout<<"1)Triangulo"<<endl;
        cout<<"2)Rectangulo"<<endl;
        cout<<"3)Cuadrado"<<endl;
        cout<<"4)Poligono"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>CG1;
        fflush(stdin);
        if(validacion_decimal(CG1)){
        fflush(stdin);
        opc = atoi(cadfinal.c_str());
        switch(opc)
        {
        case 1:
        fflush(stdin);
        {

            system("cls");
            system("color 0B");
            cout<<endl<<"--------TRIANGULO (EQUILATERO)--------"<<endl<<endl;
            cout<<">>>>>AREA<<<<<"<<endl;
            cout<<"Ingrese la base: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            base = atoi(cadfinal.c_str());
            cout<<"Ingrese la altura: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            altura = atoi(cadfinal.c_str());
            t.setBase(base);
            t.setAltura(altura);
            t.CalcularAreaT();
            cout<<">>>>>PERIMETRO<<<<<"<<endl;
            cout<<"Ingresa un lado: ";
            cin>>CG3;
            if(validacion_decimal(CG3)){
            lado = atoi(cadfinal.c_str());
            t.setLado(lado);
            t.CalcularPerimetroT();
            cout<<"Area es: "<<t.getAreaT()<<endl;
            cout<<"Perimetro es: "<<t.getPerimetroT();
            cout<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        case 2:
        fflush(stdin);
        {
            system("cls");
            system("color 0B");
            cout<<endl<<"--------RECTANGULO--------"<<endl<<endl;
            cout<<">>>>>AREA<<<<<"<<endl;
            cout<<"Ingrese la base: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            base = atoi(cadfinal.c_str());
            cout<<"Ingrese la altura: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            altura = atoi(cadfinal.c_str());
            r.setBase(base);
            r.setAltura(altura);
            r.CalcularAreaR();
            t.setLado(lado);
            r.setLado2(lado2);
            r.CalcularPerimetroR();
            cout<<"Perimetro es: "<<r.getPerimetroR()<<endl;
            cout<<"Area es: "<<r.getAreaR()<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
        fflush(stdin);
        break;
        case 3:
        fflush(stdin);
            {
            system("cls");
            system("color 0B");
            cout<<endl<<"--------CUADRADO--------"<<endl<<endl;
            cout<<">>>>>AREA<<<<<"<<endl;
            cout<<"Ingrese el lado: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            lado = atoi(cadfinal.c_str());
            c.setLado(lado);
            c.CalcularAreaC();
            cout<<">>>>>PERIMETRO<<<<<"<<endl;
            cout<<"Ingresa un lado: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            lado = atoi(cadfinal.c_str());
            c.setLado(lado);
            c.CalcularPerimetroC();
            cout<<"Perimetro es: "<<c.getPerimetroC()<<endl;
            cout<<"Area es: "<<c.getAreaC()<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        case 4:
        fflush(stdin);
            {
            system("cls");
            system("color 0B");
            cout<<endl<<"--------POLIGONO--------"<<endl<<endl;
            cout<<">>>>>PERIMETRO<<<<<"<<endl;
            cout<<"Ingresa la base: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            base = atoi(cadfinal.c_str());
            cout<<"Ingresa la cantidad de lados(Vertices): ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            lados = atoi(cadfinal.c_str());
            p.setBase(base);
            p.setLados(lados);
            p.CalcularPerimetroP();
            cout<<">>>>>AREA<<<<<"<<endl;
            p.CalcularApotema();
            p.CalcularAreaP();
            cout<<"Perimetro es: "<<p.getPerimetroP()<<endl;
            cout<<"Area es: "<<p.getAreaP()<<endl;
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
            }
            else{
            cout<<"Datos no validos..."<<endl;
            }
        }
        fflush(stdin);
        break;
        default:
        system("cls");
        system("color 0C");
        cout<<"Esa opcion no existe"<<endl;
        break;
        }
        }
        else{
            system("cls");
            system("color 0C");
            cout<<"Datos no validos"<<endl;
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
