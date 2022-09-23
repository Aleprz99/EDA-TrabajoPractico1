#include "iostream"
#include "stdio.h"

int main(){
	int diag[5],m[5][5];
	int pos=0;
	for(int i=0;i<5;i++){
		printf("Fila %d\n",i+1);
		for(int j=0;j<5;j++){
			printf("Columna %d: ",j+1);
			scanf("%d",&m[i][j]);
			if(j==i){
				diag[pos]=m[i][j];
				pos++;
			}
			printf("\n");
		}
	}
	printf("--------------------------------------------------\nLa diagonal de la matriz:\n\n");
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n \nEs: ");
	for(int i=0;i<5;i++){
		printf("%d ",diag[i]);
	}
	return 0;
}
