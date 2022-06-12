#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int num,suma=0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;
	}
	
	cout<<"Resultado: "<<suma<<endl;
	
	getch();
}
