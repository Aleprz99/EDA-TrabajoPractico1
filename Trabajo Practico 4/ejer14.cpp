/*Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que 
determina si un número es primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular 
todos los números primos menores a un número ingresado por el usuario. El usuario debe poder 
realizar estas opciones todas las veces que desee.*/
#include <iostream>
#include<stdio.h>
using namespace std;
bool esPrimo(int num){
int cont=0;
for (int i=1;i<=num;i++){
    if (num % i==0){
        cont++;
    }}
    if (cont==2){
        return true;

    }else{
        return false;
    }


}
int main(int argc, char const *argv[]){
    int aux=0;
    bool flag;
    do{
        cout<<"-----------------------------------------------------"<<endl;
cout<<"Elija una opcion\n1.Saber si un numero es primo.\n2.Calcular todos los numeros primos menores\n3.Salir"<<endl;
cin>>aux;
while (aux<1 || aux>3){
    cout<<"Ingrese una opcion entre 1 y 3: ";
    cin>>aux;
}
switch (aux)
{
case 1: cout<<"Ingrese un numero para saber si es primo: ";
cin>>aux;
 if (esPrimo(aux)){cout<<"El numero ingreado es primo";

} else{cout<<"El numero no es primo."<<endl;}
    break;

case 2: cout<<"Ingrese un numero: ";
cin>>aux;
    int num;
    cout<<"Lista de numeros primos menores:"<<endl;
    for(int i=1;i<=aux;i++){
        num=i;
        if ( esPrimo(num)) {
            cout<<"numero "<< num << endl;
        }
    } break;
case 3: flag=true;
break;
}
}while(!flag);
    return 0;
}

