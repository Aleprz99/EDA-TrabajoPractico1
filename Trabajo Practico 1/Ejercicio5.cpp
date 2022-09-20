#include "iostream"
#include "stdio.h"

using namespace std;

int main(){
	
	float base, height;
	
	cout<<"Ingrese la base"<<endl;
	cin>>base;
	cout<<"Ingrese la altura"<<endl;
	cin>>height;
	cout<<"El perimetro es: "<<2*height+2*base<<endl<<"El area es: "<<base*height<<endl;
	
	return 0;
}
