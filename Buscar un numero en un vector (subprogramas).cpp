#include <iostream>
using namespace std;

void leervector(int []);
int leervalorbuscado (int);
bool estaelvalorenelvector(int ,int []);

int main(int argc, char *argv[]) {
	
	int valorbuscado;
	int numeros[10];
	int a;
	
	leervector (numeros);
	valorbuscado= leervalorbuscado(a);
	if (estaelvalorenelvector(valorbuscado,numeros)) cout<<"Esta!";
	else cout<<"No esta";
	
	return 0;
}

void leervector(int x[]) {
	cout<<"Ingrese  los 10 numeros del vector"<<endl;
	for (int i=0; i<10; i++)
		cin>>x[i];
}

int leervalorbuscado (int x){
	cout<<"Ingrese el valor buscado: ";
	cin>>x;
	return x;
}

bool estaelvalorenelvector(int x,int y[]){
	bool t=false;
	for (int i=0; i<10; i++){
		if (x==y[i])  t=true;
	}
	return t;
}
