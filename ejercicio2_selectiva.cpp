//Algoritmo Calcular el descuento a cliente si la compra supera S/. 1,000.00
#include <iostream>
using namespace std;
int main (){
	float COMPRA,PAGOF;
	//Entrada
	cout<<Ingrese el valor de la compra: <<endl;
	cin>>COMPRA;
	//Proceso
	if(COMPRA > 1000){
		PAGOF=COMPRA-COMPRA*0.2;
	}
	else
	{
		PAGOF = COMPRA;
}
	//Salida
	cout<<El pago final es: <<PAGOF<<endl;
	}
