/*
Estudiante: Reasco Torres Farit Alexander.
Orden: 4.- Realice un programa que lea en la entrada est�ndar n�meros hasta que se introduzca un 0, 
en ese momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores mayores 
a cero le�dos.
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
