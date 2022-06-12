#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int vector[100], mayor=0;
	int a,b,c;
	
	cout<<"Digite la cantidad de elementos del vector: "; cin>>b;	
	for(int i=0;i<b;i++){
		cout<<"Rellene el vector: "; cin>>vector[i];
		
		if(vector[i] > mayor){
			mayor = vector[i];
		}
	}
	cout<<"Mayor es: "<<mayor<<endl;
	getch();
}
