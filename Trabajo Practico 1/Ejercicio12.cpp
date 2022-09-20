#include "iostream"
#include "stdio.h"

int main(){
	int num1,num2,temp;
	printf("Ingrese el primer numero\n");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("Primer numero: %d\nSegundo numero: %d",num1,num2);
	return 0;
}
