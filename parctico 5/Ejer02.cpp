#include <iostream>
#include<stdio.h>
#include "string.h"
using namespace std;

const int N=10;

struct autos {
    string placa;
    string propietario;
    float hora;
}typedef autos;


struct Pila{
 private:
 	int tope= -1;
	autos Autos[N];

 public:
	void push(autos a){
		if (tope<N-1){
			tope++;
			Autos[tope]=a;
			
		}else{
			cout<<"la pila esta llena";
			
		}
	};
	autos verTope(){
		if(!estaVacia()){
			return Autos[tope];
		}
	}
	autos pop(){
		autos a;
		if(tope>=0){
			a= Autos[tope];
			tope--;
			return a;
		}else{
			cout<<"La pila esta vacia";
		}
	}
	bool estaVacia(){
		if(tope<0){
			return true;
		}else{
			return false;
		}
	}
	bool estaLlena(){
		if(tope==N-1){
			return true;
		}else{
			return false;
		}	
	}
	int getTope(){
		return tope;
	}
};



Pila mostrar(Pila &a){
	Pila aux;
	autos b;
	while(!a.estaVacia()){
		b= a.pop();
		cout<<"----------------------"<<endl;
		cout<<"Placa del automovil: "<< b.placa<<endl;
		cout<<"Propiertario: "<< b.propietario<<endl;
		cout<<"Hora de entrada: "<<b.hora<<endl;
		aux.push(b);
	}
	return aux;	
}
autos cargaAuto(){
	autos a;
	getchar();
	cout<<"Ingrese la patente: ";
	getline(cin, a.placa);
	cout<<"ingrese el propietario: ";
	getline(cin, a.propietario);
	cout<<"ingrese la hora de entrada en decimales: ";
	cin>>a.hora;
	return a;
}
/*2.	Suponga que administra un estacionamiento en forma de callejón(pila), cuenta con Cochera1, 
Cochera2 para 10 autos cada una, ambas solamente tienen una puerta de entrada/salida, y que el valor 
hora es $100- Se diseña una estructura auto con los datos: placa, propietario, y hora de entrada. 
A- Cuando se desea estacionar un auto en Cochera1 o Cochera2, el sistema debe solicitar sus datos, y 
agregarlos. 
B-Habrá un procedimiento para mostrar las cocheras por orden de salida de los vehículos.  */
int main(int argc, char const *argv[])
{
	Pila cochera1, cochera2;
	int aux;
	char repuesta;
	autos a;
	do{
	cout<<"Cargar autos a las cocheras:"<<endl;
	cout<<"Elija una cochera:\n1.Cochera 1.\n2.Cochera 2."<<endl;
	cin>>aux;
	while(aux<1|| aux>2){
		cout<<"Debe elejir una opcion entre 1 y 2: ";
		cin>>aux;
	}
	a= cargaAuto();
	if (aux==1){
		cochera1.push(a);
		}else{
			cochera2.push(a);
		}
	cout<<"Desea cargar otro auto?(s/n):";
	cin>>repuesta;
	}while(repuesta=='s');

	cout<<"--------------------------"<<endl;
	cout<<"Cochera 1:"<<endl;
	mostrar(cochera1);
	cout<<"--------------------------"<<endl;
	cout<<"Cochera 2:"<<endl;
	mostrar(cochera2);

	return 0;
}
