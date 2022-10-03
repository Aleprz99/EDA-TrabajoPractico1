#include "iostream"
#include "stdio.h"
#include "stdlib.h"

#define MIN 0	//Minimo para los numeros aleatorios
#define MAX 10	//Maximo para los numeros aleatorios

int main(){
	int filas,columnas;
	printf("Defina la dimension de la matriz.\nIngrese la cantidad de columnas:\n");
	scanf("%d",&columnas);
	printf("Ingrese la cantidad de filas:\n");
	scanf("%d",&filas);
	int matriz[columnas][filas];
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++)matriz[i][j]=rand()%(MAX-MIN+1)+MIN;
	}
	printf("--------------------------------\nMatriz:\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
