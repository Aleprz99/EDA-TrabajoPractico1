#include<iostream>
#include<string.h>

using namespace std;

struct discoCompacto{
	char titulo[20];
	char artista[20];
	int canciones;
	float precio;
	int anio;
}D1,D2;

int main(){
	struct discoCompacto D3;
	cout<<"dame el titulo del primer disco"<<endl;
	cin.getline(D1.titulo,20);
	cout<<"dame el nombre del primer artista"<<endl;
	cin.getline(D1.artista,20);
	/*cout<<"dame el titulo del segundo artista"<<endl;
	cin.getline(D2.titulo,20);
	cout<<"dame el nombre del segundo artista"<<endl;
	cin.getline(D2.artista,20);
	cout<<"dame el titulo del tercer artista"<<endl;
	cin.getline(D3.titulo,20);
	cout<<"dame el nombre del tercer artista"<<endl;
	cin.getline(D3.artista,20);*/
	string o="hola";
	string a="hola";
	int val;
	val=o.compare(a);
	if(val==0)
	cout<<"son iguALES";


//	if(strlen(D1.artista)>10)
//	cout<<D1.artista;
	
	
	
	/*llenado(D1);
	llenado(D2);
	llenado(D3);
	return 0;*/
	
}

void llenado(discoCompacto x){
	cout<<"dame titulo"<<endl;
	cin.getline(x.titulo,20);
	cout<<"dame el nombre del artista"<<endl;
	cin.getline(x.artista,20);
	
}
