/*Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y 
muestre el segundo arreglo.
 */

#include "iostream"
#include "conio.h"
#include "stdio.h"
#include "ctype.h"
#include "string.h"

using namespace std;

int main(){

int numero, i;
int vector1[5];
int vector2[5];
printf("ingrese 5 numeros al arreglo \n");

for (i=0;i<5;i++){
		
		cin>> numero;
	while  (!cin.good()) {
		
	cout<< "el numero ingresado en un caracter \n";
	cin.clear();
	cin.ignore();
	cin>> numero;
	
	}
	vector1[i]= numero;
}
for (i=0;i<5;i++){
	int numero;
	numero=vector1[i];
	vector2[i]=numero *2; 
		cout <<vector2[i]<<"\n";
	}


	getch();
			return 0;
	}
	








