#include <iostream>
using namespace std;

int suma=0,num,t,i=1;

int main(int argc, char *argv[]) {
	cout<<"ingrese la cantidad de n�mero a sumar";
	cin>>t;
	for (int i=1; i<=t; i++) {
		cout<<"Ingrese N� "<<i<<":"<<endl;
		cin>>num;
		suma=suma+num;
	}
	cout<<"El resultado es: "<<suma;
	return 0;
}


	
