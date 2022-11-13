#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct fecha{
    int dia;
    int mes;
    int anio;

};
void cumple(fecha act, fecha cumpl);
int main(){
    fecha fA;
    fecha fC;
    cout<<"Fecha nacimiento: "<<endl;
    cout<<"Ingrese el dia."<< endl;
    cin>>fC.dia;
    cout<<"Ingrese el mes."<<endl;
    cin>>fC.mes;
    cout<<"Ingrese el año."<<endl;
    cin>>fC.anio;
    cout<<"Fecha actual: "<<endl;
    cout<<"Ingrese el dia."<< endl;
    cin>>fA.dia;
    cout<<"Ingrese el mes."<<endl;
    cin>>fA.mes;
    cout<<"Ingrese el año."<<endl;
    cin>>fA.anio;
    cumple(fA, fC);



    
   

    return 0;
}
void cumple(fecha act, fecha cumpl){
    if(act.dia==cumpl.dia){
        if(act.mes==cumpl.mes){
            cout<<"Feliz Cumpleaños!!!"<<endl;
        }
    }else{
        cout<<"Hoy no es su cumple."<<endl;
    }


}