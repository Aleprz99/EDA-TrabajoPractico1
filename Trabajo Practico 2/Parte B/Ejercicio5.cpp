#include "iostream"
#include "stdio.h"
#include "conio.h"

int main(){
	int vsize,min;
	printf("Ingrese el largo del vector\n");
	scanf("%d",&vsize);
	int vector[vsize];
	printf("--------------------------\nIngrese los valores del vector:\n");
	for(int i=0;i<vsize;i++){
		scanf("%d",&vector[i]);
		if(i==0){
			min=vector[i];
		}else{
			if(min>vector[i])min=vector[i];
		}
	}
	printf("--------------------------\nEl menor numero del arreglo es: %d\nPresione cualquier tecla para salir",min);
	getch();
	return 0;
}
