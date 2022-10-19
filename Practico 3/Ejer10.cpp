/*. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro
llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio
este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
y por último imprimir todos sus datos incluidos el promedio. Calcular cuál de 2 alumnos tiene el mejor
promedio, y mostrar el nombre.*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 
typedef struct promedio{
    int nota1,nota2,nota3;
} promedio;
struct alumno{
    string nombre, sexo;
    int edad;
    promedio promedio;
};
struct alumno par[2];

int main(){

    double pri,seg;
    for(int i=0; i<2; i++){
       cout<<"Ingrese el nombre, el sexo y la edad del alumno"<<endl;
        getline(cin, par[i].nombre);
        getline(cin, par[i].sexo);
        cin>>par[i].edad;
        getchar();
        cout<<"Ingrese las tres notas"<<endl;
        cin>>par[i].promedio.nota1>>par[i].promedio.nota2>>par[i].promedio.nota3;
        getchar();
        
 }
	
pri=(par[0].promedio.nota1 + par[0].promedio.nota2+ par[0].promedio.nota3)/3;
seg=(par[1].promedio.nota1 + par[1].promedio.nota2 + par[1].promedio.nota3)/3;
printf("Datos del primer alumno: \n Nombre: %s. \n Sexo: %s. \n Edad: %d \n Nota 1: %d. \n Nota 2: %d. Nota 3: %d. \n Promedio: %5.2f \n",
par[0].nombre.c_str(), par[0].sexo.c_str(), par[0].edad, par[0].promedio.nota1, par[0].promedio.nota2, par[0].promedio.nota3, pri);
cout<<"---------------------------------------------------------------------------------------------"<<endl;
printf("Datos del segundo alumno: \n Nombre: %s. \n Sexo: %s. \n Edad: %d \n Nota 1: %d. \n Nota 2: %d. Nota 3: %d. \n Promedio: %5.2f \n",
par[1].nombre.c_str(), par[1].sexo.c_str(), par[1].edad, par[1].promedio.nota1, par[1].promedio.nota2, par[1].promedio.nota3, seg);

if (pri>seg){
 cout<<"El alumno con mejor promedio es "<< par[0].nombre.c_str()<<endl;
 }else if(pri<seg){
cout<<"El alumno con mejor promedio es "<< par[1].nombre.c_str()<<endl;
 }else{
    cout<<"Ambos alumnos tienen el muismo promedio";
 }
}
