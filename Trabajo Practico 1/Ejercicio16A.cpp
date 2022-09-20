#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	double a,b;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout.precision(3);
	cout<<(a/b)+1;
	return 0;
}
