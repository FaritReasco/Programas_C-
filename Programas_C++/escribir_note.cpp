#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void escribir();
int main() {
	escribir();
	system("pause");
}
void escribir() {
	ofstream archivo;

	archivo.open("inicio.txt", ios::out);

	if(archivo.fail()) {
		cout << "No se pudo abrir el archivo" << endl;
		exit(1);
	}
	archivo << "UEDFB\n";
	archivo << "FECHA: 29/5/2022\n";
	archivo << "ESTUDIANTE: Reasco Torres Farit Alexander\n";
	archivo << "CURSO: 2do Bachillerato Tecnico\n";
	archivo << "\t\t\tPROGRAMACION EN C++\n";
	archivo << "El punto de partida habitual para un programador de C++ es una aplicación ¡Hola, mundo! que se ejecuta en la línea de comandos. Eso es lo que creará primero en Visual Studio en este artículo, y luego pasaremos a algo más desafiante: una aplicación de calculadora.";
	archivo.close();
}
