/*EJERCICIO INTEGRADOR: Analice detalladamente el ejercicio antes de abordar una solución.
- Escribir la estructura persona con al menos 20 caracteres para el nombre, edad, peso y la fecha de 
nacimiento, que debe ser una Fecha
- Fecha es una estructura compuesta de su dia, mes y anio.
- Pedir en el main, los datos de la persona y cargar a Verónica, edad 20, peso 45, nacida el 2 de diciembre 
de 1997.
- Escribir la estructura empleado que es una persona con un salario.
- Desde el main creamos a Esteban de 19 años que pesa 60kg, y cumple años el 22 de julio de 1998. 
Esteban cuenta con un salario de 50000$.
- Desde el main, nos ocuparemos de mostrar tanto a Esteban como a Verónica.
- Declarar un arreglo de trabajadores, y cargar a Esteban y dos trabajadores adicionales, luego mostrar 
todos sus campos*/

#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

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

using namespace std;

void mostrarMes(int a){
	switch(a){
		case 1:
			cout<<"enero";
			break;
		case 2:
			cout<<"febrero";
			break;
		case 3:
			cout<<"marzo";
			break;
		case 4:
			cout<<"abril";
			break;
		case 5:
			cout<<"mayo";
			break;
		case 6:
			cout<<"junio";
			break;
		case 7:
			cout<<"julio";
			break;
		case 8:
			cout<<"agosto";
			break;
		case 9:
			cout<<"septiembre";
			break;
		case 10:
			cout<<"octubre";
			break;
		case 11:
			cout<<"noviembre";
			break;
		case 12:
			cout<<"diciembre";
			break;
	}
}

typedef struct Fecha{
	int dia;
	int mes;
	int anio;
}Fecha;

typedef struct Persona{
	char nombre[20];
	int edad;
	float peso;
	Fecha nacimiento;
}Persona;

typedef struct Empleado{
	Persona trabajador;
	int salario;
}Empleado;

int main(){
	int people,employees;
	cout<<"Ingrese la cantidad total de personas a ingresar"<<endl;
	cin>>people;
	while(people<0){
		cout<<"Cantidad no valida. Ingrese de nuevo"<<endl;
		cin>>people;
	}
	cout<<"Ingrese la cantidad de empleados"<<endl;
	cin>>employees;
	while(employees>people || employees<0){
		cout<<"Cantidad no valida. Ingrese de nuevo"<<endl;
		cin>>employees;
	}
	
	Empleado empleados[employees];
	Persona personas[people-employees];
	
	if(people!=employees){
		for(int i=0;i<(people-employees);i++){
			limpiarPantalla();
			cout<<"Personas"<<endl;
			cout<<"Nombre: "<<endl;
			cin>>personas[i].nombre;
			cout<<"Edad: "<<endl;
			cin>>personas[i].edad;
			cout<<"Fecha de nacimiento (Formato dd/mm/aa):"<<endl;
			cout<<"Dia: "<<endl;
			cin>>personas[i].nacimiento.dia;
			while(personas[i].nacimiento.dia >31 || personas[i].nacimiento.dia<0){
				cout<<"Error. Intente de nuevo"<<endl;
				cin>>personas[i].nacimiento.dia;
			}
			cout<<"Mes: "<<endl;
			cin>>personas[i].nacimiento.mes;
			while(personas[i].nacimiento.mes >12 || personas[i].nacimiento.mes<0){
				cout<<"Error. Intente de nuevo"<<endl;
				cin>>personas[i].nacimiento.mes;
				if(personas[i].nacimiento.mes==2 && personas[i].nacimiento.dia>29){
					personas[i].nacimiento.mes=0;
				}
			}
			cout<<"Año: "<<endl;
			cin>>personas[i].nacimiento.anio;
			while(personas[i].nacimiento.anio >2022 || personas[i].nacimiento.anio<0){
				cout<<"Error. Intente de nuevo"<<endl;
				cin>>personas[i].nacimiento.anio;
			}
			cout<<"Peso: "<<endl;
			cin>>personas[i].peso;
			while(personas[i].peso<0){
				cout<<"Error. Intente de nuevo"<<endl;
				cin>>personas[i].peso;
			}
		}
	}
	for(int i=0;i<employees;i++){
		limpiarPantalla();
		cout<<"Empleados"<<endl;
		cout<<"Nombre: "<<endl;
		cin>>empleados[i].trabajador.nombre;
		cout<<"Edad: "<<endl;
		cin>>empleados[i].trabajador.edad;
		cout<<"Fecha de nacimiento (Formato dd/mm/aa):"<<endl;
		cout<<"Dia: "<<endl;
		cin>>empleados[i].trabajador.nacimiento.dia;
		while(empleados[i].trabajador.nacimiento.dia >31 || empleados[i].trabajador.nacimiento.dia<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>empleados[i].trabajador.nacimiento.dia;
		}
		cout<<"Mes: "<<endl;
		cin>>empleados[i].trabajador.nacimiento.mes;
		while(empleados[i].trabajador.nacimiento.mes >12 || empleados[i].trabajador.nacimiento.mes<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>empleados[i].trabajador.nacimiento.mes;
			if(empleados[i].trabajador.nacimiento.mes==2 && empleados[i].trabajador.nacimiento.dia>29){
				empleados[i].trabajador.nacimiento.mes=0;
			}
		}
		cout<<"Año: "<<endl;
		cin>>empleados[i].trabajador.nacimiento.anio;
		while(empleados[i].trabajador.nacimiento.anio >2022 || empleados[i].trabajador.nacimiento.anio<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>empleados[i].trabajador.nacimiento.anio;
		}
		cout<<"Peso: "<<endl;
		cin>>empleados[i].trabajador.peso;
		while(empleados[i].trabajador.peso<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>empleados[i].trabajador.peso;
		}
		cout<<"Salario:"<<endl;
		cin>>empleados[i].salario;
		while(empleados[i].salario<0){
			cout<<"Error. Intente de nuevo"<<endl;
			cin>>empleados[i].salario;
		}
	}
	limpiarPantalla();
	if(people!=employees){
		cout<<"Personas Registradas:"<<endl;
		for(int i=0;i<(people-employees);i++){
			cout<<personas[i].nombre<<" de "<<personas[i].edad<<" años, que pesa "<<personas[i].peso<<"kg, y nacio el "<<personas[i].nacimiento.dia<<" de ";
			mostrarMes(personas[i].nacimiento.mes);
			cout<<" de "<<personas[i].nacimiento.anio<<endl;
		}
	}
	cout<<"Empleados Registrados"<<endl;
	for(int i=0;i<employees;i++){
		cout<<empleados[i].trabajador.nombre<<" de "<<empleados[i].trabajador.edad<<" años, que pesa "<<empleados[i].trabajador.peso<<" kg, y nacio el "<<empleados[i].trabajador.nacimiento.dia<<" de ";
		mostrarMes(empleados[i].trabajador.nacimiento.mes);
		cout<<" de "<<empleados[i].trabajador.nacimiento.anio<<". Cuenta con un salario de $"<<empleados[i].salario<<endl;
	}
	return 0;
}
