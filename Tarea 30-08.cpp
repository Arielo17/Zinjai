#include <iostream>
using namespace std;

int n1,n2,n3,peor;

int main(int argc, char *argv[]) {
	cout<<"Ingrese los numeros"<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	peor=n1;
	if (n2<peor) peor=n2;
	if (n3<peor) peor=n3;
	cout<<"la nota es: "<<(n1+n2+n3-peor)/2;
	return 0;
}

