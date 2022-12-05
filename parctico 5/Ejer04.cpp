#include "string.h"
#include "iostream"
#include "stdio.h"
using namespace std;
const int MAX=5;
struct persona{
    int dni;
    char operacion;
}typedef persona;

struct fila{
	private:
	 persona arreglo[MAX];
	 int p=0;
	 int u=-1;
	 int cant=0;
	
	
	public:
		int cantidad(){
			return cant;
		}
		
		void encolar(persona a){
		
			if (cant<MAX){
				u=(u+1)% MAX;
				arreglo[u]=a;
				cant++;
				}else{
					cout<<"no se pudo sumar, la cola esta llena"<<endl;
				};
		};
		persona desencolar(){
			persona aux;
			
			if (cant>0){
				aux=arreglo[p];
				p = (p + 1) % MAX;
				cant-=1;
				
				return aux;
			}else{cout<<"La cola esta vacia";
			return aux;
			}
		
		}
};

persona sacarTurno(){
    persona aux;
    cout<<"Cargando datos de la perosona.\nIngrese el dni: ";
    cin>>aux.dni;
    cout<<"Ingrese la operacion que desea realizar:\n D. Deposito\n E. extraccion\n O.Varios\n";
    cin>>aux.operacion;
    while(aux.operacion !='e'&&aux.operacion!='d'&& aux.operacion!='o'){
        cout<<"ingrese un caracter valido(e,d,o): ";
        cin>>aux.operacion;
    };
    return aux;
};
persona liberarCola(fila &a){
    
    persona aux=a.desencolar();
    return aux;
}


/*4.	Se desea modelar las filas de un banco, de cada persona se sabe el DNI y la
 operación que desea realizar, las operaciones son depósitos(D), extracciones(E), varios 
 (O). Declare tres Queues de cada tipo de operación correspondiente. 
Inicialmente la gente forma 1 fila, cuando comienza la atención las personas se distribuyen 
según la operación, sacando un turno (botón “Sacar turno”). Modele estructura persona. Debe 
introducir por una pantalla un DNI, y elegir el tipo de operación, según sea, se encola la 
persona para ser atendida en la fila correspondiente. 
Otra función, elimina gente de la fila elegida. Se deben refrescar las filas con cada nuevo 
turno que se saque y agregue.
*/
int main(int argc, char const *argv[])
{
    fila d,e,o;
    persona aux;
    int repuesta;
    bool flag;
do{
cout<<"Que desea hacer?\n 1.Sacar turno\n 2.Atender persona\n 3.Salir\n";
cin>>repuesta;
while(repuesta<1||repuesta>3){
    cout<<"Debe elegir entre 1 y 3: ";
    getchar();
    cin>>repuesta;
}
switch (repuesta)
{
case 1:aux= sacarTurno();
    cout<<"persona: "<<aux.dni<<endl;
    switch (aux.operacion)
    {
    case 'e': e.encolar(aux);
    break;
    case 'd': d.encolar(aux);
    break;
    case 'o': o.encolar(aux);
     break;
     default: cout<<"no se puede cargar"<<endl;
     break;
    }
    break;
case 2: 
    cout<<"Eliga la cola que desea liberar.\n1.Depositos.\n2.Extracciones.\n3.Varios\n";
    cin>>repuesta;
    while(repuesta<1||repuesta>3){
        cout<<"Debe elegir entre 1 y 3: ";
        cin>>repuesta;
    }
    switch (repuesta)
    {
    case 1: aux=liberarCola(d);
        cout<<"La persona con DNI: "<<aux.dni<<" fue atendida."<<endl;
        break;
    case 2: aux=liberarCola(e);
        cout<<"La persona con DNI: "<<aux.dni<<" fue atendida."<<endl;
        break;
    case 3: aux=liberarCola(o);
        cout<<"La persona con DNI: "<<aux.dni<<" fue atendida."<<endl;
        break;
    }
    break;
case 3: flag=true;
break;    
default:
    break;
}
}while(!flag);



    return 0;
}

