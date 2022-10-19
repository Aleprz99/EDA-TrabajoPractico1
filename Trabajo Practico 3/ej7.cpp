#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct estudiante{
    char nombre[100];
    int edad;
    float promedio;
};
 
 int main() {
    estudiante estudiantes[3];
    int flag=1;
    char nombre1[100];
    float mejorProm;
    for(int i=0; i<3;i++){
        do{
            cout<<"ingrese el nombre del alumno "<<i+1<< "."<<endl;
            cin.getline(nombre1,100,'\n');
            flag=1;
            for(int j=0; j<3;j++){
                if((strcasecmp(estudiantes[j].nombre , nombre1))==0){
                    cout<<"Existe un alumno registrado con ese nombre."<<endl;
                    flag=0;
                }
            }
        }while(flag==0);
        strcpy(estudiantes[i].nombre, nombre1);
        cout<<"ingrese la edad del alumno "<<i+1<< "."<<endl;
        cin>>estudiantes[i].edad;
        cin.ignore();
        cout<<"ingrese el promedio del alumno "<<i+1<< "."<<endl;
        cin>>estudiantes[i].promedio;
        cin.ignore();
    }
    for(int k=0; k<3; k++){
        if(mejorProm<estudiantes[k].promedio){
            mejorProm=estudiantes[k].promedio;
        }
    }
    for(int l=0; l<3; l++){
        if(mejorProm==estudiantes[l].promedio){
            cout<<"El estudiante con mejor promedio es: "<<endl;
            cout<<"Nombre: "<< estudiantes[l].nombre<<endl;
            cout<<"Edad: "<< estudiantes[l].edad<<endl;
            cout<<"Promedio: "<< estudiantes[l].promedio<<endl;
        }
    }

    
    return 0;
 }