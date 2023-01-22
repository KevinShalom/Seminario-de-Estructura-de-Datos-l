#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Nodo.h"
#include <windows.h>
#include <fstream>
void PlaySong(string);
void EmptyMessage(){
    cout<<"..........."<<endl;
    Sleep(500);
}

class Lista{
public:
    Nodo* head;
    Nodo* tail;
    Nodo* actual;
    int count;

    Lista();
    ~Lista();
    void Agregar(Cancion);
    void Siguiente();
    void Anterior();
    bool EliminarActual(bool cancionAct1);
    void Modificar();
    bool EliminarPrimero(bool cancionAct1);
    bool EliminarUltimo(bool cancionAct1);
    void BuscarCancion(string datoAux);
    void BuscarArtista(string datoAux2);
    void OrdenarPorArtista();
    void OrdenarPorCancion();
    void Invertir();//Sirve para invertir a ascendente y descendente
    void ImprimirLista();
    bool IsEmpty();
    string aux1;//strings de apoyo para ordenamientos alfabeticos
    string aux2;
    string aux3;
};
Lista::Lista(){
    head = NULL;
    tail = NULL;
    count = 0;
}
Lista::~Lista(){}
void Lista::OrdenarPorCancion(){
   Nodo*dato=head;
   while(dato->siguiente!=head){
    Nodo*dato2=dato->siguiente;
    while(dato2!=head){
        if(dato->cancion.titulo>dato2->cancion.titulo){
            int aux = dato2->id;
            dato2->id=dato->id;
            dato->id=aux;
            aux1 = dato2->cancion.titulo;
            dato2->cancion.titulo=dato->cancion.titulo;
            dato->cancion.titulo=aux1;
            aux2 = dato2->cancion.artista;
            dato2->cancion.artista=dato->cancion.artista;
            dato->cancion.artista=aux2;
            aux3 = dato2->cancion.genero;
            dato2->cancion.genero = dato->cancion.genero;
            dato->cancion.genero = aux3;
        }
        dato2=dato2->siguiente;
    }
    dato=dato->siguiente;
   }
}
void Lista::OrdenarPorArtista(){
   Nodo*dato=head;
   while(dato->siguiente!=head){
    Nodo*dato2=dato->siguiente;
    while(dato2!=head){
        if(dato->cancion.artista>dato2->cancion.artista){
            int aux = dato2->id;
            dato2->id=dato->id;
            dato->id=aux;
            aux1 = dato2->cancion.titulo;
            dato2->cancion.titulo=dato->cancion.titulo;
            dato->cancion.titulo=aux1;
            aux2 = dato2->cancion.artista;
            dato2->cancion.artista=dato->cancion.artista;
            dato->cancion.artista=aux2;
            aux3 = dato2->cancion.genero;
            dato2->cancion.genero = dato->cancion.genero;
            dato->cancion.genero = aux3;
        }
        dato2=dato2->siguiente;
    }
    dato=dato->siguiente;
   }
}
void Lista::Invertir(){
        if(head!=nullptr)
    {
        Cancion cancionAux;
        Nodo *temp=head;
        Nodo *aux=nullptr;
        while(temp->siguiente!=head)
        {
            aux=temp;
            if(aux->siguiente!=head){
               while(aux->siguiente!=head)
            {
                cancionAux=aux->cancion;
                aux->cancion=temp->cancion;
                temp->cancion=cancionAux;
                aux=aux->siguiente;
            } while(aux!=head)
            {
                cancionAux=aux->cancion;
                aux->cancion=temp->cancion;
                temp->cancion=cancionAux;
                aux=aux->siguiente;
            }
            }
            temp=temp->siguiente;
        }
    }
}

void Lista::Agregar(Cancion c){
    Nodo* nuevo = new Nodo(c,count);

    if (IsEmpty()){
        head = nuevo;
        tail = nuevo;
        head->siguiente = head;
        head->anterior = tail;
    }
    else{
        tail->siguiente = nuevo;
        nuevo->anterior = tail;
        nuevo->siguiente = head;
        tail = nuevo;
        head->anterior = tail;
    }
    count++;
    if (count==1){
        actual=head;
    }

}

void Lista::Siguiente(){
    if (!IsEmpty()){
        actual = actual->siguiente;
        PlaySong(actual->cancion.ruta);
    }
    else{
        EmptyMessage();
	}
}

void Lista::Anterior(){
    if (!IsEmpty()){
        actual = actual->anterior;
        PlaySong(actual->cancion.ruta);
    }
    else{
    	EmptyMessage();
	}
}

bool Lista::EliminarActual(bool cancionAct1){
    if(!IsEmpty()){
        if(actual==head)
            EliminarPrimero(cancionAct1);
        else if(actual==tail)
            EliminarUltimo(cancionAct1);
        else{
            Nodo* eliminar = actual;
            Nodo* anterior = actual->anterior;
            actual = actual->siguiente;
            anterior->siguiente = eliminar->siguiente;
            eliminar->siguiente->anterior = anterior;
            delete  eliminar;
            count--;
        }
        if(cancionAct1){
            PlaySong(actual->cancion.ruta);
        }
        else{
            cancionAct1 = false;
        }
    }
    else{
    	EmptyMessage();
    }
    return cancionAct1;
}

bool Lista::EliminarPrimero(bool cancionAct1){
    if (!IsEmpty()){

        if (actual==head){
            actual = actual->siguiente;
        }
        Nodo* aux = head;
		head = head->siguiente;
		head->anterior = tail;
		tail->siguiente = head;
        delete aux;
        count--;
        if(cancionAct1){
            PlaySong(actual->cancion.ruta);
        }
        else{
            cancionAct1 = false;
        }
    }

    else{
    	EmptyMessage();
    }
}

bool Lista::EliminarUltimo(bool cancionAct1){
    if (!IsEmpty()){
        if (actual==tail){
            actual = actual->siguiente;
        }
        Nodo* aux = tail;
		tail = tail->anterior;
		tail->siguiente = head;
		head->anterior = tail;
        delete aux;
        count--;
        if(cancionAct1){
            PlaySong(actual->cancion.ruta);
        }
        else{
            cancionAct1 = false;
        }
    }
    else{
        EmptyMessage();
    }
}

void Lista::ImprimirLista(){
	Nodo* nodo = head;
    string titulo;
    int x=20,y=1;
    int cursor=1;
    gotoxy(70,0);cout<<">>LISTA DE REPRODUCCION<<";
	if(!IsEmpty()){
        while (nodo!=actual)
        {
            nodo = nodo->siguiente;
            cursor++;
        }
        nodo = head;
		do{
            nodo->Mostrar(x,y);
			nodo = nodo->siguiente;
            if (nodo==actual){
                gotoxy(96,5*cursor-3+1);cout<<"<----EN REPRODUCCION";
            }
            y+=5;
		}while(nodo!=head);
	}
    else{
    	EmptyMessage();
	}
}

bool Lista::IsEmpty(){
    return count == 0;
}

void Lista::Modificar(){
    actual->Modificar();
}
void Lista::BuscarCancion(string datoAux){
    int auxCont = 0;
    if (!IsEmpty()){
    Nodo *temp = head;
    do {
    auxCont++;
    if(datoAux == temp->cancion.titulo){
    system("cls");
    cout<<"------BUSQUEDA DE CANCION TERMINADA------"<<endl;
        cout<<"La cancion se encuentra en la posicion: "<<auxCont<<endl;
        system("pause");
    }
    else{
        temp = temp->siguiente;
        }
      }while (temp != head);
    }
    cout<<"La cancion no esta registrada"<<endl<<endl;
    system("pause");
}
void Lista::BuscarArtista(string datoAux2){
    int auxCont = 0;
    if (!IsEmpty()){
    Nodo *temp = head;
    do {
    auxCont++;
    if(datoAux2 == temp->cancion.artista){
    system("cls");
    cout<<"------BUSQUEDA DE ARTISTA TERMINADA------"<<endl;
        cout<<"El Artista se encuentra en la posicion: "<<auxCont<<endl;
        system("pause");
    }
    else{
        temp = temp->siguiente;
        }
      }while (temp != head);
    }
    cout<<"El artista no esta registrado"<<endl<<endl;
    system("pause");
}
void PlaySong(string song_s){
	const char* song = song_s.c_str();
	cout<<PlaySound(song,NULL,SND_ASYNC);
}


#endif // LISTA_H_INCLUDED
