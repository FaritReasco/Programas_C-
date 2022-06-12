#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int meses;
	
	cout<<"Digite un numero entr 1-12: "; cin>>meses;
	switch(meses){
		case 1: cout<<"Enero"; break;
		case 2: cout<<"Febrero"; break;
		case 3: cout<<"Marzo"; break;
		case 4: cout<<"AP"; break;
		case 5: cout<<"MY"; break;
		case 6: cout<<"JN"; break;
		case 7: cout<<"JL"; break;
		case 8: cout<<"AG"; break;
		case 9: cout<<"SEP"; break;
		case 10: cout<<"OCT"; break;
		case 11: cout<<"NOV"; break;
		case 12: cout<<"DIC"; break;
		
		default: cout<<"No existe un mes correspondiente al numero inrgesado..."; break;	
	}
	
	return 0;
}
