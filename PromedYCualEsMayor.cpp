#include <iostream>
#include <conio.h>
using namespace std;

int suma=0, cantidad=0;

int main(int argc, char *argv[]) {
	
	int notas[10];
	char nombres[10][30];
	for (int i=0;i<10;i++){
		cout<<"Ingrese el nombre del alumno Nº: "<<i+1<<": ";
		cin>>nombres[i];
		cout<<"Ingrese la nota de "<<nombres[i]<<": ";
		cin>>notas[i];
		if (notas[i]>10) {
			cout<<"Ingreso un número incorrecto. Por favor vuelva a ingresar la nota de "<<nombres[i]<<": "<<endl;
			cin>>notas[i];
		}
		suma=suma+notas[i];
	};
	for (int i=0;i<10;i++){
		cout<<notas[i];
		if (i<9) cout<<" - ";
	}
	cout<<endl;
	cout<<"El promedio es: "<<suma/10;
	for (int i=0;i<10;i++){
		if (notas[i]>suma/10) cantidad=cantidad+1;
	}
	cout<<endl;
	cout<<"La cantidad de alumnos sobre el promedio es: "<<cantidad<<endl;
	for (int i=0;i<10;i++){
		if (notas[i]>suma/10) cout<<"El alumno "<<nombres[i]<<" tiene una nota mayor al promedio"<<endl;
	}
	getche();
	return 0;
}

