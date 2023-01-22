#include <iostream>
#include "pila.h"
#define TAMCADENA 10000
char CG1[TAMCADENA];
using namespace std;
bool validacion_decimal(char *cadena);
string cadfinal;
int main(){
	Pila p;
	int opc, numero = 0;

	do{
		system("cls");
		system("color 0B");
		p.mostrar();
		cout<<endl<<endl<<"[1]Ingrese un numero"<<endl;
		cout<<"[2]Eliminar el tope"<<endl;
		cout<<"[3]Mostrar el tope"<<endl;
		cout<<"[4]Salir"<<endl;
		cout<<"Selecciona una opcion: ";
		cin>>CG1;
		fflush(stdin);
        if(validacion_decimal(CG1)){
            fflush(stdin);
            opc = atoi(cadfinal.c_str());
		switch(opc){
			case 1:
			    p.Push();
			    break;
			case 2:
				p.Pop();
			    break;
			case 3:
				p.VerTope();
			    break;
			case 4:
				cout<<"EJECUCION TERMINADA..."<<endl;
				break;
			default:
				cout<<endl<<"Opcion no existente..."<<endl;
			    system("pause");
		}
		}else
        {
            system("cls");
            system("color 0C");
            cout<<endl<<endl<<"Datos no validos..."<<endl<<endl;
            system("pause");
        }
	}while(opc!=4);
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
