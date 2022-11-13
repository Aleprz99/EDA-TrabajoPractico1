/*7. Declare un vector Vec de tamaño TAM constante. Cree una función Cuadrado, a la cual se le 
envíe Vec y lo modifique con el cuadrado de sus valores. Otra función que lo muestre. Reutilice.
*/

#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;

const int  TAM=  9;


void cuadrado(int vec[]){

	for(int i=0;i<TAM; i++){
		vec[i]*=vec[i];
		
	};
}
void muestra(int vec[]){
	
		for(int i=0;i<TAM; i++){
		cout<<vec[i]<<endl;
		
	};
	
}
int main(){
	
	int vec[TAM], aux=2;
	for(int i=0;i<TAM; i++){
		vec[i]=aux;
		aux++;
	};
	cout<<"El vector sin modificar: "<<endl;
	muestra(vec);
	cuadrado(vec);
	cout<<"El vector modificado: "<<endl;
	muestra(vec);
	
	return 0;
}
