#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void escribir();

int main(){
	escribir();
	system("pause");
}
void escribir(){
	ofstream archivo;
//	int archivo;
	
	archivo.open("hola.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	else{
		cout<<"Archivo creado exitosamente";
	}
	
	archivo<<"Hola mundo! Esto es un archivo de texto, salu2..."<<endl;
	
	archivo.close();
}
