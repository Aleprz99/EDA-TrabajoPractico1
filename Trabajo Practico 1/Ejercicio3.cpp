#include "stdio.h"
#include "iostream"

using namespace std;

int main(){
	
	int age;
	char sex;
	float weight;
	
	cout<<"Ingrese la edad"<<endl;
	cin>>age;
	cout<<"Ingrese el sexo"<<endl;
	cin>>sex;
	cout<<"Ingrese el peso"<<endl;
	cin>>weight;
	cout<<"La persona de "<<age<<" años, de genero "<<sex<<", pesa "<<weight<<" Kg."<<endl;
	return 0;
}
