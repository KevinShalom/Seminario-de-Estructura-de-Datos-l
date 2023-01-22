#include <iostream>
#include <cstdlib>
using namespace std;

float * suma(float *, float *);
float * resta(float *, float *);
float * multiplicacion(float *, float *);
float * division(float *, float *);
int *factorial(int *);

int main()
{
    float *ptr1=NULL,*ptr2=NULL;
    int *ptr3=NULL,*ptr4=NULL;
    float numero1 = 0, numero2 = 0;
    int opc = 0, n1;
    do
    {
        system("cls");
        system("color 0B");
        cout<<">>>>MENU<<<<"<<endl;
        cout<<"1)SUMA"<<endl;
        cout<<"2)RESTA"<<endl;
        cout<<"3)MULTIPLICACION"<<endl;
        cout<<"4)DIVISION"<<endl;
        cout<<"5)FACTORIAL"<<endl;
        cout<<"6)SALIR"<<endl;
        cout<<"ESCOJE UNA OPCION: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
        {
            system("cls");
            system("color 0E");
            cout<<"SUMA"<<endl;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero1;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero2;
            ptr1 = &numero1;
            ptr2 = &numero2;
            cout<<"Resultado: "<< *suma(ptr1,ptr2)<<endl;
            system("pause>>cls");
        }
        break;
        case 2:
        {
            system("cls");
            system("color 0E");
            cout<<"RESTA"<<endl;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero1;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero2;
            ptr1 = &numero1;
            ptr2 = &numero2;
            cout<<"Resultado: "<<*resta(ptr1,ptr2)<<endl;
            system("pause>>cls");
        }
        break;
        case 3:
        {
            system("cls");
            system("color 0E");
            cout<<"MULTIPLICACION"<<endl;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero1;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero2;
            ptr1 = &numero1;
            ptr2 = &numero2;
            cout<<"Resultado: "<< *multiplicacion(ptr1,ptr2)<<endl;
            system("pause>>cls");
        }
        break;
        case 4:
        {
            system("cls");
            system("color 0E");
            cout<<"DIVISION"<<endl;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero1;
            cout<<"Ingresa un numero: "<<endl;
            cin>>numero2;
            ptr1 = &numero1;
            ptr2 = &numero2;
            cout<<"Resultado: "<< *division(ptr1,ptr2)<<endl;
            system("pause>>cls");
        }
        break;
        case 5:
        {
            system("cls");
            system("color 0E");
            cout<<"FACTORIAL"<<endl;
            cout<<"Ingresa un numero: "<<endl;
            cin>>n1;
            ptr3 = &n1;
            cout<<"Resultado: "<< *factorial(ptr3)<<endl;
            system("pause>>cls");
        }
        break;
        }
    }
    while(opc!=6);
    system("pause>>cls");
    return 0;
}

int * factorial(int * n1)
{

    int *r = (int*)malloc(sizeof(int));
    *r = 1;
    for(int i = 1; i<= *n1; i++)
    {
        *r = *r * i;
    }
    return r;

}

float * suma(float * numero1,float * numero2)
{
    float *r=(float*)malloc(sizeof(float));
    *r = *numero1 + *numero2;
    return r;
    free(r);
}
float * resta(float * numero1,float * numero2)
{
    float *r=(float*)malloc(sizeof(float));
    *r = *numero1 - *numero2;
    return r;
    free(r);
}

float * multiplicacion(float * numero1,float * numero2)
{
    float *r=(float*)malloc(sizeof(float));
    *r = *numero1 * *numero2;
    return r;
    free(r);
}

float * division(float * numero1,float * numero2)
{
    float *r=(float*)malloc(sizeof(float));
    *r = *numero1 / *numero2;
    return r;
    free(r);
}



