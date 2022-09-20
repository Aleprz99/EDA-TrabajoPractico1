#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	float mount;
	cout<<"Ingrese un monton en pesos argentinos"<<endl;
	cin>>mount;
	cout<<"U$D"<<(mount/100)<<endl;
	return 0;
}
