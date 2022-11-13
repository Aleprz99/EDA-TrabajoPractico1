/*6. Realice un programa que contenga las siguientes funciones o procedimientos según sea:
• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las
iagonales de ambas.
Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices), 
muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).*/

#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;

void cargaMatriz(int matriz[4][4]){
	cout<<"----------------------------\nCarga de matriz: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Ingrese el valor para i=%d y j=%d: ",i,j);
			cin>>matriz[i][j];
	}
	
	}
	
};
void muestraMatriz(int mat[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("[%d]",mat[i][j]);
		
	}cout<<""<<endl;
	
	}
}
void intercambioDiagolnal(int mat1[4][4],int mat2[4][4] ){
	for(int i=0; i<4;i++){
			for(int j=0; j<4;j++){
		if (i==j||(i+j)==3){
				
		swap(mat1[i][j], mat2[i][j]);
		//cambia las dos diagonales
		
	}}}
	
}

int main(){
	int matriz1[4][4], matriz2[4][4];

	cargaMatriz(matriz1);
	cargaMatriz(matriz2);
	cout<<"\nMatriz 1:"<<endl;
	muestraMatriz(matriz1);
	cout<<"\nMatriz 2:"<<endl;
	muestraMatriz(matriz2);
	intercambioDiagolnal(matriz1,matriz2);
	cout<<"\nMatriz 1:"<<endl;
	muestraMatriz(matriz1);
	cout<<"\nMatriz 2:"<<endl;
	muestraMatriz(matriz2);
	
	
	
	return 0;
}
