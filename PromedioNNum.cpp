#include <iostream>
using namespace std;

int i;
float num,suma=0;

int main(int argc, char *argv[]) {
	cout<<"Escriba la cantidad de números a ingresar"<<endl;
	cin>>i;
	for (int j=1; j<=i; j++) {
		cin>>num;
		suma=suma+num;
	}
	cout<<"El promedio es: "<<suma/i;
	return 0;
}

