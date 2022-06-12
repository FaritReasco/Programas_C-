#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float practica, teorica, participacion,tot=0;
	
	cout<<"\tBIENVENIDO QUERIDO USUARIO!\n";
	
	cout<<"Nota de Practica: "; cin>>practica;
	cout<<"Nota Teorica: "; cin>>teorica;
	cout<<"Nota de Participacion: "; cin>>participacion;
	
	practica*= 0.30;
	teorica*= 0.60;
	participacion*= 0.10;
	
	tot= practica+teorica+participacion;
	cout<<"ota final: "<<tot<<endl;
	getch();
	return 0;
}
