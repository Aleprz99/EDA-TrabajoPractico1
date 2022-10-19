/*Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes Campos: Nombre, edad,
promedio, pedir datos al usuario para 3 estudiantes, comprobar cuál de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno. Use strcasecmp para comparar las cadenas y determinar si
sus nombres son iguales. Ej> Marco Sosa y Marco Perez.*/

#include "iostream"
#include <string.h>
#include <stdio.h>

using namespace std;
struct estudiante{
string nombre;
float edad,promedio;
};
struct estudiante lista[3];



int main(){
float aux=0;
int indice=0;
    for(int i=0; i<3; i++){
    cout<<"Ingrese el nombre: ";
    getline(cin, lista[i].nombre);
    cout<<"ingrese la edad: ";
    cin>>lista[i].edad;
    cout<<"ingrese el promedio: ",
    cin>>lista[i].promedio;
    getchar();
    cout<<"----------------------------------------"<<endl;
    if (lista[i].promedio>aux){
        aux=lista[i].promedio;
        indice=i;
    }

}
cout<<"El alumno con mayor promedio es: "<<lista[indice].nombre<<", con un promedio de "<<aux<<endl; 
if (0==strcasecmp(lista[0].nombre.c_str(), lista[1].nombre.c_str())){
    cout<<"el primer alumno tiene el mismo nombre que el segundo"<<endl;}
if (0==strcasecmp(lista[0].nombre.c_str(), lista[2].nombre.c_str())){
    cout<<"el primer alumno tiene el mismo nombre que el tercero"<<endl;};
    if (0==strcasecmp(lista[2].nombre.c_str(), lista[1].nombre.c_str())){
    cout<<"el tercer alumno tiene el mismo nombre que el segundo"<<endl;};
    

    return 0;

}
