#include<iostream> // Libreria standar de c++
#include<conio.h> //Libreria para usar la funcion GETCH, que sirve para impedir que el ejecutable se cierre.
using namespace std; //Para no usar el std::, antes de cada instruccion.
int main(){
	//	WHILE
	
	int i;
	i=100;
	
	while(i>=1){
		cout<<i<<endl;
		i--;
	}
	
	getch();
}
