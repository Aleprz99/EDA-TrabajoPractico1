/*14. Opcional. En un comercio trabajan 20 vendedores, distribuidos en 4 secciones (bazar, accesorios, 
indumentaria, calzados). Se pide que se almacene la información de sus empleados.
• Defina la estructura principal empleado se dese saber: nombre, legajo, sector, ventas diarias de cada día 
de la semana, ventas totales de esa semana (calculable). 
El comercio, tiene una política de premios semanales por ventas; para esto, al fin de cada semana determina 
cuales son los vendedores con mayores ventas por sector, y se guarda en Premiados.
• Defina la estructura secundaria Premiados para almacenar por cada sector, legajo del empleado de mayor 
venta semanal y total vendido.
Realice un programa que permita:
a. Cargar los datos de los empleados
b. Calcular el total de ventas semanales por vendedor.
c. Determinar por cada sector, el vendedor con mayores ventas, esta información debe ser almacenada en la 
segunda estructura.
d. Mostrar los nombres de los empleados premiados en una semana.
e. Listar todos los empleados y el total vendido.*/
#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#define SELLERS 20

//Esta funcion es para limpiar la pantalla independientemente del SO
#ifdef _WIN32
  #include<windows.h>
#endif  

void limpiarPantalla(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
//-------------------------------------------------------------------

struct empleado{
	char nombre[20];
	int legajo;
	char sector[20];
	int ventasdiarias[7];
	int ventastotales; 
}vendedores[SELLERS];
struct premiados{
	int bazar[2]={0};
	int accesorios[2]={0};
	int indumentaria[2]={0};
	int calzados[2]={0};
}premiados;

using namespace std;

int main(){
	cout<<"Ingrese los datos de los vendedores: "<<endl;
	for(int i=0;i<SELLERS;i++){
		cout<<"Empleado no. "<<i+1<<endl;
		cout<<"Nombre:"<<endl;
		cin>>vendedores[i].nombre;
		cout<<"Legajo:"<<endl;
		cin>>vendedores[i].legajo;
		cout<<"Sector <Bazar>,<Accesorios>,<Indumentaria>,<Calzados>):"<<endl;
		cin>>vendedores[i].sector;
		vendedores[i].ventastotales=0;
		while(strcmp(vendedores[i].sector,"Bazar")!=0 && strcmp(vendedores[i].sector,"Accesorios")!=0 && strcmp(vendedores[i].sector,"Indumentaria")!=0 && strcmp(vendedores[i].sector,"Calzados")!=0){
			cout<<"Sector no encontrado. Intente de nuevo"<<endl;
			cin>>vendedores[i].sector;
		}
		for(int j=0;j<7;j++){
			switch(j){
				case 0:
					cout<<"Ventas lunes:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 1:
					cout<<"Ventas martes:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 2:
					cout<<"Ventas miercoles:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 3:
					cout<<"Ventas jueves:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 4:
					cout<<"Ventas viernes:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 5:
					cout<<"Ventas sabado:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;
				case 6:
					cout<<"Ventas domingo:"<<endl;
					cin>>vendedores[i].ventasdiarias[j];
					vendedores[i].ventastotales = vendedores[i].ventastotales+vendedores[i].ventasdiarias[j];
					break;		
			}	
		}
		if(strcmp(vendedores[i].sector,"Bazar")==0){
			if(premiados.bazar[0]<vendedores[i].ventastotales){
				premiados.bazar[0]=vendedores[i].ventastotales;
				premiados.bazar[1]=vendedores[i].legajo;
			}
		}else if(strcmp(vendedores[i].sector,"Accesorios")==0){
			if(premiados.accesorios[0]<vendedores[i].ventastotales){
				premiados.accesorios[0]=vendedores[i].ventastotales;
				premiados.accesorios[1]=vendedores[i].legajo;
			}
		}else if(strcmp(vendedores[i].sector,"Indumentaria")==0){
			if(premiados.indumentaria[0]<vendedores[i].ventastotales){
				premiados.indumentaria[0]=vendedores[i].ventastotales;
				premiados.indumentaria[1]=vendedores[i].legajo;
			}
		}else{
			if(premiados.calzados[0]<vendedores[i].ventastotales){
				premiados.calzados[0]=vendedores[i].ventastotales;
				premiados.calzados[1]=vendedores[i].legajo;
			}
		}
		limpiarPantalla();
	}
	cout<<"Premiados:"<<endl;
	cout<<"Sector BAZAR:"<<endl;
	cout<<"Legajo: "<<premiados.bazar[1]<<endl<<"Ventas diarias totales: "<<premiados.bazar[0]<<endl;
	cout<<"Sector ACCESORIOS:"<<endl;
	cout<<"Legajo: "<<premiados.accesorios[1]<<endl<<"Ventas diarias totales: "<<premiados.accesorios[0]<<endl;
	cout<<"Sector INDUMENTARIA:"<<endl;
	cout<<"Legajo: "<<premiados.indumentaria[1]<<endl<<"Ventas diarias totales: "<<premiados.indumentaria[0]<<endl;
	cout<<"Sector CALZADOS:"<<endl;
	cout<<"Legajo: "<<premiados.calzados[1]<<endl<<"Ventas diarias totales: "<<premiados.calzados[0]<<endl;
	return 0;
}
