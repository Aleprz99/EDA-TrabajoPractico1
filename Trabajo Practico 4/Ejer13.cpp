/* Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación por 
sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m 
veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que 
ESTRUCTURAS DE DATOS Y ALGORITMOS Noviembre /2022
 2
pude restar 2 al 10. Y C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2 
(multiplica 2 por si mismo 3 veces*/
#include <iostream>
using namespace std; 
int multi(int a,int b){
    if(a==0||b==0){
        return 0;
    }
    int total=0;
    for(int i=0; i<b;i++){
        total+=a;
    }
    return total;
}

int division(int a,int b){
    if (b==0){
        return 0;
    }
    int cont=0;
    while (a>=b){
        a=a-b;
        cont++;
    }
    return cont;
}

int potencia(int a,int b){
    int total=1;
    for(int i=0; i<b;i++){
        total *=a;
    }
    return total;
}
int main(int argc, char const *argv[])
{
    bool flag=true;
    int a,b,aux;
    do{
       cout<<"----------------------------------------------"<<endl;
        cout<<"Elija una opcion:\n1.Multiplicasion\n2.Dividision\n3.Potencia\n4.Salir"<<endl;
        cin>>aux;
        while(aux<0||aux>4){
            cout<<"Ingrese un numero entre 1 y 4:";
            cin>>aux;
        }
        switch (aux)
        {
        case 1: cout<<"ingrese el valor de los dos factores: \n";
            cin>>a>>b;
            cout<<"El resultado es "<<multi(a,b)<<endl;
            break;
        case 2: cout<<"Ingrese el valor del dividendo y luego del divisor"<<endl;
            cin>>a>>b;
                        cout<<"El resultado es "<<division(a,b)<<endl;
                        break;
        case 3: cout<<"Ingrese los valores de la base y del exponente"<<endl;
            cin>>a>>b;
            cout<<"El resultado es "<<potencia(a,b)<<endl;
            break;
        case 4: flag=false;
            break;
        }
    }while(flag);

    return 0;
}

