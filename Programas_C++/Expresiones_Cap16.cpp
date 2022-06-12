#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int i;
	
	i=1;
	MessageBox(,"Hello","Caption",MB_OK);
	
	while(i<=100){
		cout<<i<<endl;
		i++;
	}
	
	getch();
	return 0;
}
