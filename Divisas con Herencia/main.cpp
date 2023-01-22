#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <math.h>
#include "Dinero.h"
#include "Conversiones.h"
#define TAMCADENA 10000
char CG1[TAMCADENA];
char CG2[TAMCADENA];
using namespace std;
bool validacion_decimal(char *cadena);
string cadfinal;
using namespace std;

int main()
{
    int opc = 0, opc2 = 0;
    double moneda = 0;
    do
    {
        system("cls");
        system("color 0E");
        Conversiones pd;
        Conversiones dp;
        Conversiones pe;
        Conversiones ep;
        Conversiones pye;
        Conversiones yep;
        Conversiones pyu;
        Conversiones yuap;
        cout<<"------------CONVERTIDOR DE DIVISAS------------"<<endl<<endl;
        cout<<"-------Menu-------"<<endl;
        cout<<"1)PESO-DOLAR"<<endl;
        cout<<"2)DOLAR-PESO"<<endl;
        cout<<"3)PESO-EURO"<<endl;
        cout<<"4)EURO-PESO"<<endl;
        cout<<"5)PESO-YEN"<<endl;
        cout<<"6)YEN-PESO"<<endl;
        cout<<"7)PESO-YUAN"<<endl;
        cout<<"8)YUAN-PESO"<<endl;
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
                cout<<">>>>PESO-DOLAR<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    pd.setPeso(moneda);
                    pd.CalculoPesoDolar();
                    cout<<"Su dinero en Dolares es: "<<pd.getPesoDolar()<<endl<<endl;
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
                cout<<">>>>>DOLAR-PESO<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    dp.setDolar(moneda);
                    dp.CalculoDolarPeso();
                    cout<<"Su dinero en Pesos es: "<<dp.getDolarPeso()<<endl<<endl;
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
                cout<<">>>>>PESO-EURO<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    pe.setPeso(moneda);
                    pe.CalculoPesoEuro();
                    cout<<"Su dinero en Euros es: "<<pe.getPesoEuro()<<endl<<endl;
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
                cout<<">>>>>EURO-PESO<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    ep.setEuro(moneda);
                    ep.CalculoEuroPeso();
                    cout<<"Su dinero en Pesos es: "<<ep.getEuroPeso()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            case 5:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>PESO-YEN<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    pye.setPeso(moneda);
                    pye.CalculoPesoYen();
                    cout<<"Su dinero en Yenes es: "<<pye.getPesoYen()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }
            }
            fflush(stdin);
            break;
            case 6:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>YEN-PESO<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    yep.setYen(moneda);
                    yep.CalculoYenPeso();
                    cout<<"Su dinero en Pesos es: "<<yep.getYenPeso()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }

            }
            fflush(stdin);
            break;
            case 7:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>PESO-YUAN<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    pyu.setPeso(moneda);
                    pyu.CalculoPesoYuan();
                    cout<<"Su dinero en Yuanes es: "<<pyu.getPesoYuan()<<endl<<endl;
                }
                else
                {
                    cout<<"Datos no validos..."<<endl;
                }

            }
            fflush(stdin);
            break;
            case 8:
            {
                fflush(stdin);
                system("cls");
                system("color 0B");
                cout<<">>>>>YUAN-PESO<<<<<"<<endl<<endl;
                cout<<"Ingrese su dinero: ";
                cin>>CG1;
                if(validacion_decimal(CG1))
                {
                    moneda = atoi(cadfinal.c_str());
                    yuap.setYuan(moneda);
                    yuap.CalculoYuanPeso();
                    cout<<"Su dinero en Yuanes es: "<<yuap.getYuanPeso()<<endl<<endl;
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
                    cout<<endl<<endl<<"Esa opcion no existe..."<<endl;
                    break;
                }
            }
        }
        else
        {
            system("cls");
            system("color 0C");
            cout<<endl<<endl<<"Datos no validos..."<<endl<<endl;
        }
        do
        {
            cout<<"Continuar 1[SI] 2[NO]: ";
            cin>>CG1;
            fflush(stdin);
            if(validacion_decimal(CG1))
            {
                opc2 = atoi(cadfinal.c_str());
            }
            else
            {
                cout<<endl<<endl<<"Datos no validos..."<<endl;
            }
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
