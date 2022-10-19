#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct atleta{
    char nombre[100];
    char pais[40];
    int numero_medallas;
};
 
 int main() {
    int n, j, medallas;
    cout<<"ingrese la cantidad de atletas"<<endl;
    cin>>n;
    cin.ignore();
    atleta atletas[n];
    for (int i=0; i<n;i++){
        cout<<"ingrese el nombre del atleta "<<i+1<<endl;
        cin.getline(atletas[i].nombre,100,'\n');
        cout<<"ingrese el pais del atleta "<<i+1<<endl;
        cin.getline(atletas[i].pais,40,'\n');
        cout<<"ingrese el numero de medallas del atleta "<<i+1<<endl;
        cin>>atletas[i].numero_medallas;
        cin.ignore();
        if(medallas<atletas[i].numero_medallas){
            medallas=atletas[i].numero_medallas;
            j=i;
        }
    }
    cout<<"El Atleta con mas medallas es: "<<endl;
    cout<<"Nombre : "<<atletas[j].nombre<<endl;
    cout<<"Pais : "<<atletas[j].pais<<endl;




    return 0;
 }
