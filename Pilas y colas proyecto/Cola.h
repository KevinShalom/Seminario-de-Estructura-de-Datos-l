#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "Pasajero.h"
void ciudad(int);
void fin();

class Cola{
private:
    int contador;
    Pasajero* frente;
    Pasajero* atras;

public:
    Cola();
    void Push();
    void Transfer(Pasajero*);
    Pasajero* Pop();
    int getCount();
    void Recepcion();
    void Asientos();
    void Equipaje();
    void Taxi();
};

Cola::Cola(){
    contador = 0;
    frente = NULL;
    atras = NULL;
}

void Cola::Push(){
    string nombre;
    cout<<endl<<endl;
    cout<< "-------COMPRA DE BOLETOS PARA LOS PASAJEROS--------"<<endl<<endl<<endl;
	cout<<"Registrar pasajero: ";
   	cin>>nombre;

    Pasajero* nuevo = new Pasajero(nombre,contador);
    if(contador== 0){
        nuevo->siguiente=NULL;
        frente = nuevo;
        atras = frente;
    }
    else{
        atras->siguiente=nuevo;
        atras = nuevo;
    }
    contador++;
}

void Cola::Transfer(Pasajero* Baja){
    if(contador== 0){
        Baja->siguiente=NULL;
        frente = Baja;
        atras = frente;
    }
    else{
        atras->siguiente=Baja;
        atras = Baja;
    }
    contador++;
}

Pasajero* Cola::Pop(){
    Pasajero* sacar= frente;
    frente = frente->siguiente;
    contador--;
    return sacar;
}

int Cola::getCount(){
    return contador;
}

void Cola::Recepcion(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    gotoxy(155,8);cout<<"<<<|  OFICINAS |>>>"<<endl;
    gotoxy(155,9);cout<<"||||     O     ||||"<<endl;
    gotoxy(155,10);cout<<"||||    /|\\    ||||"<<endl;
    gotoxy(155,11);cout<<"||||-----------||||"<<endl;
    gotoxy(155,12);cout<<"||||||  / \\  ||||||"<<endl;
    for(int i=0;i<contador;i++){
	    int ban=0;
	    for(int j=0;j<tope;j++){
            gotoxy(j,9);cout<< "  " << inicio->id;
	        gotoxy(j,10);cout<< "  O";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(30);
	    }
        gotoxy(tope,12);cout<< "/ \\";
        inicio->mostrarDatos();
        inicio = inicio->siguiente;
        tope-=5;
    }
    Sleep(1000);
    tope=150;
    for(int i=0;i<contador;i++){
        gotoxy(tope,9);cout<< "   ";
	    gotoxy(tope,10);cout<< "   ";
	    gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        Sleep(1000);
        tope-=5;
    }
}

void Cola::Asientos(){
    Pasajero* inicio=frente;
    int x= 78;
    int y= 8;
    system("cls");
    gotoxy(70,5);cout<<"-----------------------ASIENTOS-------------------------"<<endl;
    gotoxy(70,6);cout<<" Fila  Asiento 1  Asiento 2  Asiento 3  Asiento 4 "<<endl;
    gotoxy(70,8);cout<<" A                                                "<<endl;
    gotoxy(70,9);cout<<" B                                                "<<endl;
    gotoxy(70,10);cout<<" C                                                "<<endl;
    gotoxy(70,11);cout<<" D                                                "<<endl;
    gotoxy(70,12);cout<<" E                                               "<<endl;
    gotoxy(70,13);cout<<" F                                               "<<endl;
    for(int i=0;i<contador;i++){
        gotoxy(x,y); cout<<inicio->nombre;
        x+=12;
        if (inicio->id%4==0){
            y+=1;
            x=78;
        }
        inicio=inicio->siguiente;
    }
    gotoxy(70,15);system("pause");
}

void Cola::Equipaje(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    gotoxy(155,8);cout<<"<<<|  EQUIPAJE |>>>"<<endl;
    gotoxy(155,9);cout<<"||||     O     ||||"<<endl;
    gotoxy(155,10);cout<<"||||    /|\\    ||||"<<endl;
    gotoxy(155,11);cout<<"||||-----------||||"<<endl;
    gotoxy(155,12);cout<<"||||||  / \\  ||||||"<<endl;
    for(int i=contador-1;i>=0;i--){
        inicio->setMaletas();
	    int ban=0;
	    for(int j=0;j<tope;j++){
	        gotoxy(j,10);cout<< "  o";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(30);
	    }
        gotoxy(tope,12); cout<< "/ \\";
        inicio->mostrarDatos();
        gotoxy((inicio->id-1)*20,5);cout<<"Maletas: " << inicio->maletas <<endl;
        gotoxy((inicio->id-1)*20,6);cout<<"----------"<<endl;
        inicio = inicio->siguiente;
        tope-=5;
    }
    Sleep(1000);
    tope=150;
    for(int i=0;i<contador;i++){
	    gotoxy(tope,10);cout<< "   ";
	    gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        gotoxy(i*20,5);cout<<"              "<<endl;
        gotoxy(i*20,6);cout<<"             "<<endl;
        Sleep(1000);
        tope-=5;
    }
}

void Cola::Taxi(){
    Pasajero* inicio=frente;
	system("cls");
    ciudad(0);
    ciudad(67);
    ciudad(134);
    int tope=180;
    for(int i=0;i<contador;i++){
	    int ban=0;
	    for(int j=0;j<tope;j++){
            gotoxy(j,9);cout<< "  " << inicio->id;
	        gotoxy(j,10);cout<< "  o";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(30);
            ciudad(0);
            ciudad(67);
            ciudad(134);
	    }
        gotoxy(tope,9);cout<< "  " << inicio->id;
        gotoxy(tope,10);cout<< "  o";
        gotoxy(tope,11); cout<< " /|\\";
        gotoxy(tope,12);cout<< " / \\";
        inicio->mostrarDatos();
        inicio = inicio->siguiente;
        Sleep(500);
        for (int x=0;x<160;x++){
            gotoxy(x,14);cout<<"                    [\\"<<endl;
            gotoxy(x,15);cout<<"               .----' `-----."<<endl;
            gotoxy(x,16);cout<<"              //^^^^;;^^^^^^`\\"<<endl;
            gotoxy(x,17);cout<<"      _______//_____||_____()_\\________"<<endl;
            gotoxy(x,18);cout<<"     /826    :      : ___              `\\"<<endl;
            gotoxy(x,19);cout<<"    |>   ____;      ;  |/\\><|   ____   _<)"<<endl;
            gotoxy(x,20);cout<<"   {____/    \\_________________/    \\____}"<<endl;
            gotoxy(x,21);cout<<"        \\ '' /                 \\ '' /"<<endl;
            gotoxy(x,22);cout<<"         '--'                   '--'"<<endl;
            Sleep(10);
        }
        gotoxy(tope,9);cout<< "   ";
        gotoxy(tope,10);cout<< "   ";
        gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        Sleep(100);
        for (int x=160;x<180;x++){
            gotoxy(x,14);cout<<"                    [\\"<<endl;
            gotoxy(x,15);cout<<"               .----'--`-----."<<endl;
            gotoxy(x,16);cout<<"              //             \\"<<endl;
            gotoxy(x,17);cout<<"      _______//__()__||_____()_\\________"<<endl;
            gotoxy(x,18);cout<<"     /       :      : ___              `\\"<<endl;
            gotoxy(x,19);cout<<"    |>   ____;      ;  |/\\><|   ____   _<)"<<endl;
            gotoxy(x,20);cout<<"   {____/    \\_________________/    \\____}"<<endl;
            gotoxy(x,21);cout<<"        \\ '' /                 \\ '' /"<<endl;
            gotoxy(x,22);cout<<"         '--'                   '--'"<<endl;
            Sleep(10);
        }
        system("cls");
    }
}

void ciudad(int c){
    gotoxy(c,23);cout<<"___________________________________________________________________"<<endl;
    gotoxy(c,12);cout<<endl<<"#######################################################################################################################################################################################################"<<endl;
}

void fin(){
    gotoxy(80,16);cout<<"FIN DEL PROGRAMA--SALIENDO"<<endl<<endl;
    system("pause");
}

#endif // COLA_H_INCLUDED
