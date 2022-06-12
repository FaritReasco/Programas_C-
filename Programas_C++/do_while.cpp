#include<iostream> // Libreria standar de c++
#include<conio.h> //Libreria para usar la funcion GETCH, que sirve para impedir que el ejecutable se cierre.
using namespace std; //Para no usar el std::, antes de cada instruccion.
int main(){
	int i;
	i=1;
	
	do{
		
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	getch();
}
