//devolver el mayor de 3 numeros
#include <iostream>
using namespace std;

int main(){
	double num1, num2, num3, NumeroMayor;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>num3;
	if (num1>num2){
		NumeroMayor=num1;
	} else {
		NumeroMayor=num2;
	}
	if (num3>NumeroMayor){
		NumeroMayor=num3;
	}
	cout<<"El numero mayor es: "<<NumeroMayor;
	return 0;
}
