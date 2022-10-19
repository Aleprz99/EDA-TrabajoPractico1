/*Cree una estructura profesor, con nombre, cargo,
 materia, y carga horaria. Declare 2 profesores con estos 
valores (fuera del main): Ej: Profe. Cristina, Titular
, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 
15hs. Luego en el main, muestre ambos profesores concatenados a sus materias. Sugerencia getline para los 
char[]*/

#include <iostream>
#include "string.h"
#include <cstdio>
using namespace std;
struct profesor{
	string nombre, cargo, materia;
	int cargaHoraria;
};
struct profesor profes[2]={{"Cristina","Titular","Gestion de datos",20},{"Fabiana", "Jefa TP","Matematica",15}};
main(){
	for (int i=0;i<2;i++){
		printf("Nombre: %s, Cargo: %s, Materia: %s, Carga horaria: %d \n\n", profes[i].nombre.c_str(),
		 profes[i].cargo.c_str(),profes[i].materia.c_str(),profes[i].cargaHoraria);
	}	
	
	return 0;
	
}
