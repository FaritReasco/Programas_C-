#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	float a,b,c,d,e,f,resultado;
	
	cout<<"\t\t\t\t\t**BIENVENIDO QUERIDO USUARIO**\n";
	cout<<"ingrese a: "; cin>>a;
	cout<<"ingrese b: "; cin>>b;
	cout<<"ingrese c: "; cin>>c;
	cout<<"ingrese d: "; cin>>d;
	cout<<"ingrese e: "; cin>>e;
	cout<<"ingrese f: "; cin>>f;
	
	resultado = (a+b/c) + (d+e/f);
		
	cout<<"Resultado: "<<resultado;
	getch();
}
