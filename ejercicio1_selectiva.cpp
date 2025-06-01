//Algoritmo Calcular el presupuesto que recibira cada area del hospital
#include <iostream>
using namespace std;
int main (){
	float C1,C2,C3,PROM;
	//Entrada
	cout<<"Ingrese la primera calificacion: "<<endl;
	cin>>C1;
	cout<<"Ingrese la segunda calificaicon: "<<endl;
	cin>>C2;
	cout<<"Ingrese la tercera calificaicon: "<<endl;
	cin>>C3;
	//Proceso
	PROM = (C1+C2+C3)/3;
	if(PROM >= 70){
		cout<<"APROBADO"<< endl;
	}
	else
	{
		cout<<"DESAPROBO"<< endl;
}
	}
