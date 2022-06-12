#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char letras[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	for(int i=0;i<27;i++){
		cout<<i+1<<" --> "<<letras[i]<<endl;
	}
	
	getch();
}
