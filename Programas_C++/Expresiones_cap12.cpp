#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	if(edad>=18&edad<=25){ //(bla bla)&&(bla bla)
		cout<<"La edad Ingresada esta en el rango de 18-25 anios!";
	}
	else{
		cout<<"La edad Ingresada NO esta en el rango de 18-25 anios!";
	}
	
	getch();
	return 0;
}
