#include "iostream"
#include "stdio.h"

int main(){
	int num;
	printf("Ingrese un numero entre 1 y 10\n");
	scanf("%i",&num);
	while(num<1 || num>10){
		printf("Numero no valido. Intente de nuevo\n");
		scanf("%i",&num);
	}
	printf("Tabla del  %i\n",num);
	for(int i=1;i<=10;i++){
		printf("%ix%i=%i\n",num,i,num*i);
	}
	return 0;
}
