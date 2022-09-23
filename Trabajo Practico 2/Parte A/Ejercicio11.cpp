#include "iostream"
#include "stdio.h"
#include "math.h"

int main(){
	int n,suma;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<0){
		printf("Ingrese un valor positivo\n");
		scanf("%d",&n);	
	}
	suma = 0;
	if(n==0){
		suma=1;
	}
	for(int i=1;i<=n;i++){
		suma+=pow(2,i);
	}
	printf("El resultado es: %d",suma);
	return 0;
}
