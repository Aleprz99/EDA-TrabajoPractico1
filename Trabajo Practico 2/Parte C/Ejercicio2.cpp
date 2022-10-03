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
	int diagonal[3];
	int contador = 0;
	int matriz[FILAS][COLUMNAS];
	for(int i=0;i<FILAS;i++){
		for(int j=0;j<COLUMNAS;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			if(i==j){
				diagonal[contador]=matriz[i][j];
				contador++;
			}
		}
	}
	limpiarPantalla();
	printf("La diagonal es: ");
	for(int i=0;i<3;i++)printf("%d ",diagonal[i]);
	return 0;
}
