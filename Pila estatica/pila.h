#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#define MAX 10
using namespace std;

class Pila{
private:
    int Data[MAX];
	int Tope;

public:
    Pila();
    void Push();
    void Pop();
	bool Vacio();
	bool lleno();
    void VerTope();
	void mostrar();
	void Gotoxy(int, int);

};

Pila::Pila(){
	Tope = -1;
}

void Pila::Push(){
    bool esEntero(string);
    int numero;
    string linea;
    bool repite = true;
	if(!lleno()){
		cout<<"Ingresa un numero: ";
		getline(cin, linea);
		fflush(stdin);
        if(esEntero(linea)){
            fflush(stdin);
            repite = false;
            numero = atoi(linea.c_str());
            Tope ++;
            Data[Tope]=numero;
        }
        else
        {
            system("color 0C");
            cout<<endl<<endl<<"Eso no es un numero entero..."<<endl<<endl;
            system("pause");
        }
	}
	else{
		cout<<"La pila esta llena..."<<endl;
		system("pause");
	}
}

void Pila::Pop(){
	if(!Vacio()){
		Data[Tope] = 0;
		Tope--;
	}
	else{
		cout<<"LA PILA ESTA VACIA..."<<endl;
		system("pause");
	}
}

bool Pila::Vacio(){
	return Tope == -1;
}

bool  Pila::lleno(){
	return Tope == MAX-1;
}

void Pila::VerTope(){
	if(!Vacio()){
		system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
		printf("Tope--->");
		printf("%c ",186);
		cout<<Data[Tope];
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
	int i;
	if(!Vacio()){
	   	printf("\n\n\t%c%c%c%c%c  \n",201,205,205,205,187);
	    for(i=Tope;i>=0;i--){
            if(i==Tope){
                printf("Tope--->");
                printf("%c ",186);
		        cout<<Data[i];
                printf(" %c\n",186);
            }
            else{
                printf("\t%c ",186);
                cout<<Data[i];
                printf(" %c\n",186);
            }
            if(i==0){
                printf("\t%c%c%c%c%c\n",200,205,205,205,188);
            }
            else{
		        printf("\t%c%c%c%c%c\n",204,205,205,205,185);
            }
		}
	}
	else{
		cout<<"PILA VACIA..."<<endl;
	}
}

void Pila::Gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y = y;
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
