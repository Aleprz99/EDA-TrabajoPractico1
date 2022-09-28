/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos 
vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos 
del segundo vector. Muestre el contenido del nuevo vector en la salida estándar. */

#include "iostream"
#include "conio.h"
#include "stdio.h"
#include "string.h"

using namespace std;

int main(){

	char vector1[6]="abcd";
	char vector2[6]="efghi";
	char vector3[12];
	
	strcpy(vector3,vector1);
	
	strcat(vector3, vector2);
	int i=0;
	
for (i=0;i<10;i++){

cout <<vector3[i];}
		
			return 0;
	}
	








