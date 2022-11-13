/*Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de
los elementos almacenados en dicha fila*/

#include "stdio.h"
#include "iostream"
#include "string.h"
#include "stdlib.h"
#include <math.h>

using namespace std;

int menor(int a, int matrix[3][3], int c){
	int r=matrix[a][0];
for(int i=0; i<c;i++){
	if(matrix[a][i]<r)
	r=matrix[a][i];
}	
return r;

}

int main(){
int matriz[3][3]={{4,8,23},{54,32,55},{7,66,33}};
cout<<"el menor de la fila numero 0 es "<<menor(0,matriz,3)<<endl;
cout<<"el menor de la fila numero 1 es "<<menor(1,matriz,3)<<endl;
cout<<"el menor de la fila numero 2 es "<<menor(2,matriz,3)<<endl;
return 0;
}
