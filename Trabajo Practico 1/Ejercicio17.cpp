#include <iostream>
#include "stdio.h"
#include "math.h"

using namespace std;

int main(int argc, char** argv) {
	double x,y;
	cout<<"Ingrese el valor de x"<<endl;
	cin>>x;
	cout<<"Ingrese el valor de y"<<endl;
	cin>>y;
	cout.precision(3);
	cout<<(sqrt(x)/((y*y)-1));
	return 0;
}
