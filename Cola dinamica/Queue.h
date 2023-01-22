#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "Nodo.h"
#include<cstdlib>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
class Cola{
private:
    int contador;
    Nodo* comienzo;
    Nodo* fin;

public:
    Cola();
    void Push();
    void Pop();
    bool Vacio();
    void Inicio();
    void Fin();
    void MostrarCola();
};

Cola::Cola(){
    contador = 0;
    comienzo = NULL;
    fin = NULL;
}
void Cola::Push(){
    bool esEntero(string);
    string linea;
    int numero;
    bool repite = true;
	cout<<"Ingresa un numero: ";
   	getline(cin, linea);
    fflush(stdin);
    if(esEntero(linea)){
        fflush(stdin);
        repite = false;
        numero = atoi(linea.c_str());
            Nodo* nuevo = new Nodo(numero);
            if(contador== 0){
                nuevo->siguiente=NULL;
                comienzo = nuevo;
                fin = comienzo;
            }
            else{
                fin->siguiente=nuevo;
                fin = nuevo;
            }
            contador++;
    }
    else{
        system("color 0C");
            cout<<endl<<endl<<"Eso no es un numero entero..."<<endl<<endl;
            system("pause");
        }
    }
void Cola::Pop(){
    if(Vacio()){
        cout<<"SIN DATOS..."<<endl;
        system("pause");
    }
    else{
        Nodo* eliminar= comienzo;
        comienzo = comienzo->siguiente;
        delete eliminar;
        contador--;
    }
}
bool Cola::Vacio(){
    return contador <= 0;
}

void Cola::Inicio(){
	if(!Vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
        cout<<"Inicio->";
		printf("%c ",186);
		cout<<comienzo->valor;
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Esta vacia..."<<endl;
    }
    system("pause");
}

void Cola::Fin(){
	if(!Vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
        cout<<"Final-->";
		printf("%c ",186);
		cout<<fin->valor;
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Esta vacia..."<<endl;
    }
    system("pause");
}

void Cola::MostrarCola(){
    Nodo* inicio= comienzo;
	if(!Vacio()){
	    system("cls");
        for(int i=contador-1;i>=0;i--){
            if(i==contador-1)
                printf("\t");
            printf("%c%c%c%c%c",201,205,205,205,187);
            if(i==0)
                printf("\n");
        }
        cout<<"Fin---->";
		for(int i=contador-1;i>=0;i--){
		    if(inicio->valor!=-1){
                    printf("%c ",186);
                    cout<<inicio->valor;
                    printf(" %c",186);
            }
        }
        cout<<"<----Inicio" << endl;
        for (int i = contador-1; i>=0; i--){
            if(i==contador-1)
                printf("\t");
            printf("%c%c%c%c%c",200,205,205,205,188);
            if(i==0)
                printf("\n");
        }

    }
    else{
        cout<<"VACIA..."<<endl;
    }
}
bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();

	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}

		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}


	return esEntero;
}


#endif // QUEUE_H_INCLUDED
