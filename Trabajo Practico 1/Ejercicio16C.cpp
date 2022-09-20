#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	double a,b,c,d,e,f;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c"<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d"<<endl;
	cin>>d;
	cout<<"Ingrese el valor de e"<<endl;
	cin>>e;
	cout<<"Ingrese el valor de f"<<endl;
	cin>>f;
	cout.precision(3);
	cout<<(a+(b/c))/(d+(e/f));
	return 0;
}
