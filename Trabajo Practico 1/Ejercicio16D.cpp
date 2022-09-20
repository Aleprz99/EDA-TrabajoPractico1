#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	double a,b,c,d;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c"<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d"<<endl;
	cin>>d;
	cout.precision(3);
	cout<<a+(b/(c-d));
	return 0;
}
