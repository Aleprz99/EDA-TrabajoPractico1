#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
struct persona{
    string nombre;
    string sexo;
    int edad;
    int telefono;   
};
void cargaVector(persona vect[5]);
void muestraVector(persona vect[5]);
int main(){
    persona vect[5];
    cargaVector(vect);
    muestraVector(vect);
    return 0;
}
void cargaVector(persona vect[5]){
    for (int i=0; i<5; i++){
        cout<<"Datos persona "<<i+1<<endl;
        cout<<"Ingrese el nombre."<<endl;
        cin>>vect[i].nombre;
        cout<<"Ingrese la edad."<<endl;
        cin>>vect[i].edad;
        cin.ignore();
        cout<<"Ingrese el sexo."<<endl;
        cin>>vect[i].sexo;
        cout<<"Ingrese el numero de telefono."<<endl;
        cin>>vect[i].telefono;
        cin.ignore();

    }
}
void muestraVector(persona vect[5]){
    cout<<"Personas mayores de 30. "<<endl;
    for (int i =0; i<5; i++){
        if(vect[i].edad>=30){
            cout<<"Nombre: "<<vect[i].nombre<<endl;
            cout<<"Edad: "<< vect[i].edad<<endl;
            cout<<"Sexo: "<<vect[i].sexo<<endl;
            cout<<"Telefono: "<<vect[i].telefono<<endl;
        }
    }
}
