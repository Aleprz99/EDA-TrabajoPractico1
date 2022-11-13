/*9. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de 
los elementos almacenados en dicha fila.
*/

#include "iostream"
#include "vector"
using namespace std;

int menor(int a[3][3],int b){
	int menor, aux;
	bool flag;
	for (int i=0; i<3;i++){
		if (!flag){
			menor= a[b][i];
			flag=true;
		}else{
			if (a[b][i]< menor){
				menor = a[b][i];
			}
		}
	}
	
	return menor;
}

int main(){
	int a[3][3];
	int cont=1, aux;
	cout<<"Matriz"<<endl;
	for (int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			a[i][j]=cont;
			cont++;
			cout<<a[i][j]<<" ";
		}cout<<"."<<endl;
		
	}
	cout<<"Ingrese el numero de la fila(entre 1 y 3): ";
	cin>>aux;
	cout<<"El menor fue "<<menor(a,aux-1);
	return 0;
	
}
