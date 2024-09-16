#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct empleado{
    char nombre[100];
    int edad;
    double sueldo;

};
 
 int main() {
    int n, empleMay, empleMen;
    double sueldoMay, sueldoMen;
    cout<<"ingrese la cantidad de empleados"<<endl;
    cin>>n;
    cin.ignore();
    empleado empleados[n];
    for(int i=0;i<n;i++){
        cout<<"ingrese el nombre del empleado "<<i+1<<"."<<endl;
        cin.getline(empleados[i].nombre,100,'\n');
        cout<<"ingrese la edad del empleado "<<i+1<<"."<<endl;
        cin>>empleados[i].edad;
        cin.ignore();
        cout<<"ingrese el sueldo del empleado "<<i+1<<"."<<endl;
        cin>>empleados[i].sueldo;
        cin.ignore();
        if(sueldoMay<empleados[i].sueldo){
            sueldoMay=empleados[i].sueldo;
            empleMay=i;
        }
        if(i==0||sueldoMen>empleados[i].sueldo){
             sueldoMen=empleados[i].sueldo;
             empleMen=i;
        }    
    }
    cout<<"------Sueldo mayor------"<<endl;
    cout<<"Nombre :"<<empleados[empleMay].nombre<<endl;
    cout<<"Edad :"<<empleados[empleMay].edad<<endl;
    cout<<"Sueldo :"<<empleados[empleMay].sueldo<<endl;
    cout<<"------Sueldo menor------"<<endl;
    cout<<"Nombre :"<<empleados[empleMen].nombre<<endl;
    cout<<"Edad :"<<empleados[empleMen].edad<<endl;
    cout<<"Sueldo :"<<empleados[empleMen].sueldo<<endl;

    return 0;
 }