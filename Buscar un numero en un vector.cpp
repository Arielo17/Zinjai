#include <iostream>
#include <stdlib.h>

using namespace std;

int numeros[10],numbuscado=0, contador=0,cont=0;

int main(int argc, char *argv[]) {
	
	//Para hacer la parte de sabersi estan ordenados, se elimina el random y se ingresan manual// 
	//cout<<"Ingrese los 10 n�meros"<<endl;
	for (int i=0;i<10;i++) {		
		numeros[i]=rand()%20; 		//cin>>numeros[i];
	}
	cout<<"Ahora ingrese un n�mero para ver si el mismo esta dentro del vector"<<endl;
	cin>>numbuscado;
	for (int i=0;i<10;i++) {
		if (numbuscado==numeros[i]) contador=contador+1;
	}
	
	if (contador>=1) {
		cout<<"La cantidad de veces que "<<numbuscado<<" aparece en la cadena es: "<<contador<<endl;
	}
	else {
		cout<<"No se encontro el n�mero "<<numbuscado<<endl;
	}
	for (int i=0;i<10;i++) {
		cout<<numeros[i]<<" - "<<endl;
	}
	int i=0;
	while (numeros[i]<numeros[i+1] && i<9) {
		cont=cont+1;
		i++;
	}
	
	if (cont==9) cout<<"Los n�meros estan ordenados";
	else cout<<"Los n�meros no estan ordenados";
	
	
	return 0;
}

