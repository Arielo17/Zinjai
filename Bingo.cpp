//15 numeros (no repetidos, entre 1 y 90, no puede haber mas de tres numero por decena, ordenarlos)//

#include <iostream>
#include <stdlib.h> //para el MENU//

using namespace std;

void leernumeros(int[]);
bool repeticion (int []);
bool rango (int []);
bool decenas(int []);

int main(int argc, char *argv[]) {
	
	int numeros[15];
	char opcion='s';
	
	while (opcion=='s'|| opcion=='S') {
		system ("cls");//para limpiar pantalla//
		
		cout<<"Ingrese los números del Biiiiiiiiingo!!"<<endl;
		leernumeros(numeros);
		if (repeticion (numeros)) cout<<"Hay números repetidos"<<endl;
		if (rango (numeros)) cout<<"Hay un número ingresado fuera del rango"<<endl;
		if (decenas (numeros)) cout<<"Hay mas de tres números por decena"<<endl;
		if (!(repeticion (numeros)||rango (numeros)||decenas (numeros))) cout<< "El carton esta cooooorrecto!!"<<endl;
		
		cout<<"Desea reiniciar el programa?  s=SI  n=NO"<<endl;
		cin>>opcion;
	}
	return 0;
}

void leernumeros(int x[]) {
	for (int i=0; i<15; i++)
		cin>>x[i];
}

bool repeticion (int x[]){
	int cont=0;
	bool t=false;
	for (int j=0; j<14; j++){
	
		for (int i=j; i<14;i++){
			if (x[j]==x[i+1]) cont++;
		}
	}
	if (cont>0) t=true;
	return t;
}

bool rango (int x[]){
	bool t=false;
	for (int i=0; i<14;i++){
		if (x[i]<1 || x[i]>90) t=true;
	}
	return t;
}

bool decenas(int x[]){
	bool t=false;
	int r=0;
	for (int j=0; j<9; j++){
		for (int i=0; i<14; i++){
			if (x[i]>=(10*j) && x[i]<(10*(j+1))) r++;
		}
		if (r>3) t=true;
		r=0;
	}
	return t;
}
