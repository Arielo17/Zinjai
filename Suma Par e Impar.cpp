#include <iostream>
#include <conio.h>
using namespace std;

int sumai=0,sumap=0,num,t,i=1;

int main(int argc, char *argv[]) {
	cout<<"ingrese la cantidad de número a sumar: ";//sdnfkanefckansdck
	cin>>t;
	for (int i=1; i<=t; i++) {
		cout<<"Ingrese Nº "<<i<<":"<<endl;
		cin>>num;
		if (num%2==0) sumap=sumap+num;
			else sumai=sumai+num;
	}
	
	cout<<"La suma de los número pares es: "<<sumap<<endl;
	cout<<"La suma de los número impares es: "<<sumai;
	getch();
	return 0;
}
	
	
