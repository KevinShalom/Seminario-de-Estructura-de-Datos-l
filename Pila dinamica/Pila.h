#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include <stdlib.h>
#include <windows.h>
#include "Nodo.h"

using namespace std;

class Pila{
private:
    int Contador;
    Nodo* Tope;

public:
    Pila();
    void Push();
    void Pop();
	bool Vacio();
    void VerTope();
	void mostrar();
	void Gotoxy(int, int);

};

Pila::Pila(){
    Contador = 0;
    Tope = NULL;
}

void Pila::Push(){
    bool esEntero(string);
    int numero;
    string linea;
    bool repite = true;
	cout<<"Ingrese un numero: ";
    getline(cin, linea);
    fflush(stdin);
    if(esEntero(linea)){
            fflush(stdin);
            repite = false;
            Nodo* NuevoNodo = new Nodo(stoi(linea));
            NuevoNodo->Sig = Tope;
            Tope = NuevoNodo;
            Contador++;
    }
    else
        {
            system("color 0C");
            cout<<endl<<endl<<"Eso no es un numero entero..."<<endl<<endl;
            system("pause");
        }
}


void Pila::Pop(){
	if(!Vacio()){
		Nodo* Nodo = Tope;
        Tope = Tope->Sig;
        delete Nodo;
		Contador--;
	}
	else{
		cout<<"LA PILA ESTA VACIA..."<<endl;
		system("pause");
	}
}

bool Pila::Vacio()
{
    return Contador <= 0;
}

void Pila::VerTope(){
	if(!Vacio()){
		system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
		printf("Tope--->");
		printf("%c ",186);
		cout<<Tope->Valor;
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
		system("pause");
	}
	else{
		cout<<"LA PILA ESTA VACIA..."<<endl;
		system("pause");
	}
}

void Pila::mostrar(){
	if(!Vacio()){
        Nodo* Aux = Tope;
	   	printf("\n\n\t%c%c%c%c%c  \n",201,205,205,205,187);
	    while(Aux!=NULL){
            if(Aux==Tope){
                printf("Tope--->");
                printf("%c ",186);
		        cout<<Aux->Valor;
                printf(" %c\n",186);
            }
            else{
                printf("\t%c ",186);
                cout<<Aux->Valor;
                printf(" %c\n",186);
            }
            if(Aux->Sig==NULL){
                printf("\t%c%c%c%c%c\n",200,205,205,205,188);
            }
            else{
		        printf("\t%c%c%c%c%c\n",204,205,205,205,185);
            }
            Aux = Aux->Sig;
		}
	}
	else{
		cout<<"LA PILA ESTA VACIA..."<<endl;
	}
}

void Pila::Gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
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


#endif // PILA_H_INCLUDED
