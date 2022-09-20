#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

int main(){
	
	float c1,c2;
	
	cout<<"Ingrese el valor del cateto 1"<<endl;
	cin>>c1;
	cout<<"Ingrese el valor del cateto 2"<<endl;
	cin>>c2;
	cout.precision(3);
	cout<<"El valor de la hipotenusa es de: "<<(sqrt((c1*c1)+(c2*c2)));
	
	return 0;
}
