//Algoritmo Calcular el pago por camisas si son mas o menos de 3 (desct 20%,10%)
#include <iostream>
using namespace std;
int main (){
	float NUMCAMI,PRECAMI,PAGOF;
	//Entrada
	cout<<"Ingrese la cantidad de camisas: "<<endl;
	cin>>NUMCAMI;
	cout<<"Ingrese el precio por camisa: "<<endl;
	cin>>PRECAMI;
	//Proceso
	PAGOF=NUMCAMI*PRECAMI;
	if(NUMCAMI >= 3){
		PAGOF=PAGOF-(PAGOF*0.2);
	}
	else
	{
		PAGOF=PAGOF-(PAGOF*0.1);
}
	//Salida
	cout<<"El pago final por "<<NUMCAMI<<" camisas es: "<<PAGOF<<endl;
	}
