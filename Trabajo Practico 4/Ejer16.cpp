/*16. Escriba las siguientes funciones:
A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población, 
recibe estos datos como parámetros y devuelve la tasa.
B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, recibe 
estos datos como parámetros y devuelve la tasa.
C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad
D. Densidad Poblacional: habitantes por km 2
Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, y 
luego de la opción de calcular: Densidad poblacional, Tasa de natalidad, Tasa de Mortalidad y 
Evolución demográfica, mientras el usuario lo desee*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 

double tasaNatalidad(int naci, int poblacion){
	return (naci*100)/poblacion;
}
double tasaMortalidad(int muertos, int poblacion){
	return (muertos*100)/poblacion;
}
bool crecimiento(double nac, double muer){
	return nac>muer;
}
double densidad(double habitantes, double km){
	return habitantes/km;
}

int main(){
	string pais;
	bool flag=true;
	double poblacion, superficie;
	int aux, muertos, nacidos;
	cout<<"Ingrese el nombre del pais: ";
	getline(cin, pais);
	cout<<"ingrese la cantidad de poblacion y la superficie:"<<endl;
	cin>>poblacion;
	cin>>superficie;
	cout<<"Ingrese la cantidad de muertos del ultimo año: ";
	cin>>muertos;
	cout<<"Ingrese la cantidad de nacidos en el ultimo año: ";
	cin>>nacidos;
	
	do{
		cout<<"--------------------------------------------\nElija una opcion:"<<endl;
	cout<<"1.Tasa de natalidad\n2.Tasa de mortalida\n3.Saber si crece\n4.Densidad poblacional\n5.Salir";
	cin>>aux;
	while (aux<1||aux>5){
		cout<<"Ingrese una opcion valida entre 1 y 5"<<endl;
		cin>>aux;
	
	}
		cout<<"------------------------------------------\n"<<endl;
	switch(aux){
		
		case 1: cout<< "La tasa de nacimiento es del "<<tasaNatalidad(nacidos, poblacion)<<"%"<<endl;
		break;
		case 2: cout<<"La tasa de mortalidad es del "<<tasaMortalidad(muertos,poblacion)<<"%"<<endl;
		break;
		case 3: if(tasaNatalidad(nacidos, poblacion)>tasaMortalidad(muertos,poblacion)){
			cout<<"La poblacion esta creciendo"<<endl;
			}else{cout<<"La poblacion esta decrecinendo"<<endl;
			}
			break;
		case 4: cout<<"La densidad de poblacion es de "<< densidad(poblacion, superficie)<<" por metro cuadrado"<<endl;
		break;
		case 5: flag=false;
		}
		
	}while(flag);
	}

