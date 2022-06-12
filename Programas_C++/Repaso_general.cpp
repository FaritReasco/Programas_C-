#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int numero, a,b,c,x,y, total=1, suma=0, factorial=1,elevacion=0;
	
	cout<<"Numero: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		if(numero%2==0){
			suma+=i;
		}
		else{
			suma-=i;
		}
	}
	cout<<suma;
	
	getch();
}
