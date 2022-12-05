/*
FILAS
*/
#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;
const int MAX=5;

struct fila{
	private:
	 int arreglo[MAX];
	 int p=0;
	 int u=-1;
	 int cant=0;
	
	
	public:
		int cantidad(){
			return cant;
		}
		
		void encolar(int num){
		
			if (cant<MAX){
				u=(u+1)% MAX;
				arreglo[u]=num;
				cant++;
				}else{
					cout<<"no se pudo sumar, la cola esta llena"<<endl;
				};
		};
		int desencolar(){
			int aux;
			
			if (cant>0){
				aux=arreglo[p];
				p = (p + 1) % MAX;
				cant-=1;
				
				return aux;
			}else{cout<<"La cola esta vacia";
			
			return -100;
			}
		
		}
};


int main(){
	struct fila a;
	a.encolar(4);
	a.encolar(5);
	cout<<"hola";

	int b= a.desencolar();
	cout<<"-------------------------"<<b;
	b = a.desencolar();
	cout<<"-------------------------"<<b;
	cout<<"el modulo de 12 es"<<12%12;
	return 0;
	
	};









