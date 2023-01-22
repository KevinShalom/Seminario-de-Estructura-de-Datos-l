#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include<windows.h>

using namespace std;

class Archivos
{
public:
    char palabra[100], id[100], adress[15];
    void Crear();
    void Mostrar();
    void Buscar();
    void Eliminar();
    void Modificar();
}archivos;



void Archivos::Crear()
{
    cout<<"Ingresa unas palabras: ";
    fflush(stdin);
    cin.getline(palabra,10,'\n');
    cout<<"ID: ";
    cin.getline( id,35,'\n');
    cout<<"Fecha de registro: ";
    fflush(stdin);
    cin.getline(adress,15,'\n');
    ofstream Archivo("Archivos.txt",ios::app);
    Archivo<<palabra<<'|'<< id<<'|'<<adress<<'|'; '|';
    Archivo.close();
}


void Archivos::Mostrar()
{
    int i;
    ifstream Lectura("Archivos.txt");
    if(!Lectura.good())
    {
        cout<<"No existe el archivo\n";
        system("pause");
    }
    else
    {
        while(!Lectura.eof())
        {

            i=0;
            do
            {
                Lectura.read((char *)&palabra[i],1);
                if(Lectura.eof())
                    break;
                i++;
            }while(palabra[i-1]!='|');
            palabra[i-1]='\0';
            i=0;
            do
            {
                Lectura.read((char *)& id[i],1);
                if(Lectura.eof())
                    break;
                i++;
            }while( id[i-1]!='|');
             id[i-1]='\0';
            i=0;
            do
            {
                Lectura.read((char *)&adress[i],1);
                if(Lectura.eof())
                    break;
                i++;
            }while(adress[i-1]!='|');
            adress[i-1]='\0';


            if(Lectura.eof())
                break;


            cout<<"\n\npPalabras:"<<palabra<<"\n";
            cout<<"ID:"<< id<<"\n";
            cout<<"fecha de registro:"<<adress<<"\n";
            if(Lectura.eof())
                break;
        }
        system("pause");
    }
    Lectura.close();
}

void Archivos::Buscar(){
    int b;  b = 0;
    int i;
    int iguales;
    char caracter;
    char name[10];


    ifstream arc("Archivos.txt");
    if(!arc.good())
    {
        cout<<"\n NO EXISTE ARCHIVO...\n";
    }

    else{
        cout<<"\n Escribe la palabra para buscar: ";
        fflush(stdin);
        cin.getline(name,10,'\n');


        while(!arc.eof()){
            i = 0;
            do{
                arc.read((char*)&caracter,1);
                if(caracter!='|')
                {
                     id[i] = caracter;
                    i++;
                }

            }while(caracter != '|');

             id[i]= '\0';

            i = 0;
            do
            {
                arc.read((char*)&caracter,1);
                if(caracter!='|')
                {
                    id[i] = caracter;
                    i++;
                }

            }while(caracter != '|');
             id[i]= '\0';


            i = 0;
            do
            {
                arc.read((char*)&caracter,1);
                if(caracter!='|' && !arc.eof())
                {
                    adress[i] = caracter;
                    i++;
                }

            }while(caracter != '|' && !arc.eof());
            adress[i]= '\0';


            if(arc.eof())
            {
                break;
            }

            iguales = strcmp( id,name);

            if(iguales == 0){
                cout<<"Palabra: "<<palabra<<endl;
                cout<<"ID: "<< id<<endl;
                cout<<"Fecha de registro: " <<adress<<endl;
                b = 1;
				system("pause");
                break;
            }
        }

        if( b == 0){
            cout<<"\nARCHIVO NO ENCONTRADO...";
        }
        arc.close();
    }
}


void Archivos::Modificar()
{
    int i;
    int opcion;
    char prodMod[10];
    bool b;

    ifstream Lectura("Archivos.txt");
    ofstream LecturaTemporal("temporalauto.txt",ios::app);

    if(!Lectura.good())
        cout<<"\n EL ARCHIVO NO EXISTE \n ";
    else
    {
        cout<<"\n Introduce la palabra a modificar:  ";
        cin.getline(prodMod,10);
        cin.getline(prodMod,10);

        b = false;

        while(!Lectura.eof()){

            i=0;
            do{
                Lectura.read((char*)&palabra[i],1);
                if(Lectura.eof()) break;
                i++;
            }while(palabra[i-1]!='|');
            palabra[i-1]='\0';
            if(Lectura.eof()) break;


            i=0;
            do{
                Lectura.read((char*)& id[i],1);
                if(Lectura.eof()) break;
                i++;
            }while( id[i-1]!='|' && !Lectura.eof());
             id[i-1]='\0';
            if(Lectura.eof()) break;



            i=0;
            do{
                Lectura.read((char*)&adress[i],1);
                if(Lectura.eof()) break;
                i++;
            }while(adress[i-1]!='|');
            adress[i-1]='\0';
            if(Lectura.eof()) break;

            if(strcmp(palabra,prodMod)==0 && !b)
            {
                cout<<"\nPalabra: "<<palabra<<endl;
                cout<<"ID: "<< id<<endl;
                cout<<"Fecha de registro: "<<adress<<endl;
				cout <<"1.Modificar Palabra: "<<endl;
                cout <<"2.Modificar ID: "<<endl;
                cout <<"3.Modificar Fecha de registro: "<<endl;
                cout <<"4.Regresar: "<<endl;
				cout<<"Ingresa una opcion: ";
                cin>>opcion;


                switch(opcion)
                {
                    case 1:
                        cout<<"Palabra del Archivo: ";
                        fflush(stdin);
                        cin.getline(palabra,10,'\n');
                        break;
                    case 2:
                        cout<<"ID: ";
                        fflush(stdin);
                        cin.getline( id,35,'\n');
                        break;
                    case 3:
                        cout<<"Fecha de registro: ";
                        fflush(stdin);
                        cin.getline(adress,15,'\n');
                        break;
                    default: cout<<"Opcion no valida"<<endl;
                }

                if(opcion!=6 && opcion>0 && opcion<7)
                    b = true;
            }
            LecturaTemporal<<palabra<<'|'<< id<<'|'<<adress<<'|';
        }
        Lectura.close();
        LecturaTemporal.close();
        if(!b)
            cout<<"\n No se encontro arhcivo ";

        remove("Archivos.txt");
        rename("temporalauto.txt","Archivos.txt");
    }
}


int main(){
    int opc;
		system("mode con: cols=80 lines=25");

    do{
    system("cls");
		cout<<"------MENU------"<<endl;
		cout<<"1.Crear"<<endl;
		cout<<"2.Mostrar"<<endl;
		cout<<"3.Buscar"<<endl;
		cout<<"4.Modificar"<<endl;
		cout<<"5.Salir"<<endl;
		cout<<"opcion: ";
        cin>>opc;
        switch(opc){
            case 1: archivos.Crear();
                break;

            case 2: archivos.Mostrar();
                break;

            case 3: archivos.Buscar();
                break;

            case 4: archivos.Modificar();
                break;
        }

    }while(opc!=5);
}
