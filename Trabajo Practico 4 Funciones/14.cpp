/*14. Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que 
determina si un número es primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular 
todos los números primos menores a un número ingresado por el usuario. El usuario debe poder 
realizar estas opciones todas las veces que desee.*/
#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "string"

using namespace std;

bool esPrimo(int num){
	bool stat = false;
	int cont=0;
	for(int i=1;i<=num;i++){
		if(num%i == 0){
			cont++;
		}
	}
	if(cont==2 || num==1)stat=true;
	return stat;
}


int main(){
	int numero,opc;
	bool exit=false;
	do{
		cout<<"Ingrese una opcion:"<<endl;
		cout<<"1.Determinar si un numero es primo"<<endl;
		cout<<"2.Calcular todos los numeros primos menores a un numero ingresado"<<endl;
		cout<<"3.Salir"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingrese un numero"<<endl;
				cin>>numero;
				if(numero==0){
					cout<<"Debe ser mayor a 0"<<endl;
				}else{
					if(esPrimo(numero)){
						cout<<"Es primo"<<endl;
					}else{
						cout<<"No es primo"<<endl;
					}
				}
				break;
			case 2:
				cout<<"Ingrese un numero"<<endl;
				cin>>numero;
				if(numero==0){
					cout<<"Debe ser mayor a 0"<<endl;
				}else{
					for(int i=1;i<=numero;i++){
						if(esPrimo(i)){
							cout<<"El numero "<<i<<" es primo"<<endl;
						}
					}
				}
				break;
			case 3:
				exit = true;
				break;
			default:
				cout<<"Elija una opcion correcta"<<endl;
		}
	}while(!exit);
	return 0;
}
