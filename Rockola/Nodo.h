#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void gotoxy(int,int);

struct Cancion{
    int id;
    string titulo;
    string artista;
    string genero;
    //string duracion;
    string ruta;
};

class Nodo{
public:
    int id;
    Cancion cancion;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo(Cancion,int);
    ~Nodo();
    void Modificar();
    void Mostrar(int,int);
};

Nodo::Nodo(Cancion c,int id_){
    cancion = c;
    siguiente = NULL;
    anterior = NULL;
    id = id_;
}

Nodo::~Nodo(){
    cout<<"Nodo eliminado"<<endl;
}

void Nodo::Mostrar(int x,int y){
    gotoxy(70,y);cout<<"------------------------" <<endl;
    gotoxy(70,y+1);cout <<"Titulo: " <<cancion.titulo<< endl;
    gotoxy(70,y+2);cout<<"Artista: " <<cancion.artista << endl;
    gotoxy(70,y+3);cout<<"Genero: " <<cancion.genero << endl;
    gotoxy(70,y+4);cout<<"------------------------" <<endl;
}

void Nodo::Modificar(){
    system("cls");
    cout<<"------MENU DE EDITAR--------"<<endl<<endl<<endl;
    cout<<"Ingrese titulo: ";
    cin.ignore();getline(cin,cancion.titulo);
    system("cls");
    cout<<"------MENU DE EDITAR--------"<<endl<<endl<<endl;
    cout<<"Ingrese artista: ";
    cin.ignore();getline(cin,cancion.artista);
    system("cls");
    cout<<"------MENU DE EDITAR--------"<<endl<<endl<<endl;
    cout<<"Ingrese genero: ";
    cin.ignore();getline(cin,cancion.genero);

}

void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}

#endif // NODO_H_INCLUDED

