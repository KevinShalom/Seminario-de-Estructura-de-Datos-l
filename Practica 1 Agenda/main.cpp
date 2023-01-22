#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct contacto{
    int id;
    char nombre[30];
    char direccion[30];
    char telefono[30];
} cto[5];

int index = 0, posicion = 0, id = 0;

void AltaContacto() {
    cto[index].id = id + 1;
    cout<<"Ingresa el Nombre:"<<endl;
    cin>>cto[index].nombre;
    cout<<"Ingresa la direccion:"<<endl;
    cin>>cto[index].direccion;
    cout<<"Ingrese su numero telefonico:"<<endl;
    cin>>cto[index].telefono;
    index++;
    id++;
}

int BuscarContacto(int id){
    bool ban = false;
    int posicion = 0, x = 0;
    while(x < 5 && ban == false){
        if(cto[x].id == id){
            ban = true;
            posicion = x;
        }
        x++;
    }
    return posicion;
}

int BuscarContacto2(char nombre3[50]){
    bool ban = false;
    int posicion = 0, x = 0;
    while(x < 5 && ban == false){
        if(strcmp(cto[x].nombre,nombre3)==0){
            ban = true;
            posicion = x;
        }
        x++;
    }
    return posicion;
}

void MostrarContacto(int pos){
    cout<<"ID: "<<cto[pos].id<<endl;
    cout<<"Nombre: "<<cto[pos].nombre<<endl;
    cout<<"Direccion: "<<cto[pos].direccion<<endl;
    cout<<"Telefono: "<<cto[pos].telefono<<endl;
}


void EditarContacto(int pos) {
    int opc = 0;
    cout<<"----EDITAR----"<<endl;
    cout<<"1)Nombre del Contacto"<<endl;
    cout<<"2)Direccion del Contacto"<<endl;
    cout<<"3)Numero Telefonico"<<endl;
    cout<<"4)Todo"<<endl;
    cout<<"OPCION: ";
    cin>>opc;

    switch(opc) {
    case 1: {
        system("cls");
        cout<<"Ingrese Nombre"<<endl;
        cin>>cto[pos].nombre;
    }
    break;
    case 2: {
        system("cls");
        cout<<"Ingrese direccion"<<endl;
        cin>>cto[pos].direccion;
    }
    break;
    case 3: {
        system("cls");
        cout<<"Ingrese su telefono"<<endl;
        cin>>cto[pos].telefono;
    }
    break;
    case 4: {
        system("cls");
        cout<<"Ingrese Nombre"<<endl;
        cin>>cto[pos].nombre;
        cout<<"Ingrese direccion"<<endl;
        cin>>cto[pos].direccion;
        cout<<"Ingrese su telefono"<<endl;
        cin>>cto[pos].telefono;
    }
    break;
    }
}

void EliminarContacto(int pos){
    for(int i=0; i<pos; i++) {
            cto[pos]= cto[pos+1];
        }
        index--;
}

void menu() {
    int opc = 0, id = 0, opc2 = 0;
    char nombre2[50];
    cout<<">>>>MENU PRINCIPAL<<<<"<<endl<<endl;
    cout<<"1) Agregar Contacto"<<endl;
    cout<<"2) Buscar Contacto"<<endl;
    cout<<"3) Editar Contacto"<<endl;
    cout<<"4) Borrar Contacto"<<endl;
    cout<<"5) Mostrar Todo"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opc;

    switch(opc){
    case 1:
        system("cls");
        AltaContacto();
        break;
    case 2:{
        system("cls");
        cout<<"1) Buscar por ID"<<endl;
        cout<<"2) Buscar por Nombre"<<endl;
        cout<<"OPCION: ";
        cin>>opc2;
        switch(opc2){
        case 1:{
        system("cls");
        cout<<"Escribe el ID del Contacto: ";
        cin>>id;
        MostrarContacto(BuscarContacto(id));
        break;
        }
        case 2:{
        system("cls");
        cout<<"Escribe el Nombre del Contacto: ";
        cin>>nombre2;
        MostrarContacto(BuscarContacto2(nombre2));
        break;
        }
        }
    }
    break;
    case 3: {
        system("cls");
        cout<<"Escribe el ID del Contacto"<<endl;
        cin>>id;

        EditarContacto(BuscarContacto(id));
    }break;
    case 4: {
        system("cls");
        cout<<"Escribe el ID del Contacto"<<endl;
        cin>>id;
        EliminarContacto(BuscarContacto(id));
    }break;
    case 5:{
        system("cls");
        for(int i=0;i<index;i++){
        cout<<"ID: "<< cto[i].id<<endl;
        cout<<"Nombre: "<<cto[i].nombre<<endl;
        cout<<"Direccion: "<<cto[i].direccion<<endl;
        cout<<"Telefono: "<<cto[i].telefono<<endl;
        }
    }
    }
}

int main() {
    int opc = 0;
    do {
        system("cls");
        menu();
        cout<<"Continuar 1-[si] 2-[no]"<<endl;
        cin>>opc;
    } while(opc != 2);
    system("pause>>cls");
    return 0;
}
