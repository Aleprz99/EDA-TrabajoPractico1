#include "iostream"
#include "stdio.h"
#include "string.h"

using namespace std;

int main(){
	
	string nad1,nad2;
	float time1,time2;
	
	cout<<"Ingrese el nombre de la primer nadadora"<<endl;
	cin>>nad1;
	cout<<"Ingrese su tiempo de nado"<<endl;
	cin>>time1;
	cout<<"Ingrese el nombre de la segunda nadadora"<<endl;
	cin>>nad2; 
	cout<<"Ingrese su tiempo de nado"<<endl;
	cin>>time2;
	if (time1>time2){
		cout<<"La ganadora es "<<nad1<<" con un tiempo de "<<time1<<endl;
	}else if(time1=time2){
		cout<<"Hay un empate"<<endl;
	}else{
		cout<<"La ganadora es "<<nad2<<" con un tiempo de "<<time2<<endl;
	}
	
	return 0;
}
