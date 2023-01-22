#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#define C_0 0
#define C_1 1
#define C_2 2
#define TAMCADENA 10000
using namespace std;
bool validacion_decimal(char *cadena);
bool validacion_binario(char *cadena);
bool validacion_hexadecimal(char *cadena);
int *ptr1 = NULL, *ptr2 = NULL, *P;
float *ptr3 = NULL, *ptr4 = NULL;
float numero = 0, porc = 0;
int a = C_0;
char CG1[TAMCADENA];
char CG2[TAMCADENA];
int operaciones(char caracter,int *a, int *b);
int *potencia(int *, int *);
int *factorial(int *);
void porcentaje(float *, float *);
void decimal_binario(int *);
void binario_decimal(char *cadena);
int Hexadecimal_decimal(char *numeros);
void Hexadecimal(int);
int octal_decimal(int );
void octal(int);
void letra(int);
enum {A = 10,B,C,D,E,F};
void Menu();
string cadfinal;

void decimal_binario(int *a){
      int binario[100], i=0, j=0;
      for(i=100;i>0;i--){
    binario[i]=*a%2;
    *a=*a/2;
    }
    for(i=1;i<=100;i++){

    if(binario[i]==1){

    for(j=i;j<=100;j++){

    cout<<binario[j];
    }
    cout<<endl;
    break;
    }
    }
}


int main()
{
    system("cls");
    Menu();
    return 0;
}

void Menu()
{
    int n1 = C_0, n2 = C_0;
    char opc;
    bool continuar = true;
    do
    {
        system("cls");
        system("color 0B");
        cout<<"-------MENU-------"<<endl;
        cout<<"1)Suma"<<endl;
        cout<<"2)Resta"<<endl;
        cout<<"3)Multiplicacion"<<endl;
        cout<<"4)Division"<<endl;
        cout<<"5)Potencia"<<endl;
        cout<<"6)Factorial"<<endl;
        cout<<"7)Porcentaje"<<endl;
        cout<<"8)Decimal-Binario"<<endl;
        cout<<"9)Binario-Decimal"<<endl;
        cout<<"10)Decimal-Octal"<<endl;
        cout<<"11)Octal-Decimal"<<endl;
        cout<<"12)Decimal-Hexadecimal"<<endl;
        cout<<"13)Hexadecimal-Decimal"<<endl;
        cout<<"14)Salir"<<endl<<endl<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>CG1;
        fflush(stdin);
        if(validacion_decimal(CG1)){
        fflush(stdin);
        opc = atoi(cadfinal.c_str());
        switch(opc){
        case 1:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------SUMA-------"<<endl<<endl;
            cout<<"Ingrese un numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1 = atoi(cadfinal.c_str());
            ptr1 = &n1;
            cout<<"Ingrese otro numero: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            n2=atoi(cadfinal.c_str());
            ptr2=&n2;
            cout<<"Resultado: "<<operaciones('+',ptr1,ptr2)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 2:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------RESTA-------"<<endl<<endl;
            cout<<"Ingrese un numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Ingrese otro numero: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            n2=atoi(cadfinal.c_str());
            ptr2=&n2;
            cout<<"Resultado: "<<operaciones('-',ptr1,ptr2)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 3:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------MULTIPLICACION-------"<<endl<<endl;
            cout<<"Ingrese un numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Ingrese otro numero: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            n2=atoi(cadfinal.c_str());
             ptr2=&n2;
             cout<<"Resultado: "<<operaciones('*',ptr1,ptr2)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 4:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------DIVISION-------"<<endl<<endl;
            cout<<"Ingrese un numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Ingrese otro numero: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            n2=atoi(cadfinal.c_str());
            ptr2=&n2;
            cout<<"Resultado: "<<operaciones('/',ptr1,ptr2)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 5:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------POTENCIA-------"<<endl<<endl;
            cout<<"Ingrese el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Ingrese la potencia a la que se va a elevar: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            n2=atoi(cadfinal.c_str());
             ptr2=&n2;
             cout<<"Resultado: "<<*potencia(ptr1,ptr2)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 6:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------FACTORIAL-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Resultado: "<<*factorial(ptr1)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 7:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------PORCENTAJE-------"<<endl<<endl;
            cout<<"Ingrese un numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            numero = atoi(cadfinal.c_str());
            ptr3 = &numero;
            cout<<"Ingrese el porcentaje: ";
            cin>>CG2;
            if(validacion_decimal(CG2)){
            porc = atoi(cadfinal.c_str());
            ptr4 = &porc;
            porcentaje(ptr3,ptr4);}
            else{
            cout<<"Datos no validos"<<endl;
            }
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 8:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------DECIMAL A BINARIO-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            decimal_binario(ptr1);}
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 9:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------BINARIO A DECIMAL-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_binario(CG1)){
            binario_decimal(CG1);
            }
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 10:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------DECIMAL A OCTAL-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            octal(*ptr1);}
            else{
            cout<<"Datos no validos"<<endl;
            }
            break;
        case 11:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------OCTAL A DECIMAL-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Resultado: "<<octal_decimal(*ptr1)<<endl;}
            else{
            cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 12:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------DECIMAL A HEXADECIMAL-------"<<endl<<endl;
            cout<<"Ingresa el numero: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            n1=atoi(cadfinal.c_str());
            ptr1=&n1;
            cout<<"Resultado del numero Hexadecimal : ";
            Hexadecimal(*ptr1);
            cout<<endl;
            }
            else{
                cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 13:
            fflush(stdin);
            system("cls");
            system("color 0E");
            cout<<endl;
            cout<<"-------HEXADECIMAL A DECIMAL-------"<<endl<<endl;
            cin.ignore();
            cout<<"Ingresa un hexadecimal: ";
            cin>>CG1;
            if(validacion_decimal(CG1)){
            cout<<"Resultado: "<<Hexadecimal_decimal(CG1);
            cout<<endl;
            }
            else{
                cout<<"Datos no validos"<<endl;
            }
            fflush(stdin);
            break;
        case 14:
            continuar = false;
            break;
        default:
            system("cls");
            system("color 0C");
            cout<<"Esa opcion no existe"<<endl;
            break;
        }
        }
        else{
            system("cls");
            system("color 0C");
            cout<<"Datos no validos"<<endl;
        }
    cout<<endl<<endl;
    cout<<"------REGRESANDO AL MENU------"<<endl;
    system("pause");
    }
    while(continuar);
    cout<<endl<<endl<<endl;
    cout<<"------ADIOS------"<<endl<<endl;
}
void porcentaje(float *numero, float *porc){
    float *resultado = new float(1);
    *resultado =(*numero * *porc)/100;
    cout<<"Resultado: "<< *resultado<<endl;
    return;
}
int *factorial(int *aux){
    int *resultado = (int*)malloc(sizeof(int));
    *resultado = *aux;
    for(int i=C_1; i<*aux; i++)
    {
        *resultado = (*resultado)*(i);
    }
    return resultado;
}
int *potencia(int *numero, int *potencia){
    int *resultado= (int*)malloc(sizeof(int));
    *resultado = C_1;
    for(int i = C_0; i < *potencia; i++)
    {
        *resultado *= (*numero);
    }
    return resultado;
}
int operaciones(char caracter,int *a, int *b){
    int operacion;
    switch(caracter)
    {
    case '+':
        operacion = *a + *b;
        break;
    case '-':
        operacion = *a - *b;
        break;
    case '*':
        operacion = (*a) * (*b);
        break;
    case '/':
        if(*a == C_0)
        {
            cout<<"No se puede dividir entre ";
        }
        else
        {
            operacion = (*a) / (*b);
        }
        break;
    default:
        break;
    }
    return operacion;
}
void Hexadecimal(int numero){
    int cociente=C_0;
    int residuo=C_0;
    while(numero/16>C_0)
    {
        cociente = numero/16;
        residuo = numero%16;
        numero = cociente;
    }
    cout<< cociente;
    letra(residuo);
}
void octal(int numero){
    int cociente=C_0,i=0;
    int residuo, metodo = numero;
    int numeros[50];
    while(metodo/8>C_0)
    {
        cociente=metodo/8;
        residuo=metodo%8;
        metodo=cociente;
        numeros[i]=residuo;
        i++;
    }
    cout<<"El resultado es: "<<cociente;
        for(int j=i-1;j>=0;j--){
        cout<<numeros[j];
    }
    cout<<endl<<endl;
}
int Hexadecimal_decimal(char numeros[]){
    int tamanioCadena,i,base = 1,temporal=0;
    tamanioCadena = strlen(numeros);
    for(i=0;i<tamanioCadena;i++){
        numeros[i]=toupper(numeros[i]);
    }
   for (int i=tamanioCadena-1; i>=0; i--) {
      if (numeros[i]>='0' && numeros[i]<='9') {
         temporal += (numeros[i] - 48)*base;
         base = base * 16;
      }
      else if (numeros[i]>='A' && numeros[i]<='F') {
         temporal += (numeros[i] - 55)*base;
         base = base*16;
      }
   }
   return temporal;
}
int octal_decimal(int numero){
    int resultado=C_0,i=C_0,residuo;
    while (numero!=C_0)
    {
        residuo = numero % 10;
        numero /= 10;
        resultado += residuo * pow(8, i);
        ++i;
    }
    return resultado;
}
void binario_decimal(char cadena[]){
    int tamanio, i,aux,resultado=0,k;
    tamanio = strlen(cadena);
    tamanio--;
    k = tamanio;
    for(i=C_0;i<tamanio;i++){
    if(cadena[i]=='1'){
      aux=C_1;
    for(int j=C_0;j<k;j++){
      aux=aux*C_2;
    }
      k--;
      resultado=resultado+aux;

    }
    else{
      k--;
    }
    }
    if(cadena[tamanio]=='1'){
        resultado=resultado+C_1;
    }
    cout<<"El resultado es: "<<resultado<<endl;
}
bool validacion_decimal(char cadena[]){
    int tamanio,i,validaciones=0;
    bool cadvalida = false;
    tamanio = strlen(cadena);
    cadfinal="";
    if(cadena[0]=='-'){
      validaciones++;
    for(i=1;i<tamanio-1;i++){
    if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57))){
      validaciones++;
    }
    }
    }
    else{
    for(i=0;i<tamanio-1;i++){
    if((isdigit(cadena[i]))or((cadena[i]>=48)and(cadena[i]<=57))){
      validaciones++;
    }
    }
    }
    if(validaciones==tamanio-1){
      cadvalida=true;
    }
    for(i=0;i<tamanio;i++){
      cadfinal=cadfinal+cadena[i];
    }
    return cadvalida;
}
bool validacion_binario(char cadena[]){
    int tamanio,i,validaciones=0;
    bool cadvalida=false;
    tamanio=strlen(cadena);
    for(i=0;i<tamanio-1;i++){
    if((isdigit(cadena[i]))or((cadena[i]=='0')and(cadena[i]=='1'))){
      validaciones++;
    }
    }
    if(validaciones==tamanio-1){
      cadvalida=true;
    }
    return cadvalida;
};
bool validacion_hexadecimal(char cadena[]){
    int i;
    for(i=0; i<strlen(cadena); i++)
    {
        cadena[i]=toupper(cadena[i]);
    }
    for(i=0; i<strlen(cadena); i++)
    {
        if(!(isdigit(cadena[i]))&&(cadena[i] == '.'))
        {
            cout<<"Ingresa solo numeros enteros"<<endl;
            return 0;
        }
    }
    return 1;
};
void letra(int numero2){
    switch(numero2)
    {
    case A:
        cout<<"A";
        break;
    case B:
        cout<<"B";
        break;
    case C:
        cout<<"C";
        break;
    case D:
        cout<<"D";
        break;
    case E:
        cout<<"E";
        break;
    case F:
        cout<<"F";
        break;
    default:
        cout<<numero2;
        break;
    }
}
