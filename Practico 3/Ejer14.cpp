/* Opcional. En un comercio trabajan 20 vendedores, 
distribuidos en 4 secciones (bazar, accesorios,
indumentaria, calzados). Se pide que se almacene la 
información de sus empleados.
• Defina la estructura principal empleado se dese 
saber: nombre, legajo, sector, ventas diarias de cada 
día de la semana, ventas totales de esa semana (calculable).
El comercio, tiene una política de premios semanales 
por ventas; para esto, al fin de cada semana determina
cuales son los vendedores con mayores ventas por sector,
 y se guarda en Premiados.
• Defina la estructura secundaria Premiados para 
almacenar por cada sector, legajo del empleado de mayor
venta semanal y total vendido.
Realice un programa que permita:
a. Cargar los datos de los empleados
b. Calcular el total de ventas semanales por vendedor.
c. Determinar por cada sector, el vendedor con 
mayores ventas, esta información debe ser almacenada 
en la segunda estructura.
d. Mostrar los nombres de los empleados premiados en una semana.
e. Listar todos los empleados y el total vendido.
*/

#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std; 

struct empleado{
/*nombre, legajo, sector, ventas diarias de cada 
día de la semana, ventas totales de esa semana (calculable).
*/
string nombre;
int legajo;
string sector;

}