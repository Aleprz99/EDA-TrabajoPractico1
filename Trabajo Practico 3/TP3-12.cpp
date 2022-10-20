/*12. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el 
nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad. 
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las 
personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.*/
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

using namespace std;

typedef struct Persona{
	char nombre[20];
	bool discapacidad;
}Persona;

int main(){
	int n;
	cout<<"Ingrese la cantidad de personas"<<endl;
	cin>>n;
	while(n<0){
		cout<<"Numero no valido. Intente de nuevo"<<endl;
		cin>>n;
	}
	Persona persona[n];
	char opc;
	int disc=0;
	for(int i=0;i<n;i++){
		cout<<"Persona "<<i+1<<endl<<"Ingrese el nombre de la persona:"<<endl;
		cin>>persona[i].nombre;
		cout<<"¿La persona tiene alguna discapacidad?"<<endl<<"<Y> Si // <N> No"<<endl;
		cin>>opc;
		while(opc != 'Y' && opc != 'N'){
			cout<<"Ingrese una opcion valida"<<endl;
			cin>>opc;
		}
		if(opc=='Y'){
			persona[i].discapacidad=true;
			disc++;
		}else{
			persona[i].discapacidad=false;
		}
	}
	char persona_disc[disc][20];
	char persona_ndisc[n-disc][20];
	int j=0;
	int k=0;
	for(int i=0;i<n;i++){
		if(persona[i].discapacidad){
			strcpy(persona_disc[j],persona[i].nombre);
			j++;
		}else{
			strcpy(persona_ndisc[k],persona[i].nombre);
			k++;
		}
	}
	cout<<"Personas con discapacidad:"<<endl;
	for(int i=0;i<j;i++)printf("%s\n",persona_disc[i]);
	cout<<"--------------------------------"<<endl;
	cout<<"Personas sin discapacidad:"<<endl;
	for(int i=0;i<k;i++)printf("%s\n",persona_ndisc[i]);
	return 0;
}
