/*EJERCICIO INTEGRADOR: Analice detalladamente el 
ejercicio antes de abordar una solución.
➢ Escribir la estructura persona con al menos 20
 caracteres para el nombre, edad, peso y la fecha de
nacimiento, que debe ser una Fecha
➢ Fecha es una estructura compuesta de su dia, mes y 
anio.
➢ Pedir en el main, los datos de la persona y cargar 
a Verónica, edad 20, peso 45, nacida el 2 de diciembre
de 1997.
➢ Escribir la estructura empleado que es una persona 
con un salario.
➢ Desde el main creamos a Esteban de 19 años que pesa
 60kg, y cumple años el 22 de julio de 1998.
Esteban cuenta con un salario de 50000$.
➢ Desde el main, nos ocuparemos de mostrar tanto a 
Esteban como a Verónica.
➢ Declarar un arreglo de trabajadores, y cargar a 
Esteban y dos trabajadores adicionales, luego mostrar
todos sus campos*/
#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 
struct fecha{
    int anio,mes,dia;
};
struct persona{
    string nombre;
    int edad;
    int peso;
    struct fecha fechaNacimiento;
};
struct empleado{
    struct persona persona;
    int salario;
};
struct persona lista[2];
int main(){
	
    for(int i=0; i<2;i++){
		cout<<"\nIngrese el nombre: ";
        getline(cin,lista[i].nombre);
        cout<<"Edad: ";
        cin>>lista[i].edad;
        cout<<"Peso: ";
        cin>>lista[i].peso;
        cout<<"Fecha de nacimiento.\n Dia: ";
        cin>>lista[i].fechaNacimiento.dia;
        cout<<" Mes: ";
        cin>>lista[i].fechaNacimiento.mes;
        cout<<" Anio: ";
        cin>>lista[i].fechaNacimiento.anio;
      	getchar();
    };
struct empleado listaEmp[3];
 memcpy((void*)&listaEmp[0].persona, (void*)&lista[1], sizeof(lista[1]));



for(int i=1; i<3;i++){
        cout<<"Ingrese el nombre del empleado: ";
        getline(cin,listaEmp[i].persona.nombre);
        cout<<"Edad: ";
        cin>>listaEmp[i].persona.edad;
        cout<<"Peso: ";
        cin>>listaEmp[i].persona.peso;
        cout<<"Fecha de nacimiento.\n Dia: ";
        cin>>listaEmp[i].persona.fechaNacimiento.dia;
        cout<<" Mes: ";
        cin>>listaEmp[i].persona.fechaNacimiento.mes;
        cout<<" Anio: ";
        cin>>listaEmp[i].persona.fechaNacimiento.anio;
        cout<<"Ingrese el salario: ";
        cin>>listaEmp[i].salario;
        getchar();
    }
    
    cout<<"----Lista de las personas-----"<<endl;
    for(int i=0; i<2;i++){
    	printf("Nombre: %s, \nEdad: %d; \nPeso: %d;\nFecha de nacimeinto: %d-%d-%d.\n", 
		lista[i].nombre.c_str(), lista[i].edad, lista[i].peso, lista[i].fechaNacimiento.dia, lista[i].fechaNacimiento.mes,lista[i].fechaNacimiento.anio );
	}
	cout<<"-----Lista de empleados-----------"<<endl;
	for(int i=0; i<3;i++){
    	printf("Nombre: %s, \n Edad: %d; \n Peso: %d;\n Fecha de nacimeinto: %d-%d- %d.\n Salario: %d.\n", 
		listaEmp[i].persona.nombre.c_str(), listaEmp[i].persona.edad, listaEmp[i].persona.peso, listaEmp[i].persona.fechaNacimiento.dia, listaEmp[i].persona.fechaNacimiento.mes,listaEmp[i].persona.fechaNacimiento.anio, listaEmp[i].salario );
	}
    return 0;
}
