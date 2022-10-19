/*Hacer una estructura llamada Corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, 
club, pedir datos al usuario para un corredor, y asignarle una Categoría de competición (use strcpy para copiar 
a la variable) según sea:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct corredor{
	string nombre;
	int edad;
	string sexo;
	string club;
	char categoria[];
	}corredor;

int main(){
	corredor corredor;
	char cat1[]="Juvenil";
	char cat2[]="Señor";
	char cat3[]="Veterano";
	char auxi[]="a";
		cout<<"Carga del corredor"<<endl;
		cout<<"Nombre: ";
		getline(cin, corredor.nombre);
		cout<<("Sexo: ");
		getline(cin, corredor.sexo);
		cout<<"Edad: ";
		cin>>corredor.edad;
		getchar();
		cout<<"Club: ";
		getline(cin,corredor.club);
		if (corredor.edad<=18){
		 strcpy( corredor.categoria, cat1);
		} else if(corredor.edad<=40){
		strcpy(corredor.categoria, "Señor");
		
	}else{strcpy(corredor.categoria, "Veterano");
	};
	cout<<"\n-------------------Datos del corredor------------------"<<endl;
		printf("Nombre: %s. \nSexo: %s.\nEdad: %d. \nClub: %s. \nCategoria: %s\n", 
		corredor.nombre.c_str(),corredor.sexo.c_str(),corredor.edad, corredor.club.c_str(), corredor.categoria);
		cout<<"-----------------------------------------------------------"<<endl;
	
	
	
	return 0;
}
