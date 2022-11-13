/*11. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido 
por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879.*/
#include "iostream"
using namespace std;

float fraccionaria(float a){
	int b=a;
	float total= a-b;
	return total;
}
int main(){
	float a;
	cout<<"Ingrese un numero con decimales: ";
	cin>>a;
	cout<<"La parte decimal del numero es: "<<fraccionaria(a);
	
	return 0;
}
