#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;
void cargaVector(int nums[10]);
void muestraVector(int nums[10]);
int main(){
    int vect[10];
    cargaVector(vect);
    muestraVector(vect);

    
   

    return 0;
}
void cargaVector(int nums[10]){
    for (int i=0; i<10;i++){
        cout<<"Ingrese el numero "<< i+1<<endl;
        cin>>nums[i];
        cin.ignore();

    }
}
void muestraVector(int nums[10]){
    for (int i=0; i<10;i++){
        cout<<"el "<< i+1 <<" numero es: "<< nums[i]<<endl;
    }
}