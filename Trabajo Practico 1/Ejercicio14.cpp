#include "iostream"
#include "stdio.h"

int main(){
	
	int hora,minutos,segundos,total;
	
	printf("Ingrese los segundos\n");
	scanf("%d",&total);
	hora = total/3600;
	minutos = (total-(hora*3600))/60;
	segundos = total-(hora*3600)-(minutos*60);
	printf("%02d:%02d:%02d",hora,minutos,segundos);
	return 0;
}
