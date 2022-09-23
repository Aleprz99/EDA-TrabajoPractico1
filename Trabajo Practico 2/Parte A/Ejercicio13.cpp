#include "iostream"
#include "stdio.h"

int main(){
	int n,temp_a,temp_b,aux;
	printf("Ingrese el valor de n\n");
	scanf("%d",&n);
	while(n<0){
		printf("El valor debe ser positivo. Intente de nuevo\n");
		scanf("%d",&n);
	}
	if(n>1){
		temp_a=0;
		temp_b=1;
		while(temp_a<=n){
			printf("%d ",temp_a);
			aux=temp_b;
			temp_b=temp_a;
			temp_a=aux+temp_b;
		}
		if(temp_a!=n){
			printf("\n¡¡El valor de n no se encuentra en la serie. Por lo tanto se realiza hasta el menor numero cercano a n!!");
		}
	}else if(n==1){
		printf("%d",n);
	}else{
		printf("0");
	}
	return 0;
}
