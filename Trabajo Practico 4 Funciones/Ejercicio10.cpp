/*Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una
potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá
ser el segundo valor transmitido a la función*/

#include "stdio.h"
#include "iostream"
#include "string.h"
#include "stdlib.h"
#include <math.h>

using namespace std;

int funpot(int a,int b){
	int r=a;
for(int i=0; i<b-1;i++){
	r*=a;
}	
return r;

}

int main(){
int a,b;
cout<<"dame un numero y la potencia: "<<endl;
cin>>a>>b;
cout<<"la potencia da: "<<funpot(a,b);
return 0;
}
