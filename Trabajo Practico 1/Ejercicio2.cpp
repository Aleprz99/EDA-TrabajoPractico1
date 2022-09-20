#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	float price,total_price;
	cout<<"Ingrese el valor del producto"<<endl;
	cin>>price;
	total_price=(price*0.21)+price;
	printf("%.2f",total_price);
	return 0;
}
