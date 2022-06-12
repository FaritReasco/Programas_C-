#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,a;
	
	cout<<"Digite la tabla a consultar: "; cin>>num;
	for(int i=1;i<=12;i++){
		cout<<num<<" x "<<i<<" = "<<num * i<<endl;
	}
	
	getch();
}
