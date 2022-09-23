#include "iostream"
#include "stdio.h"

#define DIMENSION 5

int main(){
	int pos,neg,vec[DIMENSION];
	pos = 0;
	neg = 0;
	printf("Ingrese los valores del vector de %d lugares\n",DIMENSION);
	for(int i=0;i<DIMENSION;i++){
		scanf("%d",&vec[i]);
		if(vec[i]<0){
			neg++;
		}else{
			pos++;
		}
	}
	if(pos==0){
		printf("No hay numeros positivos\nEl vector de los negativos es: ");
		for(int i=0;i<DIMENSION;i++){
			printf("%d ",vec[i]);
		}
	}else if(neg==0){
		printf("No hay numeros negativos\nEl vector de los positivos es: ");
		for(int i=0;i<DIMENSION;i++){
			printf("%d ",vec[i]);
		}
	}else{
		int vp[pos];
		int vn[neg];
		neg = 0;
		pos = 0;
		for(int i=0;i<DIMENSION;i++){
			if(vec[i]<0){
				vn[neg]=vec[i];
				neg++;
			}else{
				vp[pos]=vec[i];
				pos++;
			}
		}
		printf("El vector de los positivos es: ");
		for(int i=0;i<pos;i++){
			printf("%d ",vp[i]);
		}
		printf("\nEl vector de los negativos es: ");
		for(int i=0;i<neg;i++){
			printf("%d ",vn[i]);
		}
	}
	return 0;
}
