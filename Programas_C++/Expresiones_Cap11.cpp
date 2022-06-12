#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	
	cout<<"DIGITE UN NUMERO: "; cin>>num;
	
	
	if(num==0){
		cout<<"El numero 0 es NEUTRO";
	}
	else if(num>0){
		cout<<"El numero ingresado es POSITIVO";
	}
	else{
		cout<<"EL numero ingresado es NEGATIVO";
	}
	
	
	getch();
	return 0;
}
