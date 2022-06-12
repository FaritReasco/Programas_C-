#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h> //ES LA LIBRERIA MATEMATICA DE C++.
using namespace std;
int main(){
	
	int num, op, base, expo, tot, general, gg;
	
	cout<<"\tBIENVENIDO A MI PROGRAMA!\n";
	cout<<"1. Cubo de un numero"<<endl; 
	cout<<"2. Numero Par o Impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elija una opcion [1-3] --> "; cin>>op;
	switch(op){
		case 1:
		do{
			cout<<"Opcion 1 -  Cubo de un numero -"<<endl;
			cout<<"Ingrese el numero Base: "; cin>>base;
			cout<<"Ingrese el numero  Exponente: "; cin>>expo;
			
			tot = pow(base,expo);
			cout<<"Resultado --> "<<tot<<"\n";
			
			cout<<"----------------------"<<endl;
			cout<<"Digite 1 para repetir, 0 para salir. "; cin>>gg;
		}while(gg==1);	
		break;
	
		case 2:
		do{
		cout<<"Opcion 2 - Numero Par o Impar - "<<endl;
		cout<<"Ingrese un numero: "; cin>>num;
		
		if(num==0){
			cout<<"El numero 0 es NEUTRO";
		}
		else if(num%2==0){
			cout<<"El numero ingresado es PAR";
		}
		else{
			cout<<"El numero ingresado es IMPAR";
		}
		
		cout<<"\n";
		
		cout<<"----------------------"<<endl;
		cout<<"Digite 1 para repetir, 0 para salir. "; cin>>gg;
		}while(gg==1);	
		break;	
		
		case 3:
			system("exit");
			break;
	}
	
	getch();
	return 0;
}
