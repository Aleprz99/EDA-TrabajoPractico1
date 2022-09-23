#include "iostream"
#include "stdio.h"

int main(){
	int x,y,total;
	printf("Ingrese el valor de x:\n");
	scanf("%d",&x);
	while(x<0){
		printf("El valor debe ser positivo\n");
		scanf("%d",&x);
	}
	total=x;
	printf("Ingrese el valor de y:\n");
	scanf("%d",&y);
	while(y<0){
		printf("El valor debe ser positivo\n");
		scanf("%d",&y);
	}
	for(int i=1;i<y;i++){
		total=total*x;
	}
	printf("%d^%d=%d\n",x,y,total);
	return 0;
}
