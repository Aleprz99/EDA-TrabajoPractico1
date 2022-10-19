/* practico 3. ejercicio 1
Declare una estructura llamada struct DiscoCompacto, que guarde el título, artista, numero de canciones,
precio, año de lanzamiento. Use typedef para declarar el alias del struct como CD.
Declare 3 variables de tipo DiscoCompacto, dos globales y una local al main.
Iterar usando strlen para mostrar el nombre de cada artista, solo si la longitud del artista, si es mayor a 10
letras. Luego compare si dos títulos son del mismo artista.*/

#include <iostream>
#include <string.h>
using namespace std;

typedef struct DiscoCompacto{
	string titulo;
	string artista;
	int numCanciones;
	double precio;
	int anio;
}cd;

int main(){
	cd lista[3];
	
	
	lista[0].titulo ="hola";
		lista[0].artista="Pedro Aznar";
		lista[0].numCanciones=11;
		lista[0].anio= 2020;
	lista[0].precio=1000.00;


	lista[1].titulo="adios";
	lista[1].artista="Pepe biondi";
	lista[1].numCanciones= 10;
	lista[1].anio;
 
 for(int i=0;i<3;i++){
 	cout<<lista[i].artista<<endl;
 	cout<<lista[i].titulo<<endl;
 	cout<<lista[i].numCanciones<<endl;
 	cout<<lista[i].anio<<endl;
 	cout<<lista[i].precio<<endl;
 }
	
	return 0;
}
