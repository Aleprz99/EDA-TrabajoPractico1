#include "stdio.h"
#include "iostream"

int main(){
	float temp,min,max;
	printf("Ingrese la temperatura\n");
	scanf("%f",&temp);
	min=temp;
	max=temp;
	for(int i=0;i<5;i++){
		printf("Ingrese la temperatura\n");
		scanf("%f",&temp);
		if(temp<min){
			min=temp;
		}
		if(temp>max){
			max=temp;
		}
	}
	printf("La temperatura maxima es: %0.1f\nLa temperatura minima es: %0.1f",max,min);
	return 0;
}


