/*Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. Se guarda 
de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura 
que guarda una persona, y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.
*/
#include <string.h>
#include <cstdio>
#include <iostream>
using namespace std;
struct fecha{
	int dia,mes,anio;
};
struct persona{
	string nombre;
	int edad;
	int peso;
	struct fecha fecha;
	}carlos = {"Carlos",40,78, {12,12,1980}};
	
struct trabajador{
	struct persona persona;
	int salario;
} raul ={{"Raul",40,78,{05,06,1990}},50000};

int main(){
	printf("Persona: %s, edad: %d, peso: %d, fecha: %d-%d-%d \n", carlos.nombre.c_str(),carlos.edad, 
	carlos.peso , carlos.fecha.dia,carlos.fecha.mes, carlos.fecha.anio);
	
	printf("Trabajador: %s, edad: %d, peso: %d, fecha: %d-%d-%d, salario: %d ", raul.persona.nombre.c_str(),raul.persona.edad, 
	raul.persona.peso , raul.persona.fecha.dia,raul.persona.fecha.mes,raul.persona.fecha.anio, raul.salario);
	return 0;
	
}
