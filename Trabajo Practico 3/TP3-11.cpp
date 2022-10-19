/*11. Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres 
campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado 
en correr todas las etapas.*/
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

using namespace std;

struct Etapa{
	int horas;
	int minutos;
	int segundos;
}Etapa;

int main(){
	int n;
	int total = 0;
	cout<<"Ingrese la cantidad de etapas del ciclista"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"------------------------------"<<endl;
		cout<<"Ingrese los segundos:"<<endl;
		cin>>Etapa.segundos;
		while(Etapa.segundos>=60 || Etapa.segundos<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>Etapa.segundos;
		}
		total+=Etapa.segundos;
		cout<<"Ingrese los minutos:"<<endl;
		cin>>Etapa.minutos;
		while(Etapa.minutos>=60 || Etapa.minutos<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>Etapa.minutos;
		}
		total+=Etapa.minutos*60;
		cout<<"Ingrese las horas:"<<endl;
		cin>>Etapa.horas;
		while(Etapa.horas<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>Etapa.horas;
		}
		total+=Etapa.horas*3600;
	}
	int hours=total/3600;
	int minutes=(total-(hours*3600))/60;
	int seconds=total-(minutes*60)-(hours*3600);
	printf("El total del tiempo empleado del ciclista es de:\n%02d:%02d:%02d",hours,minutes,seconds);
	return 0;
}
