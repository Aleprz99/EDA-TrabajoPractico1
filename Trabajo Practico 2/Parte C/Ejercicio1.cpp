#include "iostream"
#include "stdio.h"


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
	int filas,columnas;
	printf("Defina la dimension de la matriz.\nIngrese la cantidad de columnas:\n");
	scanf("%d",&columnas);
	printf("Ingrese la cantidad de filas:\n");
	scanf("%d",&filas);
	int matriz[columnas][filas];
	limpiarPantalla();
	printf("Definir matriz\n");
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("Fila %d|Columna %d:\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	limpiarPantalla();
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
