
/*8. Cree una estructura Persona que tenga un vector de 30 caracteres, y su edad. Declare una 
variable de tipo Persona, y use una función pedirDatos que la cargue. Use getline para cargar el 
nombre. Otra función mostrarDatos que reciba la estructura y la muestre. Declare el prototipo 
de las funciones pedirDatos y mostrarDatos. Pruébelas desde el menú principal.*/
#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;

struct persona{
	char nombre[30];
	int edad;
};
void pedirDatos(struct persona &a);
void mostrarDatos(struct persona &a);

int main(){
	
	struct persona primera;
	
	pedirDatos(primera);
	
	mostrarDatos(primera);
	
	
	return 0;
}
void pedirDatos(struct persona &a){
	string nombre;
	cout<<"Ingrese el nombre de la persona: ";
 
    scanf("%s",a.nombre);
	cout<<"Ingrese la edad: ";
	cin>>a.edad;
	
}
void mostrarDatos(struct persona &a){
	
	cout<<"-----------------------"<<endl;
	cout<<"Nombre: "<<a.nombre<<"\nEdad: "<<a.edad;
	
}


