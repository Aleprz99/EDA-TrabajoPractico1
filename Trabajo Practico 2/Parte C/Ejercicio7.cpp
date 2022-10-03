#include "iostream"
#include "stdio.h"

int main(){
	int filas,columnas;
	bool issimetrica = false;
	printf("Defina la dimension de la matriz.\nIngrese la cantidad de columnas:\n");
	scanf("%d",&columnas);
	printf("Ingrese la cantidad de filas:\n");
	scanf("%d",&filas);
	int matriz[columnas][filas];
	printf("Definir matriz\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				issimetrica = true;
				if(matriz[i][j]!=matriz[j][i]){
					issimetrica = false;
					break;
				}
			}
			if(!issimetrica)break;
		}
	}
	printf("--------------------------------\nMatriz:\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++)printf("%d ",matriz[i][j]);
		printf("\n");
	}
	if(issimetrica){
		printf("La matriz es simetrica");
	}else{
		printf("La matriz NO es simetrica");
	}
	return 0;
}
