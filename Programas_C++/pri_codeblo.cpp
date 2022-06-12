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

	archivo.open("nuevoarchivo.txt",ios::out);

	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	else{
		cout<<"Archivo creado exitosamente";
	}

	archivo<<"Hola mundo!"<<endl;

	archivo.close();
}
