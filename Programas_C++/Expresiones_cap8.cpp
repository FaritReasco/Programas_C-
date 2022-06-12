#include<iostream>
#include<conio.h>
#include<math.h> //LIBRERIA MATEMATICA DE C++
using namespace std;
int main(){
	
	float x,y, result;
	
	cout<<"Valor de X: "; cin>> x;
	cout<<"Valor de Y: "; cin>>y;
	
	cout.precision(3);
	result= (sqrt(x))/(pow(y,2)-1);  //SQRT = RAIZ CUADRADA -- POW = ELEVACION EXPONENCIAL...
					//POW(variable, exponente)
	
	cout<<"Resultado --> "<<result ;
	
	getch();
	return 0;
}
