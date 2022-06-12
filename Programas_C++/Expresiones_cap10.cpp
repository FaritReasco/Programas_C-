#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero==0){
		cout<<"El numero 0 es NEUTRO";
	}
	else if(numero%2==0){
		cout<<"El numero ingresado es PAR";
	}
	else {
		cout<<"El numero inrgesado es IMPAR";
	}
	
	getch();
	return 0;
}
