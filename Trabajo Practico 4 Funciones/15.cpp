/*15. Realice una función que reciba un número y devuelva el factorial del mismo. El factorial de un 
número: es el producto del número por todos sus antecesores hasta 1. Ejemplos:
• Factorial de 0 es 1 (por definición) Se denota 0!=1
• Factorial de 1 es 1 Se denota 1!=1
• Factorial de 4= 4*3*2*1 Se denota 4!=24
• Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800*/
#include "iostream"

using namespace std;

int factorial(int a){
	int res=1;
	for(int i=1;i<=a;i++)res=res*i;
	return res;
}

int main(){
	int num;
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	while(num<0){
		cout<<"Error. Intente de nuevo"<<endl;
		cin>>num;
	}
	cout<<"Resultado: "<<factorial(num)<<endl;
	return 0;
}
