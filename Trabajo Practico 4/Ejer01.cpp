/*Escriba un procedimiento para la carga de vector. Otra muestra en vector.
*/
#include "iostream"
#include<stdio.h>
using namespace std;

void carga(int vector[],int cant){
	for(int i=0; i<cant;i++){
	cin>>vector[i];
	}
}
void mostrar(int vec[], int cant){
	for(int i=0; i<cant;i++){
		cout<<vec[i]<<endl;
	}
}	

int main(){
	int cantidad=4;
	int vector[cantidad];
	carga(vector,cantidad);
	mostrar(vector,cantidad);
	
	
	return 0;
}
