#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num, unidades, decenas, centenas, millar;
	
	cout<<"Digite un numero: "; cin>>num;
	
	unidades = num%10; num/ = 10;
	decenas = numero%10; numero/= 10;
	centenas = numero%10; numero/10;
	millar = numero%10; num/=10;
	
	switch(millar){
		case 1: cout<<"M";; break;
		case 2: cout<<"MM";; break;
		case 3: cout<<"MMM";; break;
	}
	
	getch();
	return 0;
}
