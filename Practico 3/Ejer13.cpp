/*. Defina una estructura que permita cargar el día y las 
temperaturas máxima y mínima de ese día. Luego defina
un arreglo en el que cargara todos estos datos para un 
mes. Realice un programa que cargue la estructura
antes definida y calcule el promedio de temperaturas
 máximas y el promedio de temperaturas mínimas del
mes.*/
#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 
struct temperatura{
int max;
int min;
};
struct temperatura mes[31]{
{12,24},
{8,23},
{10,22},
{11,25},
{13,25},
{16,28},
{2,10},
{3,10},
{4,12},
{12,24},
{8,23},
{10,22},
{11,25},
{13,25},
{20,33},
{2,10},
{-3,4},
{4,12},
{12,24},
{8,23},
{10,22},
{11,25},
{13,25},
{16,28},
{2,10},
{3,10},
{4,12},
{12,24},
{20,32},
{10,22},
{11,25}
};
int main(){
    float tmax=0,tmin=0;
    for(int i=0; i<31;i++){
        tmax+= mes[i].max;
        tmin+= mes[i].min;
    };
    tmax /=31;
    tmin /=31;
cout<<"La temperatura maxima promedio fue de "<<tmax<<" grados."<<endl;
cout<<"La temperatura minima promedio fue de "<<tmin<<" grados."<<endl;
    return 0;
}
