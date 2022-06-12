#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){ //FOR
	int tabla;
	
	cout<<"Digite la Tabla entre [1-12]--> "; cin>>tabla;
	
	if(tabla==0){
		cout<<"No names, tabla del 0, kbron?"<<endl;
	}
	else if(tabla>= 1 && tabla<=12){
			for(int i=1;i<=20;i++){
			cout<<tabla<<" x "<<i<<" = "<<tabla * i<<endl;
		}
	}
	else{
		cout<<"Oh vaya! Recuerda el rango [1-12]"<<endl;
	}
	
	getch();
	return 0;
}
