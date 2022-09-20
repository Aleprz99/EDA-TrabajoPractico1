#include "iostream"
#include "stdio.h"

using namespace std;

int main(){
	
	char name[20];
	int edad;
	
	cout<<"Ingrese el nombre (Maximo 20 caracteres)"<<endl;
	scanf("%s",&name);
	printf("Ingrese el año de nacimiento\n");
	scanf("%i",&edad);
	edad = 2022-edad;
	printf("%s tiene %i anios",name,edad);
	return 0;
}
