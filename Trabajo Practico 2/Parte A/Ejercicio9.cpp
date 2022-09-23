#include "iostream"
#include "stdio.h"

int main(){
	int n,sum;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<0){
		printf("Ingrese un valor positivo\n");
		scanf("%d",&n);	
	}
	sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	if(n==0){
		sum=1;
	}
	printf("El resultado de %d! es: %d",n,sum);
	return 0;
}
