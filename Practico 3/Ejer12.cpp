/*Defina una estructura que sirva para representar
 a una persona. La estructura debe contener dos campos: el
nombre de la persona y un valor de tipo lógico que
 indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas 
rellene dos nuevos vectores: uno que contenga las
personas que no tienen ninguna discapacidad y otro 
que contenga las personas con discapacidad*/
#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 
typedef struct persona{
    string nombre;
    bool disc;
}persona;
persona lista[7]{
    {"Juan", true},
    {"Carlos", false},
    {"Maria", true},
    {"Hernan", false},
    {"Carmen", true},
    {"Mercedes", false},
    {"Osvaldo", false}
};
persona conDiscap[7];
persona sinDiscap[7];


int main(){

int a=0,b=0;
    for(int i=0; i<7; i++){
        if(lista[i].disc){
            conDiscap[a]=lista[i];
            a++;
        }else{
            sinDiscap[b]=lista[i];
            b++;
        }
    }
    cout<<"Personas con discapacidad:"<<endl;
for (int i=0; i<a;i++){
    cout<<"Nombre: "<<conDiscap[i].nombre<<endl;
};
cout<<"-------------------------------";
cout<<"Personas sin discapacidad: "<<endl;
for (int i=0; i<b; i++){
    cout<<"Nombre: "<<sinDiscap[i].nombre<<endl;
}
    return 0;
}
