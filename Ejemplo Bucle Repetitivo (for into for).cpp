#include <iostream>
#include <stdlib.h>
using namespace std;

int cont=0,numeros[10];
int main(int argc, char *argv[]) {
	
	cout<<"Ingrese 10 numeros"<<endl;
	for (int i=0;i<10;i++) {
		cin>>numeros[i]; 		
	}
	
	for (int j=0; j<9; j++){
		
		for (int i=j; i<9;i++){
			if (numeros[j]==numeros[i+1]) cont++;
		}
	}
	if (cont>0) cout<<"Hay numeros repetidos, son:"<<cont<<endl;
	else cout<<"No hay numeros repetidos"<<endl;
	
	return 0;
}

