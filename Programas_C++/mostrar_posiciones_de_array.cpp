#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arreglo[100];
	int num;
	
	cout<<"Ingrese la cantidad de elementos que contendra el VECTOR: "; cin>>num;
	
	for(int i=0;i<num;i++){
		cout<<"Digite un numero: "; cin>>arreglo[i];
	}
	
	for(int i=0;i<num;i++){
		cout<<"Posicion N"<<i<<". --> "<<arreglo[i]<<"\n";
	}
	getch();
}
