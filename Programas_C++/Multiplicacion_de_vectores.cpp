#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num[5] = {1,2,3,4,5};
	int mul=1;
	
	for(int i=1;i<5;i++){
		mul*= num[i];
	}
	cout<<mul;
	
	getch();
}
