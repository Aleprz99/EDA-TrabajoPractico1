/*10. Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una 
potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá 
ser el segundo valor transmitido a la función.*/

#include "iostream"
#include "math.h"
using namespace std;
int funpot(int a, int b){
	
	
	return pow(a,b);
}

int main(){
	int a,b;
	cout<<"Ingrese la base de la potencia: ";
	cin>>a;
	cout<<"Ingrese el exponente positivo: ";
	cin>>b;
	while(b<=0){
		cout<<"Debe ingresar un numero mayor a 0: ";
		cin>>b;
	}
	cout<<"El resultado es: "<<funpot(a,b);
	
	return 0;
}
