#include <iostream>
using namespace std;

int num;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un número"<<endl;
	cin>>num;
	if (num==0) cout<<"El número "<<num<<" no es POSITIVO NI NEGATIVO";
	else {
		if (num>0) cout<<"El número "<<num<<" es POSITIVO";
		else cout<<"El número "<<num<<" es NEGATIVO";
	}
	return 0;
}

