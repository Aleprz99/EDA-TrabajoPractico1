#include "iostream"
#include "stdio.h"

int main(){
	int suma=0;
	for(int i=1;i<=10;i++){
		suma+=i*i;
	}
	printf("La suma de los cuadrados de los primeros 10 enteros mayores a 0 es: %d",suma);
	return 0;
}
