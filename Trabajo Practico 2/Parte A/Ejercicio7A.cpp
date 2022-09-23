#include "iostream"
#include "stdio.h"

int main(){
	int suma,it,n;
	suma = 0;
	it = 0;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<=0){
		printf("Valor no valido. Intente de nuevo\n");
		scanf("%d",&n);
	}
	while(it<n){
		it++;
		suma+=it;
	}
	printf("La sumatoria es: %d",suma);
	return 0;
}
