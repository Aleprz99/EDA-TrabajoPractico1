/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre,
país, numero_medallas. En el main pedir que digite el número de atletas, y a medida que los carga, devuelva
los datos (Nombre, país) del atleta que ha ganado el mayor ‘número de medallas’*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 

struct atleta{
    string nombre;
    string pais;
    int num_medallas;
};

atleta lista[20];



int main(){

            
    int aux, ref=0, mas=0;
    cout<<"Indique la cantidad de atletas que quiere agregar: ";
    cin>>aux;
    getchar();
while (ref<aux)
{
    cout<<"ingrese el nombre del atleta, el pais y la cantidad de medallas ganadas: "<< endl;
    getline(cin,lista[ref].nombre);
  
    getline(cin, lista[ref].pais);

    cin>>lista[ref].num_medallas;
getchar();
   
    if (lista[mas].num_medallas < lista[ref].num_medallas) {
	mas = ref;}
    	printf("El atleta con mas medallas es %s de %s \n", lista[mas].nombre.c_str(), lista[mas].pais.c_str());
    ref++;
};

    return 0;
}
