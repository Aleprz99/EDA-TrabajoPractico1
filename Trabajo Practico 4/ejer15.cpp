
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int factorial(int num){
    int total=1;
    for(int i=num;i>0; i--){
        total*=i;
    }
    return total;
};

int main(){
    int num;
   
    cout<<"Ingrese el numero para calcular el factorial: ";
      cin>>num;
    num=factorial(num);
    cout<<"El resultado es: " << num <<endl; 
    getchar();
    return 0;

}
