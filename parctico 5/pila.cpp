/*1.	En el men� principal, se cuenta con las siguientes variables: pilaA, pilaB, pilaC, aux1 todos los datos son enteros, y los procedimientos o funciones son los que siguen: 
a.	Implemente la estructura Pila de Enteros que permita trabajar con variables de tipo Pila.
b.	cargaPila, que permita introducir datos en la PilaA 
c.	pasaPila, pasa todos los elementos de pilaA a PilaB 
d.	contieneE, que recibe un entero "X" y determina si est� en la pilaA, todos los elementos deben quedar nuevamente en A  
e.	SeparaPI, que dada la pilaA con n�meros enteros, coloca en pilaB los pares y en PilaC los impares  
f.	Invierte1, Dada una Pila A con n�meros, una Pila B y una Pila C vac�as, pasar los elementos de A a B de manera que queden en el mismo orden que estaban en A. (Se permite utilizar la pila C como auxiliar)
g.	Invierte2, que dada una Pila A, una variable X y una Pila Vac�a B. Pasar los elementos de pilaA a pilaB de manera tal que en pilaB queden en el mismo orden que estaban en pilaA   
h.	Dada una pila A con n�meros, buscar si existe en A un entero "X", y reemplazarlo por un n�mero "Y"
*/


#include <iostream>
#include<stdio.h>
using namespace std;

const int N=5;

struct Pila{
 private:
 	int tope= -1;
	int numeros[N];
 public:
	void push(int num){
		if (tope<N-1){
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
		if(tope==N-1){
			return true;
		}else{
			return false;
		}	
	}
	int getTope(){
		return tope;
	}
};

void cargaPila(Pila &a){
	int num;
	while(!a.estaLlena()){
		cout<<"ingrese un valor para la pila: ";
		cin>>num;
		a.push(num);
	}
};
void pasaPila(Pila &a, Pila &b){
	while(!a.estaVacia()){
		b.push(a.pop());
	}
}

void invierte1(Pila &a, Pila &b, Pila &c){

	while(!a.estaVacia()){
		c.push(a.pop());
	}
	while(!c.estaVacia()){
		b.push(c.pop());
	}
};

bool contieneE(int x, Pila &a){
	Pila aux;
	int b;
	bool flag=false;
	while(!flag && !a.estaVacia()){
		
		if (x==a.verTope()){
			flag =true;
		}
		aux.push(a.pop());
		
	}
	while(!aux.estaVacia()){
		a.push(aux.pop());
	}
	return flag;
};
void separaPI(Pila &a, Pila &b, Pila &c){
	while(!a.estaVacia()){
		if (a.verTope()%2==0){
			b.push(a.pop());
		}else{
			c.push(a.pop());
		}
	}
	
};
void invierte2(Pila &a, Pila &b){
	int x;
	int aux= a.getTope();
	while(aux!=0){
	while(!a.estaVacia()){
		b.push(a.pop());
		
	}
	x=b.pop();
	while(!b.estaVacia()){
		a.push(b.pop());
		
	}
	b.push(x);
	aux--;
	for(int i=0; i<aux; i++){
		
		b.push(a.pop());
		}
		x=b.pop();
	}
	};

void mostrar(Pila a){
		Pila b;
		int cont=0;
		while(!a.estaVacia()){
			b.push(a.pop());
			
		}
		while(!b.estaVacia()){
			cout<<"numero "<<b.verTope()<<"\t";
			cont++;
			b.pop();
			
			if(cont %5==0){
				cout<<endl;
			}
		}
	
	};

/*	cargaPila, que permita introducir datos en la PilaA 
c.	pasaPila, pasa todos los elementos de pilaA a PilaB 
d.	contieneE, que recibe un entero "X" y determina si est� en la pilaA, todos los elementos deben quedar nuevamente en A  
e.	SeparaPI, que dada la pilaA con n�meros enteros, coloca en pilaB los pares y en PilaC los impares  
f.	Invierte1, Dada una Pila A con n�meros, una Pila B y una Pila C vac�as, pasar los elementos de A a B de manera que queden en 
el mismo orden que estaban en A. (Se permite utilizar la pila C como auxiliar)
g.	Invierte2, que dada una Pila A, una variable X y una Pila Vac�a B. Pasar los elementos de pilaA a pilaB de manera tal que en pilaB queden en el mismo orden que estaban en pilaA   
h.	Dada una pila A con n�meros, buscar si existe en A un entero "X", y reemplazarlo por un n�mero "Y"
*/

int main(){

Pila pilaA,pilaB,pilaC, aux1;
int aux;

	cargaPila(pilaA);
	pasaPila(pilaA , pilaB);
	cout<<"pila A: "<<endl;
	mostrar(pilaA);
	cout<<"pila B: "<<endl;
	mostrar(pilaB);
	cout<<"invierte 1;"<<endl;
	invierte1(pilaB, pilaA, pilaC);
	cout<<"pila A: "<<endl;
	mostrar(pilaA);
	cout<<"pila B: "<<endl;
	mostrar(pilaB);
	if(contieneE(4, pilaA)){
		cout<<"contiene el numero 4"<<endl;
	}else{
		cout<<"no lo contiene"<<endl;
	};
	cout<<"separando los pares"<<endl;
	separaPI(pilaA, pilaB, pilaC);
	cout<<"pila A: "<<endl;
	mostrar(pilaA);
	cout<<"pila B Pares: "<<endl;
	mostrar(pilaB);
	cout<<"pila C Impares: "<<endl;
	mostrar(pilaC);
	
	//invierte2(pilaA,pilaB);
	return 0;
}	

