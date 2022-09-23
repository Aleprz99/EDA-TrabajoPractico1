#include "iostream"
#include "stdio.h"

#define DIMENSION 6

int main(){
	int vector[DIMENSION];
	bool orden=true;
	printf("Ingrese los numeros del vector de %d lugares\n",DIMENSION);
	for(int i=0;i<DIMENSION;i++){
		scanf("%d",&vector[i]);
		if(i>0){
			if(vector[i]<vector[i-1]){
				orden = false;	
			}
		}
	}
	if(orden){
		printf("SI");
	}else{
		printf("NO");
	}
	return 0;
}
