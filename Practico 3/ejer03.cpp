/*Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior. Llamada 
Empleado que guarda nombre, Dirección (de tipo 
infoDireccion), y salario. Declare un arreglo de 2 empleados, y 
cargue las estrcuturas Empleado desde el main.*/

struct infoDireccion{
	string calle, ciudad, provincia;
};
struct empleado{
	string nombre;
	struct infoDireccion direccion;
	double salario;
};
int main(){
	
	struct empleado lista[2];
	for (int i=0; i<2;i++){
		cout<<"Empleado "<<i+1<<endl;
		cout<<"Ingrese el nombre del empleado: ";
	getline(cin,lista[i].nombre);
	cout<<"Ingrese la direccion: ";
	getline(cin,lista[i].direccion.calle);
	cout<<"Ciudad: ";
	getline(cin,lista[i].direccion.ciudad);
	cout<<"Provincia: ";
	getline(cin,lista[i].direccion.provincia);
	cout<<"Salario: ";
	cin>>lista[i].salario;
	cin.get();
	
	}
	for (int i=0;i<2;i++){
		cout<<"Empleado "<<i<<endl;
		printf("Nombre: %s, direccion: %s, ciudad: %s, provincia: %s, salario: %d", lista[i].nombre.c_str(),lista[i].
		direccion.calle.c_str(),lista[i].direccion.ciudad.c_str(),lista[i].direccion.provincia.c_str(), lista[i].salario)
	;}
	
	
	return 0;
}
