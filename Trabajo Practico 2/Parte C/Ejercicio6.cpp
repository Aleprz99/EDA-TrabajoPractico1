#include "iostream"
#include "stdio.h"

#define FILAS 3
#define COLUMNAS 3

//Esta funcion es para limpiar la pantalla independientemente del SO
#ifdef _WIN32
  #include<windows.h>
#endif  

void limpiarPantalla(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
//-------------------------------------------------------------------

int main(){
	int matriz1[FILAS][COLUMNAS],matriz2[FILAS][COLUMNAS];
	printf("Matriz M1:\n");
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("--------------------------------\nMatriz M2:\n");
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz2[i][j]);
		}
	}
	limpiarPantalla();
	printf("Matriz M1+M2:\n");
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++)printf("%d	",matriz1[i][j]+matriz2[i][j]);
		printf("\n");
	}
	return 0;
}
