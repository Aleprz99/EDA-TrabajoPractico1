#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
using namespace std;
int contar(string oracion);
int cuentaRepet(string oracion, string palabra);

int main(){
    string palabra;
    string oracion;
    int cantPal=0;
    int cantRep=0;
    cout<<"Ingrese una frase."<<endl;
    getline(cin,oracion);
    cout<<"Ingrese una palabra."<<endl;
    getline(cin,palabra);
    cantPal=contar(oracion);
    cout<<"La cantidad de palabras es: "<<cantPal<<endl;
    cantRep=cuentaRepet(oracion, palabra);
    cout<<"La cantidad de repeticiones es: "<<cantRep<<endl;



    return 0;
}
int contar(string oracion){
    int cont=0;
    int frase=oracion.size();
    for(int i=0; i<frase;i++){
        if(oracion[i]==' '&&isalpha(oracion[i+1])){
            cont++;
        }
    }
    if(isalpha(oracion[0])){
            cont++;
        }
    return cont;
}
int cuentaRepet(string oracion, string palabra){
    int largoPal=palabra.size();
    int larFrase=oracion.size();
    int coin=0, r=0;
    for (int i=0; i<larFrase;i++){
        if(oracion[i]==palabra[0]){
            for(int j=0; j<largoPal; j++){
                if(palabra[j]==oracion[i+j]){
                    coin++;
                }

            }
            if(coin==largoPal){
                r++;
            }
            coin=0;

        }

    }
    return r;

}

