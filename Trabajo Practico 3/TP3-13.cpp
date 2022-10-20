/*13. Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día. Luego defina 
un arreglo en el que cargara todos estos datos para un mes. Realice un programa que cargue la estructura 
antes definida y calcule el promedio de temperaturas máximas y el promedio de temperaturas mínimas del 
mes.*/

#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define DIAS 5

using namespace std;

struct Month{
	int num_dia;
	char nom_dia[20];
	float max;
	float min;
}month[DIAS];

int main(){
	float prom_max=0;
	float prom_min=0;
	for(int i=0;i<DIAS;i++){
		cout<<"Ingrese el numero del dia"<<endl;
		cin>>month[i].num_dia;
		cout<<"Ingrese el nombre del dia"<<endl;
		cin>>month[i].nom_dia;
		cout<<"Ingrese la temperatura maxima"<<endl;
		cin>>month[i].max;
		prom_max+=month[i].max;
		cout<<"Ingrese la temperatura minima"<<endl;
		cin>>month[i].min;
		prom_min+=month[i].min;
	}
	prom_max=prom_max/DIAS;
	prom_min=prom_min/DIAS;
	cout<<"El promedio de temperaturas maximas es: "<<prom_max<<endl;
	cout<<"El promedio de temperaturas minimas es: "<<prom_min<<endl;
	return 0;
}
