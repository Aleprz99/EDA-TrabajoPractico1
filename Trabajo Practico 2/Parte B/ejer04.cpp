/*Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar el vector en 
orden inverso—del último al primer elemento.*/
#include <iostream>
using namespace std;
int main(){
	
	int vector[]={1,2,3,4,5,6,7,8,9};
	
	cout<<" El vector origianl"<<endl;
	for(int i=0;i<9;i++){
		cout<<vector[i]<<", ";
	}
	cout<<"\n \n El vector al reves es:"<<endl;
	for(int i=8; i>=0;i--){
	cout<<vector[i]<<", ";
	}
	
	
	return 0;
}
