#include <iostream>
#include <cstdlib>
using namespace std;




float voto = 0, voto2 = 0,voto3 = 0, porcentaje1, porcentaje2, porcentaje3;
float *ptr1,*ptr2,*ptr3, a, b, c, e1, e2, e3, resp;


void Menu();
void imprimir();

float setVoto(float voto)
{
    voto = voto + 1;
    return voto;
}
float setVoto2(float voto)
{
    voto2 = voto2 + 1;
    return voto2;
}
float setVoto3(float voto)
{
    voto3 = voto3 + 1;
    return voto3;
}
float setPorcentajes(float voto1,float voto2,float voto3)
{
    porcentaje1 = (voto1 * 100) / (voto1 + voto2 + voto3);
    return porcentaje1;
}
float setPorcentajes2(float voto1,float voto2,float voto3)
{
    porcentaje2 = (voto2 * 100) / (voto1 + voto2 + voto3);
    return porcentaje2;
}
float setPorcentajes3(float voto1,float voto2,float voto3)
{
    porcentaje3 = (voto3 * 100) / (voto1 + voto2 + voto3);
    return porcentaje3;
}

int main(int argc, char** argv)
{
    do
    {
        system("cls");
        Menu();
        cout<<"Ingresar nuevo voto 1 [SI] 2[NO]: ";
        cin>>resp;
    }
    while(resp != 2);
    system("pause>>cls");
    return 0;
}
void Menu()
{
    system("cls");
    system("color 0E");
    int opc = 0;
    cout<<">>>>>>>Menu<<<<<<<"<<endl;
    cout<<"1)Atlas "<<endl;
    cout<<"2)Chivas "<<endl;
    cout<<"3)Toluca "<<endl;
    cout<<"Seleccione opcion: ";
    cin>>opc;
    cout<<endl;
    cout<<endl;
    if(opc == 1)
    {
        voto = setVoto(voto);
        ptr1 = &voto;
        a = *ptr1;
    }
    if(opc == 2)
    {
        voto = setVoto2(voto2);
        ptr2 = &voto2;
        b = *ptr2;

    }
    if(opc == 3)
    {
        voto = setVoto3(voto3);
        ptr3 = &voto3;
        c = *ptr3;
    }
    porcentaje1 = setPorcentajes(a,b,c);
    ptr1 = &porcentaje1;
    e1 = *ptr1;
    porcentaje2 = setPorcentajes2(a,b,c);
    ptr2 = &porcentaje2;
    e2 = *ptr2;
    porcentaje3 = setPorcentajes3(a,b,c);
    ptr3 = &porcentaje3;
    e3 = *ptr3;
    imprimir();
}
void imprimir()
{
    cout<<"<<<<<<<VOTOS>>>>>>>"<<endl;
    cout<<"Atlas: "<<a<<endl;
    cout<<"Chivas: "<<b<<endl;
    cout<<"Toluca: "<<c<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"<<<<<<<PORCENTAJES>>>>>>>"<<endl;
    cout<<"Atlas %: "<<e1<<endl;
    cout<<"Chivas %: "<<e2<<endl;
    cout<<"Toluca %: "<<e3<<endl;
    cout<<endl;
    cout<<endl;
}
