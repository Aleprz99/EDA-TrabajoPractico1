#include "iostream"
#include "stdio.h"

using namespace std;

int main(){
	
	float n1,n2,n3,n4;
	
	cout<<"Ingrese la nota del primer alumno"<<endl;
	cin>>n1;
	cout<<"Ingrese la nota del segundo alumno"<<endl;
	cin>>n2;
	cout<<"Ingrese la nota del tercer alumno"<<endl;
	cin>>n3;
	cout<<"Ingrese la nota del cuarto alumno"<<endl;
	cin>>n4;
	cout.precision(3);
	cout<<"La nota promedio de los 4 alumnos es de: "<<(n1+n2+n3+n4)/4<<endl;
	return 0;
}
