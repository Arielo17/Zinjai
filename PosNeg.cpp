#include <iostream>
using namespace std;

int num;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un n�mero"<<endl;
	cin>>num;
	if (num==0) cout<<"El n�mero "<<num<<" no es POSITIVO NI NEGATIVO";
	else {
		if (num>0) cout<<"El n�mero "<<num<<" es POSITIVO";
		else cout<<"El n�mero "<<num<<" es NEGATIVO";
	}
	return 0;
}

