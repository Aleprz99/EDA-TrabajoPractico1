/*. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima
los datos del empleado con mayor y menor salario.
*/
#include "iostream"
#include <string.h>
#include <stdio.h>

using namespace std;
struct empleado{
    string nombre;
    int salario;
};

struct empleado lista[6]{
    {"Calos Acosta", 100000},
    {"Juan Perez", 117000},
    {"Hernan Caceres", 60000},
    {"Maria Alvares", 120000},
    {"Jorge Gil", 1050000},
    {"Adriana Hernandes", 115000}
};

int main(){
    int mayor=0,menor=0;
    bool flag=false;
for(int i=1;i<6;i++){
    if(lista[menor].salario > lista[i].salario){
        menor=i;
    };
    if(lista[mayor].salario < lista[i].salario){
        mayor=i;
    }
    }

    printf("El empleado con mayor salario es %s, con un salario de %d \n", lista[mayor].nombre.c_str(), lista[mayor].salario);
    printf("El empleado con menor salario es %s, con un salario de %d \n", lista[menor].nombre.c_str(), lista[menor].salario);



    return 0;
}
