#include <iostream>
#include "stdio.h"

using namespace std;

int main(int argc, char** argv) {
	string name,last_name;
	cout<<"Ingrese su nombre"<<endl;//podemos realizar un salto de linea con endl
	cin>>name;
	cout<<"Ingrese su apellido\n";//o con \n
	cin>>last_name;
	cout<<"Su nombre completo es: "<<name<<" "<<last_name<<endl;
	return 0;
}
