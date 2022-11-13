/*13. Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación por 
sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m 
veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que 
pude restar 2 al 10. Y C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 
(multiplica 2 por si mismo 3 veces)*/
#include "stdio.h"
#include "iostream"
#include "string.h"
#include "stdlib.h"

using namespace std;

int multSuma(int a,int b){
	int res = 0;
	for(int i=0;i<b;i++)res+=a;
	return res;
}

int divResta(int a,int b){
	int res = 0;
	for(int i=1;a>b;i++){
		a-=b;
		res=i;
	}
	return res;
}

int potMult(int a,int b){
	int res = 1;
	for(int i=0;i<b;i++)res=res*a;	
	return res;
}

int main(){
	int opc;
	bool exit=false;
	do{
		cout<<"Elija una opcion"<<endl;
		cout<<"1.Multiplicacion [mxn]"<<endl;
		cout<<"2.Division [m/n]"<<endl;
		cout<<"3.Potenecia [m^n]"<<endl;
		cout<<"4.Salir"<<endl;
		cin>>opc;
		int m,n;
		switch(opc){
			case 1:
				cout<<"Ingrese el valor de m"<<endl;
				cin>>m;
				cout<<"Ingrese el valor de n"<<endl;
				cin>>n;
				cout<<"Resultado: "<<multSuma(m,n)<<endl;
				break;
			case 2:
				cout<<"Ingrese el valor de m"<<endl;
				cin>>m;
				cout<<"Ingrese el valor de n"<<endl;
				cin>>n;
				while(n==0){
					cout<<"Error.No hay div por cero"<<endl;
					cin>>n;
				}
				cout<<"Resultado: "<<divResta(m,n)<<endl;
				break;
			case 3:
				cout<<"Ingrese el valor de m"<<endl;
				cin>>m;
				cout<<"Ingrese el valor de n"<<endl;
				cin>>n;
				cout<<"Resultado: "<<potMult(m,n)<<endl;
				break;
			case 4:
				exit = true;
				break;
			default:
				cout<<"Ingrese una opcion valida"<<endl;
				break;
		}
	}while(!exit);
	return 0;
}
