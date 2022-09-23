#include "stdio.h"
#include "iostream"

int main(){
	int suma,num;
	suma = 0;
	printf("Introduzca numeros distintos a 0 y que no esten entre 20 y 30\n");
	do{
		scanf("%d",&num);
		if(num>=20 && num<=30){
			break;
		}
		if(num>0){
			suma+=num;
		}
	}while(num!=0);
	printf("La suma de los numeros mayores a 0 es %d\n",suma);
	return 0;
}
