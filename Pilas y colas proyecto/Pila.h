#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "Cola.h"

class Pila{
private:
    int Contador;
    Pasajero* Top;

public:
    Pila();
    void Push(Pasajero*);
    Pasajero* Pop();
	bool Vacia();
	void Abordar();
    int getCount();
};

Pila::Pila(){
    Contador = 0;
    Top = NULL;
}

void Pila::Push(Pasajero* Nuevo){
    system("cls");
    Nuevo->siguiente = Top;
    Top = Nuevo;
    Contador++;
    gotoxy(70,5);cout<<"-----ABORDAJE-----"<<endl;
    gotoxy(70,8);cout<<"Aborda " << Nuevo->nombre<<"..."<<endl;
    Sleep(1000);
}

Pasajero* Pila::Pop(){
    system("cls");
	Pasajero* Sacar = Top;
    Top = Top->siguiente;
    Contador--;
    gotoxy(70,5);cout<<"-----ATERRIZAJE-----"<<endl;
    gotoxy(70,8);cout<<"Baja " << Sacar->nombre<<"..."<<endl;
	int ban=0;
	for(int j=70;j<95;j++){
	    gotoxy(j,10);cout<< "  o";
		gotoxy(j,11); cout<< " /|\\";
		if(ban==0){
			gotoxy(j,12); cout<< " /\ ";
			ban=1;
		}
        else{
			gotoxy(j,12); cout<< "   \\";
			ban=0;
		}
	    Sleep(30);
	}
    return Sacar;
}

bool Pila::Vacia(){
    return Contador <= 0;
}

int Pila::getCount(){
    return Contador;
}

#endif // PILA_H_INCLUDED
