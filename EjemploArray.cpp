#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int notas[10];
	for (int i=0;i<10;i++){
		cout<<"ingrese la nota "<<i+1<<": ";
		cin>>notas[i];
		if (notas[i]>10) {
			cout<<"Ingreso un número incorrecto. Por favor vuelva a ingresar la nota"<<endl;
			cin>>notas[i];
		}
	};
	for (int i=0;i<10;i++){
		cout<<notas[i];
		if (i<9) cout<<" - ";
	}
	return 0;
}

