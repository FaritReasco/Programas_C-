#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int uno,dos,tres,cua;
	
	cout<<"Ingrese tres numeros: "<<endl; cin>>uno>>dos>>tres;
	cout<<"Ah! Lo olvidava! Necesito que ingreses un 4to numero: "; cin>>cua;
	
	if(cua==uno or cua==dos or cua==tres){
		cout<<"El 4to Numero, coincide con algun numero de los ingresados anteriormente.";
	}
	else{
		cout<<"Ta bueno pa! No coincide, Mirrey!";
	}
	
	getch();
	return 0;
}
