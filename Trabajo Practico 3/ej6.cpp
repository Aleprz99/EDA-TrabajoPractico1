#include <math.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct corredor{
    char nombre[100];
    int edad;
    char sexo[100];
    char club[100];
    char categoria[100];
    }corredor1;
 
 int main() {
    cout<<"Datos de Corredor."<<endl;
    cout<< "ingrese el nombre."<<endl;
    cin.getline(corredor1.nombre,50,'\n');
    cout<<"ingrese la edad."<<endl;
    cin >> corredor1.edad;
    cin.ignore();
    cout<<"ingresar sexo "<<endl;
    cin.getline(corredor1.sexo,15,'\n');
    cout<< "Ingresar Club"<<endl;
    cin.getline(corredor1.club,40,'\n');
    if(corredor1.edad<=18){
        strcpy(corredor1.categoria,"Juvenil");
        }else if(corredor1.edad<=40&&corredor1.edad>18){
        strcpy(corredor1.categoria,"Señor");

        }else{
            strcpy(corredor1.categoria,"Veterano");
        }
    cout<<"Corredor 1"<<endl;
    cout<<"Nombre: "<<corredor1.nombre<<endl;
    cout<<"Edad: "<<corredor1.edad<<endl; 
    cout<<"Sexo: "<<corredor1.sexo<<endl; 
    cout<<"Club: "<<corredor1.club<<endl; 
    cout<<"Categoria: "<<corredor1.categoria<<endl;






    return 0;
 }


