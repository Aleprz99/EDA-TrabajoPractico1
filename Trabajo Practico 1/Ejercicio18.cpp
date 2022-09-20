#include <iostream>
#include "stdio.h"
#include "math.h"

using namespace std;

int main(int argc, char** argv) {
	double a,b,c;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c"<<endl;
	cin>>c;
	float result = ((-b+(sqrt((b*b)-(4*a*c))))/(2*a));
	cout.precision(3);
	cout<<result;
	return 0;
}
