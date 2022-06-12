#include<iostream>
#include<conio.h>
#include<string.h> //Para usar el tipo de variable STRING.
#include<stdlib.h> //Para COLORES y funciones de SYSTEM.
using namespace std; //AGENDA DE TAREAS
int main(){
	int op,tar,hora,detail,day,ndia,ps;
	string user,contra;
	system("color 8F"); //Posicion 1 --> FONDO !---! Posicion 2 --> COLOR DE LETRA
	
	cout<<"\t\t------------------------------"<<endl;
	cout<<"\t\tAGENDA DE TAREAS - FARIT REASCO"<<endl;
	cout<<"\t\t------------------------------"<<endl;
	cout<<"Bienvenido a su agenda personal.\n";
	cout<<"Necesita tener una cuenta para continuar...\n";
	cout<<"1. Crear Cuenta\n";
	cout<<"2. Iniciar Sesion\n";
	cout<<"3. Salir\n";
	cout<<"Por favor, elija una opcion: ";cin>>op;
	
	system("color 0b");
	
	switch(op){
		case 1:
		cout<<"Por favor, complete la informacion requerida: \n";
		cout<<"Usuario: ";	cin>>user;
		cout<<"Clave: "; cin>>contra;
		cout<<"Validando Usuario\n";
		cout<<"...\n";
		cout<<"Validando Clave\n";
		cout<<"...\n";
		cout<<"Registro Exitoso, Bienvenido "<<user<<endl;
		cout<<"...\n";
		cout<<"Pulse 1 para continuar: "; cin>>ps;
		if(ps==1){
			cout<<"****Iniciando Agenda****\n";
			cout<<"Digite los datos para su agenda "<<endl;
			cout<<"Cantidad de dias para registrar: "; cin>>ndia;
			for(int i=1;i>=10;i++){
				cout<<"Dia --> "<<endl; cin>>day;
				cout<<"Hora -->  "<<endl; cin>>hora;
				cout<<"Tarea -->  "<<endl; cin>>tar;
				cout<<"Detalle (Extra) -->  "<<endl; cin>>detail;	
					
				cout<<"AGENDA LISTA: "<<endl;
			}
		}
		break;
			
		case 2:
		cout<<"Usuario: ";	cin>>user;
		cout<<"Clave: "; cin>>contra;
		cout<<"****Iniciando Agenda****\n";
		cout<<"Digite los datos para su agenda "<<endl;
		cout<<"Cantidad de dias para registrar: "; cin>>ndia;
		for(int i=1;i<=ndia;i++){
			cout<<"Dia --> "; cin>>day;
			cout<<"Hora -->  "; cin>>hora;
			cout<<"Tarea -->  "; cin>>tar;
			cout<<"Detalle (Extra) -->  "; cin>>detail;	
					
			cout<<"AGENDA LISTA: "<<endl;
		break;
		}
		
		case 3:
			system("exit");
		break;
	}
}
