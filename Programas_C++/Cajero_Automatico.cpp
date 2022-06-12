#include<iostream>
#include<stdlib.h>

using namespace std;
main()
{		int cc,op,dr,sk,rt,ok,ed;
		int ss=1000;
		int d,r,x;
		double nc;
	cout<<"\t\t\t-------------------------------------------\n"<<endl;
	cout<<"\n\t\t\tCAJERO AUTOMATICO - BANCO ESMERALDAS PREMIUM\n"<<endl;
	cout<<"\t\t\t-------------------------------------------\n"<<endl;
	cout<<"Bienvenido de vuelta querido usuario"<<endl;
do{
	cout<<"Por favor ingrese su clave de acceso"<<endl;
	cin>>cc;
	if(cc==1234){
		cout<<"EL CAJERO TE DA LAS SIGUIENTES OPCIONES"<<endl;
		cout<<"Op 1. Retiros"<<endl;
		cout<<"Op 2. Depositos"<<endl;
		cout<<"Op 3. Consultar tu Saldo"<<endl;
		cout<<"Op 4. Salir"<<endl;
		cout<<"Por favor, elija una opcion"<<endl;
		cin>>op;
		switch(op){
			case 1: //OPCION 1 retiros
				cout<<"Esta en la opcion RETIROS"<<endl;
				cout<<"Ingrese la cantidad de retiros por realizar"<<endl;
				cin>>rt;
				for(x=1;x<=rt;x++){
				cout<<"Cuanto dinero desea retirar? Retiro N "<<x <<endl;
				cin>>dr;
				dr=dr;
					ss= (ss - dr);
				cout<<"RETIRO EXITOSO! El saldo actual es de: $ "<<ss<<endl;	
					if(dr>1000){
					cout<<"El valor que solicitas es mayor a tu saldo inicial que son: $ 1000 "<<endl,
					cout<<"Por favor,ingrese una cantidad diferente"<<endl;}
				}
			break;	
			case 2:   //OPCION 2 DEPOSITOS
			cout<<"Esta en la opcion DEPOSITOS"<<endl;
			cout<<"Sub Op 1. EFECTIVO"<<endl;
			cout<<"Sub Op 2. CHEQUE"<<endl;
			cout<<"**Escoja la opcion a Realizar**"<<endl;
			cin>>ok;
				switch(ok){
					case 1:
						cout<<"Ingrese la cantidad de efectivo a depositar"<<endl; cin>>ed;
						ss= (ss + ed);
						cout<<"DEPOSITO REALIZADO CON EXITO! La cantidad de dinero en la cuenta es de: $ "<<ss <<endl;
						break;
					case 2:
						cout<<"Ingrese su Numero de Cedula (C.I)"<<endl; cin>>nc;
						cout<<"Ingrese la cantidad de dinero a ingresar en el cheque para el deposito"<<endl; cin>>ed;
						ss= (ss + ed);
						cout<<"DEPOSITO REALIZADO CON EXITO! La cantidad de dinero en la cuenta es de: $ "<<ss <<endl;
						break;
				}
			break;
			case 3: //OPCION 3 CONSULTAR SALDO
				cout<<"Su saldo es de: $ "<<ss <<endl;
			break;
			
			case 4:
			system("cls");
			break;
		}
	}
	else{cout<<"Clave Incorrecta, ingrese una clave valida"<<endl;}
		cout<<"Pulse 1 para realizar otra accion de lo contrario pulse 0"<<endl;
		cin>>d;
		if(d==0)
		{
			cout<<"Gracias por usar el Cajero Automatico, tenga buen dia...";
		}
}while(d==1);	
}
