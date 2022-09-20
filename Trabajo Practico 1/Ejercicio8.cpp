#include "stdio.h"
#include "iostream"

using namespace std;

int main(){
	
	float npr,nt,npa;
	
	cout<<"Ingrese la nota de practica"<<endl;
	cin>>npr;
	cout<<"Ingrese la nota de la teoria"<<endl;
	cin>>nt;
	cout<<"Ingrese la nota de participacion"<<endl;
	cin>>npa;
	cout<<"La calificacion final es: "<<(npr*0.3)+(nt*0.6)+(npa*0.1)<<endl;
	
	return 0;
}
