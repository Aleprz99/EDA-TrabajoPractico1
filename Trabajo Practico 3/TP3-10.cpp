#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;
struct promedio{
    double nota1;
    double nota2;
    double nota3;
};
struct alumno{
    char nombre[100];
    char sexo[15];
    int edad;
    promedio prom;

};
 
 int main() {
    alumno alumnos[2];
    int j;
    double mayProm;
    for(int i=0; i<2;i++){
        cout<<"ingrese el nombre del alumno "<<i+1<<"."<<endl;
        cin.getline(alumnos[i].nombre,100,'\n');
        cout<<"ingrese el sexo del alumno "<<i+1<<"."<<endl;
        cin.getline(alumnos[i].sexo,15,'\n');
        cout<<"ingrese la edad del alumno "<<i+1<<"."<<endl;
        cin>>alumnos[i].edad;
        cin.ignore();
        cout<<"ingrese primer nota del alumno "<<i+1<<"."<<endl;
        cin>>alumnos[i].prom.nota1;
        cin.ignore();
        cout<<"ingrese segunda nota del alumno "<<i+1<<"."<<endl;
        cin>>alumnos[i].prom.nota2;
        cin.ignore();
        cout<<"ingrese tercer nota del alumno "<<i+1<<"."<<endl;
        cin>>alumnos[i].prom.nota3;
        cin.ignore();
        if(mayProm<(((alumnos[i].prom.nota1)+(alumnos[i].prom.nota2)+(alumnos[i].prom.nota3))/3)){
            mayProm=(((alumnos[i].prom.nota1)+(alumnos[i].prom.nota2)+(alumnos[i].prom.nota3))/3);
            j=i;
        }
        cout<<std::fixed<<alumnos[i].prom.nota2<<endl;
    }
    cout<<"-----------Estudiantes ingresados---------------"<<endl;
    for(int k=0; k<2;k++){
        cout<<"Nombre: "<<alumnos[k].nombre;
        cout<<"Sexo: "<<alumnos[k].sexo;
        cout<<"Edad: "<<alumnos[k].edad;
        cout<<"Promedio: "<<std::fixed<<(((alumnos[k].prom.nota1)+(alumnos[k].prom.nota2)+(alumnos[k].prom.nota3))/3)<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"El alumno con mayor promedio es: "<<alumnos[j].nombre<<endl;
    
    return 0;
 }
