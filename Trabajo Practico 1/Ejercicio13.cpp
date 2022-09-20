#include "iostream"
#include "stdio.h"

int main(){
	
	int hora,minutos,segundos,total;
	
	printf("Ingrese la hora\n");
	scanf("%d",&hora);
	printf("Ingrese los minutos\n");
	scanf("%d",&minutos);
	printf("Ingrese los segundos\n");
	scanf("%d",&segundos);
	total = (hora*3600)+(minutos*60)+segundos;
	printf("La hora en segundos es: %d",total);
	return 0;
}
