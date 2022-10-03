#include "iostream"
#include "stdio.h"

#define FILAS 3
#define COLUMNAS 3

int main(){
	int matriz1[FILAS][COLUMNAS],matriz2[FILAS][COLUMNAS];
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
			matriz2[j][i]=matriz1[i][j];
		}
	}
	printf("--------------------------------\nMatriz M1:\n");
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++)printf("%d ",matriz1[i][j]);
		printf("\n");
	}
	printf("--------------------------------\nMatriz M2:\n");
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++)printf("%d ",matriz2[i][j]);
		printf("\n");
	}
	return 0;
}
