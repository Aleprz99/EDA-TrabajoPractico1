#include "iostream"
#include "stdio.h"

#define APROBADO 7

int main(){
	float test[3];
	int case_a,case_b,case_c;
	case_a=0;//Aprobaron todos los examenes
	case_b=0;//Aprobaron al menos un examen
	case_c=0;//Solo aprobaron el ultimo examen
	for(int i=1;i<=5;i++){
		printf("Alumno %d\n",i);
		for(int j=1;j<=3;j++){
			printf("Nota %d\n",j);
			scanf("%f",&test[j-1]);
			while(test[j-1]<1 || test[j-1]>10){
				printf("Ingrese una nota entre 1 y 10\n");
				scanf("%f",&test[j-1]);
			}
		}
		if(test[0]>= APROBADO && test[1]>=APROBADO && test[2]>=APROBADO){
			case_a++;
		}
		if(test[0]>= APROBADO || test[1]>=APROBADO || test[2]>=APROBADO){
			case_b++;
		}
		if(test[0]< APROBADO && test[1]<APROBADO && test[2]>=APROBADO){
			case_c++;
		}
	}
	printf("Alumnos que aprobaron todos los examenes: %d\nAlumnos que aprobaron al menos un examen: %d\nAlumnos que solo aprobaron el ultimo examen: %d",case_a,case_b,case_c);
	return 0;
}
