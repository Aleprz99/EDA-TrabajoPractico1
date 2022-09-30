#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int vec[10],i=0,suma;
	while(i<10){
		cout<<"ingrese un numero"<< endl;
		cin>>vec[i];
		suma+=vec[i];
		i++;
		
	}
	cout<<"la suma de todos los numeros es "<< suma<<endl;
	getch();
	return 0;
}
