#include "iostream"
#include "stdio.h"

int doFactorial(int a){
	int fact;
	fact=1;
	for(int i=1;i<=a;i++){
		fact=fact*i;
	}
	return fact;
}

int main(){
	int n,sum;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<0){
		printf("Ingrese un valor positivo\n");
		scanf("%d",&n);	
	}
	sum=0;
	for(int i=1;i<=n;i++){
		sum+=doFactorial(i);
	}
	if(n==0){
		sum=1;
	}
	printf("El resultado de la suma de factoriales hasta %d es: %d",n,sum);
	return 0;
}

