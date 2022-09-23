#include "iostream"
#include "stdio.h"

int main(){
	int suma,num;
	suma = 0;
	printf("Ingrese numeros distintos de 0\n");
	do{
		scanf("%d",&num);
		if(num>0){
			suma++;
		}
	}while(num!=0);
	printf("Se encontraron %d numeros mayores a 0\n",suma);
	return 0;
}
