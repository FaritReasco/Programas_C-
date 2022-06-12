#include<iostream>
#include<conio.h>
using namespace std;
int main(){/* 9.- Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas, 
posteriormente mostrar la matriz en pantalla.*/
	int numeros[100][100],filas,columnas;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	//Rellenando la matriz	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"] -->  ";
			cin>>numeros[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	getch();
}
