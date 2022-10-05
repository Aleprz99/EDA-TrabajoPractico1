#include "iostream"
#include "stdio.h"
#include "conio.h"

int main(){
	int vsize;
	int ans=0;
	bool existnumber=false;
	printf("Ingrese el largo del vector\n");
	scanf("%d",&vsize);
	int vector[vsize];
	printf("--------------------------\nIngrese los valores del vector:\n");
	for(int i=0;i<vsize;i++){
		scanf("%d",&vector[i]);
		ans=vector[i]+ans;
	}
	for(int i=0;i<vsize;i++){
		if(vector[i]==ans-vector[i]){
			existnumber=true;
			break;
		}
	}
	if(existnumber){
		printf("SI existe un numero igual a la suma de los restantes");
	}else{
		printf("NO existe un numero igual a la suma de los restantes");
	}
	getch();
	return 0;
}
