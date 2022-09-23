#include "iostream"
#include "stdio.h"

int main(){
	int suma,n;
	suma = 0;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<=0){
		printf("Valor no valido. Intente de nuevo\n");
		scanf("%d",&n);
	}
	for(int i=0;i<(2*n);i++){
		suma+=i;
	}
	printf("La sumatoria es: %d",suma);
	return 0;
}
