#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,multi=1,tam;
	cout<<"dame el tamaño del vector"<<endl;
	cin>>tam;
	int vec[tam];
	
	
	for(i=0;i<tam;i++){
		cout<<"ingrese un numero"<< endl;
		cin>>vec[i];
		multi*=vec[i];
		
		
	}
	cout<<"la multiplicacion de todos los numeros es "<< multi<<endl;
	getch();
	return 0;
	
}
