#include <algorithm>
#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;
const int MAX=10;

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
        int verPrimero(){
            return arreglo[p];
        }
};

struct Pila{
 private:
 	int tope= -1;
	int numeros[MAX];
 public:
	void push(int num){
		if (tope<MAX-1){
			tope++;
			numeros[tope]=num;
			
		}else{
			cout<<"la pila esta llena";
			
		}
	}
	int verTope(){
		if(!estaVacia()){
			return numeros[tope];
		}
	}
	int pop(){
		int a;
		if(tope>=0){
			a= numeros[tope];
			tope--;
			return a;
		}else{
			cout<<"La pila esta vacia";
		}
	}
	bool estaVacia(){
		if(tope<0){
			return true;
		}else{
			return false;
		}
	}
	bool estaLlena(){
		if(tope==MAX-1){
			return true;
		}else{
			return false;
		}	
	}
	int getTope(){
		return tope;
	}
};

fila invertirFila(fila a){
    fila aux;
    Pila b;
    cout<<"\nFila original: "<<endl;
    while(a.cantidad()!=0){
        
        b.push(a.desencolar());
        cout<<b.verTope()<<"---";
    }
    cout<<endl;
cout<<"Fila invertida\n";
    while(!b.estaVacia()){
  
    cout<<b.verTope()<<"----";
    aux.encolar(b.pop());
    }
cout<<endl;
    return aux;
}


void copiar(fila &a, Pila b){
    Pila c;
    while(!b.estaVacia()){
        c.push(b.pop());
    }
    while (!c.estaVacia()){
        a.encolar(c.pop());
    };
    
};

bool contiene(fila a, int x){
    bool flag;
    
    while (a.cantidad()!=0){
    if(a.desencolar()==x){
        flag=true;
    }        

    }return flag;
    
};

fila eliminarRepetidos(fila a){
    int b;
    fila c;
    while(a.cantidad()!=0){
       b= a.desencolar();
       if(!contiene(c,b)){
        c.encolar(b);
       }
    } return c;
}


fila ordenar(fila b, fila c){
    fila d;
    int aux[MAX*2];
    int contador=0;
    while(b.cantidad()!=0){
        aux[contador]=b.desencolar();
        contador++;
    }
    while(c.cantidad()!=0){
        aux[contador]=c.desencolar();
        contador++;
    }
    sort(aux,aux + contador);
    for(int i=0; i<contador; i++){
      d.encolar(aux[i]);  

    }
    return d;
}
fila ordenarOtro(fila b, fila c){
    fila d;
int cantidad= b.cantidad()+c.cantidad();
for(int i=0; i<cantidad; i++){
    if (b.cantidad()==0){
        if (c.cantidad()!=0){
            d.encolar(c.desencolar());
        }continue;
    }if (c.cantidad()==0){
        if (b.cantidad()!=0){
            d.encolar(b.desencolar());
        }continue;
    if(b.verPrimero()<c.verPrimero()){
            d.encolar(b.desencolar());

        }else{
           d.encolar(c.desencolar());

            }
        }

    }
}
void mostrar(fila a){
    
    cout<<"\n";
    while(a.cantidad()!=0){
        cout<<a.desencolar()<<"----- ";
    }cout<<endl;
}


/*5. En el programa trabajamos ahora con estructuras de tipo Queue, 
a.	Dada una fila A, Invertirla. Mostrar ambas filas. (usar fila auxiliar si lo necesita)  
b.	Utilizando las operaciones de pila y de Fila, COPIE el contenido de una pila P, a una Fila C,
 de tal manera que el primer elemento de la Fila será el elemento “F” que se encuentra en el fondo 
 de la pila, el segundo de la Fila el que está apilado sobre “F”, y así siguiendo. De esta forma el 
 elemento del tope de la pila quedará en el último lugar de la Fila. (Para resolver este ejercicio, 
 use pila auxiliar)  
c.	Ahora queremos buscar si el número entero X determinar está en la Fila A. La Fila A deberá quedar 
en su estado original al finalizar el algoritmo.  
d.	Además de la Fila A cree la fila B, vacíe la fila A y cargue A y B con elementos ordenados, realice 
un algoritmo que inserte los elementos de la fila A y B en otra fila C de manera tal que queden ordenados.  
e.	Dada una fila C que contiene elementos repetidos consecutivos.  Formar otra con los elementos de la 
fila dada eliminando los repetidos.  
*/
int main(){
fila a, b, sinRepetidos, invertida, ordenada, ordenada2;
Pila c;
bool aux;
a.encolar(1);
a.encolar(20);
a.encolar(12);
a.encolar(30);
a.encolar(12);

c.push(1);
c.push(2);
c.push(3);
c.push(4);
c.push(5);


mostrar(a);
cout<<"Invertir fila a.......\n";
invertirFila(a);

cout<<"copiar la pila c a la fila b"<<endl;
copiar(b,c);
cout<<"fila b:\n";
mostrar(b);
cout<<"\n\n";
aux=contiene(a,20);

if (aux){
    cout<<"El numero esta en la fila a\n";
}else{
    cout<<"El numero no esta en la fila a\n";
}
sinRepetidos=eliminarRepetidos(a);
cout<<"\n\nFila a sin repetidos"<<endl;
mostrar(sinRepetidos);
//vaviamos las dos filas
while(a.cantidad()!=0){
    a.desencolar();
}
while(b.cantidad()!=0){
    b.desencolar();
}
a.encolar(1);
a.encolar(4);
a.encolar(5);
a.encolar(6);
a.encolar(9);
b.encolar(2);
b.encolar(3);
b.encolar(7);
b.encolar(8);
b.encolar(10);
//metodos para ordenar
cout<<"\n\n-----Filas ordenadas----"<<endl;
ordenada=ordenar(a,b);
mostrar(ordenada);
ordenada2= ordenarOtro(a,b);
mostrar(ordenada2);
return 0;
}