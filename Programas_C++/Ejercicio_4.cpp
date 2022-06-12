/*
Estudiante: Reasco Torres Farit Alexander.
Orden: 4.- Realice un programa que lea en la entrada estándar números hasta que se introduzca un 0, 
en ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores 
a cero leídos.
WHILE - DO WHILE
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num, a;
	int i;
	i=1;
	
	cout<<"Ingrese la cantidad de numeros a ingresar: "; cin>>num;
	
	while(i<=num){
		cout<<"Ingrese un numero: "; cin>>a;
		i++;
	}
	
	
	
	getch();
}
