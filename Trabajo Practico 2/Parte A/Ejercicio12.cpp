#include "iostream"
#include "stdio.h"

int main(){
	int n,suma;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<0){
		printf("Valor no valido. Intente de nuevo\n");
		scanf("%d",&n);
	}
	suma=0;
	for(int i=0;i<=n;i++){
		if((i%2) == 0){
			suma+=i*(-1);
		}else{
			suma+=i;
		}
	}
	printf("El resultado es: %d\n",suma);
	return 0;
}
