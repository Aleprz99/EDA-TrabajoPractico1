/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números de tamaño 100, pero que 
cargue por teclado n números, y los muestre en la salida estándar los números del vector con sus índices 
asociados.*/

#include <iostream> 
#include <string>
#define  NUMERO 9 
using namespace std;
int main(){
int vector[100]={0};
string aux;
 for(int i=0;i<100;i++){
	cout<<"Ingrese el numero para el indice: "<< i<<endl;
	cin>>vector[i]; 
	cout<<"Quiere ingresar otro numero?";
	cin>>aux;
	if (aux=="no"||aux=="n"){ break;
	}
}
cout <<"-----------------------------------"<<endl;
for(int i=0;i<100;i++){
	if (i!=0 && i%5==0) cout<<endl;
	cout<< "indice "<< i<<": "<<vector[i]<<"\t";
}

return 0;

}

