#include "Lista.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <MMSystem.h>

void PlaySong2(string);
bool i_input(string);
bool cancionAct = false;
int main(){
    //string silencio = "C:/Users/Familia/Desktop/Universidad Tareas/Segundo semestre/SSPP 22B/Reproductor/silencio.wav";
    char sonido[]="C:/Users/Familia/Desktop/Universidad Tareas/Segundo semestre/SSPP 22B/Reproductor/silencio.wav";
	Cancion playlist[30];
    ifstream myFile;
    string busquedaCancion;
    string busquedaArtista;
    myFile.open("_songs.csv");
    int flag=1;
    int index=0;
    int id=1;
    int auxBus;
    while (myFile.good())
    {
        string line;
        getline(myFile, line,',');
        switch (flag)
        {
            case 1:
                playlist[index].id = id;
                playlist[index].titulo = line;
                flag++;
                break;
            case 2:
                playlist[index].artista = line;
                flag++;
                break;
            case 3:
                playlist[index].genero = line;
                flag=1;
                index++;
                id++;
                break;
            }
    }
	ifstream myFileR;
    myFileR.open("_roots.csv");
    index=0;
    while (myFileR.good())
    {
        string line;
        getline(myFileR, line,',');

        playlist[index].ruta = line;
        index++;
    }
    Lista* lista = new Lista();
	string opcion_menu;
	system("color 0A");
cout<<"  &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl
<<"  (%%%,...................................................................................................................................*%%%,"<<endl
<<"  %@@@.                                                                                                                                   *@@@*"<<endl
<<"@@,       @@@@           ,@@@(   #@@@@@@@@@@@    @@@@               *@@@@@@@.       @@@@@@@@       ,@@@(           &@@@    @@@@@@@@@@@%       /@@@"<<endl
<<"@@,       @@@@           ,@@@(   #@@@(///////    @@@@           .///////////    ////////////////   ,@@@%///,   *///@@@@    @@@@///////*       /@@@"<<endl
<<"@@,       @@@@           ,@@@(   #@@@.           @@@@           .@@@(           @@@@        @@@&   ,@@@@@@@/   %@@@@@@@    @@@@               /@@@"<<endl
<<"@@,       @@@@    @@@&   ,@@@(   #@@@@@@@@@@@    @@@@           .@@@(           @@@@        @@@&   ,@@@(   #@@@,   &@@@    @@@@@@@@@@@%       /@@@"<<endl
<<"@@,       @@@@....&&&&...,@@@(   #@@@@&&&&&&@    @@@@           .@@@(           @@@@        @@@&   ,@@@(   (&&&,   &@@@    @@@@&&&&&&&#       /@@@"<<endl
<<"@@,       @@@@@@@@   .@@@@@@@(   #@@@.           @@@@           .@@@(           @@@@        @@@&   ,@@@(           &@@@    @@@@               /@@@"<<endl
<<"@@,       @@@@           ,@@@(   #@@@@@@@@@@@    @@@@@@@@@@@@       *@@@@@@@.       @@@@@@@@       ,@@@(           &@@@    @@@@@@@@@@@%       /@@@"<<endl
<<"@@,       @@@@           ,@@@(   #@@@@@@@@@@@    @@@@@@@@@@@@       *@@@@@@@.       @@@@@@@@       ,@@@(           &@@@    @@@@@@@@@@@%       /@@@"<<endl
<<"  %@@@.                                                                                                                                   *@@@*"<<endl
<<"      &@@@               ,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl
<<"      &@@@               ,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@("<<endl
<<"          @@@@       .@@@%"<<endl
<<"          @@@@    @@@&"<<endl
<<"          @@@@    @@@&"<<endl
<<"          @@@@@@@@"<<endl
<<"          @@@@,,,,"<<endl
<<"          @@@@"<<endl<<endl<<endl<<endl;
cout<<"           ###################"<<endl
    <<"       ###########################"<<endl
    <<"    #################################"<<endl
<<"   #####################################"<<endl
<<"  ##########             #################              #####                                                    #####     ######"<<endl
<<" ######                           #########         ##############                                     ####       ##    #####"<<endl
<<"#############################         #####        ####             ####  #####           ######      #########  #### ############        ####"<<endl
<<"#############          ############  #######        #####           ##############     #############  #########  #### #############      ####"<<endl
<<"########                        ############         ###########    ####       ####  ####        ####  ####      ####   ####    ####    ####"<<endl
<<"#############################      #########                ######  ####        #### ####        ####  ####      ####   ####     ####  ####"<<endl
<<"############            ###################         ##        ####  ####       ####  ####        ####  ####      ####   ####      ########"<<endl
<<" ########     #########        ############        ###############  ##############    ##############    #######  ####   ####       ######"<<endl
<<"  ############################  #########              #######      ####  #####           ######         ######  ####   ####        ####"<<endl
<<"    ####################################                            ####                                                        #######"<<endl
<<"     #################################"<<endl
<<"        ###########################"<<endl
<<"            ###################"<<endl;

 //Sleep(9000);
    do{
    system("cls");
    system("color 0B");
    gotoxy(0,1);cout<<char(219);gotoxy(0,2);cout<<char(219);gotoxy(0,3);cout<<char(219);//inicio de la columna izquierda
    gotoxy(0,4);cout<<char(219);gotoxy(0,6);cout<<char(219);gotoxy(0,7);cout<<char(219);
    gotoxy(0,8);cout<<char(219);gotoxy(0,9);cout<<char(219);gotoxy(0,10);cout<<char(219);
    gotoxy(0,11);cout<<char(219);gotoxy(0,12);cout<<char(219);gotoxy(0,13);cout<<char(219);
    gotoxy(0,14);cout<<char(219);gotoxy(0,15);cout<<char(219);gotoxy(0,16);cout<<char(219);
    gotoxy(0,17);cout<<char(219);gotoxy(0,18);cout<<char(219);gotoxy(0,19);cout<<char(219);
    gotoxy(0,20);cout<<char(219);gotoxy(0,21);cout<<char(219);gotoxy(0,22);cout<<char(219);
    gotoxy(0,23);cout<<char(219);gotoxy(0,24);cout<<char(219);gotoxy(0,25);cout<<char(219);
    gotoxy(0,26);cout<<char(219);gotoxy(0,27);cout<<char(219);
    gotoxy(0,27);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,28);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,29);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,30);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,31);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,32);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,33);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,34);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,35);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,36);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,37);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,38);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,39);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,40);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,41);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,42);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,43);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,44);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,45);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,46);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,47);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,48);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,49);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,50);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,51);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,52);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,53);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,54);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,55);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,56);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,57);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,58);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,59);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,60);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,61);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,62);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,63);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,64);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,65);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,66);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,67);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,68);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,69);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,70);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,71);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,72);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,73);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,74);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,75);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,76);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,77);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,78);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,79);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(0,80);cout<<char(219);gotoxy(118,27);cout<<char(219);//fin de la columna izquierda
    gotoxy(69,1);cout<<char(219);gotoxy(69,2);cout<<char(219);gotoxy(69,3);cout<<char(219);//Inicio de la columna derecha
    gotoxy(69,4);cout<<char(219);gotoxy(69,6);cout<<char(219);gotoxy(69,7);cout<<char(219);
    gotoxy(69,8);cout<<char(219);gotoxy(69,9);cout<<char(219);gotoxy(69,10);cout<<char(219);
    gotoxy(69,11);cout<<char(219);gotoxy(69,12);cout<<char(219);gotoxy(69,13);cout<<char(219);
    gotoxy(69,14);cout<<char(219);gotoxy(69,15);cout<<char(219);gotoxy(69,16);cout<<char(219);
    gotoxy(69,17);cout<<char(219);gotoxy(69,18);cout<<char(219);gotoxy(69,19);cout<<char(219);
    gotoxy(69,20);cout<<char(219);gotoxy(69,21);cout<<char(219);gotoxy(69,22);cout<<char(219);
    gotoxy(69,23);cout<<char(219);gotoxy(69,24);cout<<char(219);gotoxy(69,25);cout<<char(219);
    gotoxy(69,26);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,27);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,28);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,29);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,30);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,31);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,32);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,33);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,34);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,35);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,36);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,37);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,38);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,39);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,40);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,41);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,42);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,43);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,44);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,45);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,46);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,47);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,48);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,49);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,50);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,51);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,52);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,53);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,54);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,55);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,56);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,57);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,58);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,59);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,60);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,61);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,62);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,63);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,64);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,65);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,66);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,67);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,68);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,69);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,70);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,71);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,72);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,73);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,74);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,75);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,76);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,77);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,78);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,79);cout<<char(219);gotoxy(69,27);cout<<char(219);
    gotoxy(69,80);cout<<char(219);gotoxy(69,27);cout<<char(219);//fin de columna derecha
    gotoxy(118,0);cout<<char(219);gotoxy(118,1);cout<<char(219);gotoxy(118,2);cout<<char(219);gotoxy(118,3);cout<<char(219);//Inicio de la columna derecha 2
    gotoxy(118,4);cout<<char(219);gotoxy(118,5);cout<<char(219);gotoxy(118,6);cout<<char(219);gotoxy(118,7);cout<<char(219);
    gotoxy(118,8);cout<<char(219);gotoxy(118,9);cout<<char(219);gotoxy(118,10);cout<<char(219);
    gotoxy(118,11);cout<<char(219);gotoxy(118,12);cout<<char(219);gotoxy(118,13);cout<<char(219);
    gotoxy(118,14);cout<<char(219);gotoxy(118,15);cout<<char(219);gotoxy(118,16);cout<<char(219);
    gotoxy(118,17);cout<<char(219);gotoxy(118,18);cout<<char(219);gotoxy(118,19);cout<<char(219);
    gotoxy(118,20);cout<<char(219);gotoxy(118,21);cout<<char(219);gotoxy(118,22);cout<<char(219);
    gotoxy(118,23);cout<<char(219);gotoxy(118,24);cout<<char(219);gotoxy(118,25);cout<<char(219);
    gotoxy(118,26);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,27);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,28);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,29);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,30);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,31);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,32);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,33);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,34);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,35);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,36);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,37);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,38);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,39);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,40);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,41);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,42);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,43);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,44);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,45);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,46);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,47);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,48);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,49);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,50);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,51);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,52);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,53);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,54);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,55);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,56);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,57);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,58);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,59);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,60);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,61);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,62);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,63);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,64);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,65);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,66);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,67);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,68);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,69);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,70);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,71);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,72);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,73);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,74);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,75);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,76);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,77);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,78);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,79);cout<<char(219);gotoxy(118,27);cout<<char(219);
    gotoxy(118,80);cout<<char(219);gotoxy(118,27);cout<<char(219);//fin de columna derecha 2
    gotoxy(0,0);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//inicio de barra de arrina
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//fin de barra de arriba
    gotoxy(0,5);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//inicio de barra intermedia
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//fin de barra intermedia
    gotoxy(0,80);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//inicio de barra abajo
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);//fin de barra abajo
        if(lista->count!=0){
			lista->ImprimirLista();
		}
		else{
			gotoxy(85,10);cout<<"----Sin canciones----";
		}
    gotoxy(20,1);cout  << "|-------------------------------------|";
    gotoxy(20,2);cout << "|              SPOTIFY.EXE            |";
    gotoxy(20,3);cout << "|-------------------------------------|";
    gotoxy(20,9);cout << "|-------------------------------------|";
    gotoxy(20,10);cout << "|              OPCIONES               |";
    gotoxy(20,11);cout << "|------------------|------------------|";
    gotoxy(20,12);cout << "|1.Agregar cancion |6.Eliminar ultima |";
    gotoxy(20,13);cout << "|2.Sig. Cancion    |7.Mod. Cancion    |";
    gotoxy(20,14);cout << "|3.Ant. Cancion    |8.Salir           |";
    gotoxy(20,15);cout << "|4.Eliminar actual |9.Pausar          |";
    gotoxy(20,16);cout << "|5.Eliminar primera|10.Reproducir     |";
    gotoxy(20,17);cout << "|12.Or. Por Cancion|11.Invertir(Ambos)|";
    gotoxy(20,18);cout << "|13.Or. Por Artista|14.Buscar Cancion |";
    gotoxy(20,19);cout << "|##.---------------|15.Buscar Artista |";
    gotoxy(20,20);cout << "|------------------|------------------|";
    gotoxy(20,21);cout << "Selecciona una Opcion: ";
		cin >> opcion_menu;
		if((!i_input(opcion_menu))){
			cout<<"Ingrese solo numeros"<<endl;
			Sleep(1000);
		}
		else{
			int x=0;
			int y=12;
			string id;
			switch(stoi(opcion_menu)){
			case 1:
			    system("cls");
				cout<<"------------AGREGA CANCION A LA COLA DE REPRODUCCION------------"<<endl<<endl<<endl<<endl<<endl;
				cout<<endl<<endl<<endl<<"----------CANCIONES DISPONIBLES----------"<<endl;
				for(int i = 0; i < 30; i++){
					gotoxy(x,y);cout<<"[" << playlist[i].id<<"]  "<<playlist[i].titulo;
					x+=30;
					if((i+1)%2==0&&(i!=0)){
						x=0;
						y+=1;
					}
				}
				cout<<endl<<endl<<"Digita el numero de la cancion: ";
				cin>>id;
				if((!i_input(id))){
					cout<<"Solo se aceptan numeros"<<endl;
					Sleep(1000);
				}
				else{
					if (stoi(id)>30){
						cout<<"ID no valido"<<endl;
						Sleep(1000);
					}
					else{
						lista->Agregar(playlist[stoi(id)-1]);
					}
				}
				break;
			case 2:
				lista->Siguiente();
				break;
			case 3:
				lista->Anterior();
				break;
			case 4:
				cancionAct=lista->EliminarActual(cancionAct);
				break;
			case 5:
				cancionAct=lista->EliminarPrimero(cancionAct);
				break;
			case 6:
				cancionAct=lista->EliminarUltimo(cancionAct);
				break;
			case 7:
				lista->Modificar();
				break;
			case 8:
			    cout<<"Saliendo..."<<endl;
                 break;
            case 9:
                PlaySound((LPCSTR)sonido, NULL, SND_FILENAME);
                cancionAct = false;
                break;
            case 10:
				PlaySong2(lista->actual->cancion.ruta);
				cancionAct = true;
                break;
            case 11:
                lista->Invertir();
                break;
            case 12:
                lista->OrdenarPorCancion();
                break;
            case 13:
                lista->OrdenarPorArtista();
                break;
            case 14:
                system("cls");
                cout<<"--------BUSQUEDA DE CANCION---------"<<endl<<endl;
                cout<<"Dame el nombre de la cancion: ";
                cin.ignore();getline(cin,busquedaCancion);
                lista->BuscarCancion(busquedaCancion);
                break;
            case 15:
                system("cls");
                cout<<"--------BUSQUEDA DE ARTISTA---------"<<endl<<endl;
                cout<<"Dame el nombre del artista: ";
                cin.ignore();getline(cin,busquedaArtista);
                lista->BuscarCancion(busquedaArtista);
                break;
			default:
				gotoxy(20,24);cout<<"Opcion No Valida ";
				gotoxy(20,25);system("pause");
				break;
			}
		}
	}while (opcion_menu[0] != '8');
	return 0;
}
void PlaySong2(string song_s){
	const char* song = song_s.c_str();
	cout<<PlaySound(song,NULL,SND_ASYNC);
}

bool i_input(string input){
    int length = input.length();
    for(int i=0; i<length;i++){
        if(!isdigit(input[i])){
            return false;
        }
    }
    return true;
}
