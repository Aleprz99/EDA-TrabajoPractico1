/*Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. Debe tener tres
campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado
en correr todas las etapas.
*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 

struct etapa{
    int horas, minutos, segundos;
};
struct etapa carrera[10];
int main(){
    int aux, i=1;
    cout<<"Ingrese la cantidad de etapas que tiene la carrera"<<endl;
    cin>>aux;

    while(i<=aux){
        cout<<"Ingrese las horas, minutos y segundos de la etapa "<<i<<endl;
        cin>>carrera[i-1].horas;
        cin>>carrera[i-1].minutos;
        cin>>carrera[i-1].segundos;
	i++;
    }
    int seg=0,min=0,hor=0;
    for(int i=1;i<=aux;i++) {
        seg+=carrera[i-1].segundos;
        min+=carrera[i-1].minutos;
        hor+=carrera[i-1].horas;
    };
    
    min+= seg/60;
    hor+= min/60;
    seg= seg % 60;
    //cout<<"segundos"<<seg<<endl;
    min= min % 60;
    
    printf("La carrera duro %d horas, %d minutos y %d segundos", hor, min, seg);

;    
    return 0;
                
}
