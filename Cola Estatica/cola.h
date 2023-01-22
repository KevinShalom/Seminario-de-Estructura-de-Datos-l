#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#define MAX 10
using namespace std;
class cola{
private:
	int inicio;
    int fin;
	int dato[MAX];

public:
cola();
void push();
void pop();
bool lleno();
bool vacio();
void Inicio();
void Final();
void Cola();
};

cola::cola(){
    inicio = 0;
	fin = -1;
}
 void cola::push(){
    bool esEntero(string);
    string linea;
    int numero;
    bool repite = true;
	if(!lleno()){
	 	cout<<"Ingrese un numero: ";
   	    getline(cin, linea);
   	    fflush(stdin);
        if(esEntero(linea)){
            fflush(stdin);
            repite = false;
            numero = atoi(linea.c_str());
            fin ++;
            dato[fin]=numero;
        }
        else{
             system("color 0C");
            cout<<endl<<endl<<"Eso no es un numero entero..."<<endl<<endl;
            system("pause");
            }
        }
       else{
        cout<<"La cola esta llena"<<endl;
        system("pause");
      }
}
void cola::pop(){
	if(!vacio()){
		for(int i=0;i<=fin;i++){
			dato[i]=dato[i+1];
		}
		dato[fin]=-1;
		fin--;
	}
    else{
        cout<<"SIN DATOS..."<<endl;
        system("pause");
    }
}

void cola::Inicio(){
	if(!vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
		printf("\t%c ",186);
		cout<<dato[0];
    	printf(" %c",186);
        cout<<"<---Inicio"<<endl;
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Esta vacia..."<<endl;
    }
    system("pause");
}

void cola::Final(){
	if(!vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
        cout<<"Final-->";
		printf("%c ",186);
		cout<<dato[fin];
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"SIN DATOS..."<<endl;
    }
    system("pause");
}
void cola::Cola(){
	if(!vacio()){
	    system("cls");
        for(int i=fin;i>=0;i--){
            if(i==fin)
                printf("\t");
            printf("%c%c%c%c%c",201,205,205,205,187);
            if(i==0)
                printf("\n");
        }
        cout<<"Fin---->";
		for(int i=fin;i>=0;i--){
		    if(dato[i]!=-1){
                    printf("%c ",186);
                    cout<<dato[i];
                    printf(" %c",186);
            }
        }
        cout<<"<----Inicio" << endl;
        for (int i = fin; i>=0; i--){
            if(i==fin)
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

bool cola::lleno(){
    return fin==9;
}
bool cola::vacio(){
    return fin==-1;
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

#endif // COLA_H_INCLUDED
