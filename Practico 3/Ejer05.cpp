/*Hacer un programa en C++ para registrar los datos de tres libros como: título, autor, año y color del libro. El 
color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul.*/
#include <string.h>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef enum{rojo=1,verde,azul
}color;
typedef struct libro{
	string titulo;
	string autor;
	int anio;
	color color;
} libro;
libro libros[3];

int main(){
	cout<<color ;
	
	int hola;
	color aux;
	cout<<"Carga de libro: "<<endl;
	for (int i =0; i<3;i++){
		cout<<"Libro "<<i+1<<endl;
		cout<<"Ingrese el titulo, el autor y el año"<<endl;
		getline(cin, libros[i].titulo);
		getline(cin, libros[i].autor);
		cin>> libros[i].anio;
		cout<<"Elija un color:\n 1.Rojo \n 2.Verde 3.Azul"<<endl;
		hola=getchar();
	
	
		
	
	}
	
	return 0;
}
