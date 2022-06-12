#include<iostream> // Libreria standar de c++
#include<stdlib.h>
using namespace std;

void loop(char c[3][3]);
void intro(char c [3][3]);
void tablero(char c [3][3]);

int main(){
	char c[3][3];
	
	loop(c);//llama a las funciones y hace un CLS
	
	system("pause");
}
void loop(char c [3][3]){
	intro(c);
	tablero(c);
}

void intro(char c[3][3]){
	int i,j;
	char aux;
	
	aux = '1';
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j] = aux++;
		}
	}
}

void tablero(char c[3][3]){
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j < 2){
				cout<<c[i][j]<<"  | ";
			}
			else{
				cout<<c[i][j];
			}
		}
		if(i<2){
			cout<<"\n-------------\n",c[i][j];
		}
	}
	cout<<"\n \n";
} 




