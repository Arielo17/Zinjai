#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lluviasdelmes(int mes,int lluvias[30][12]);
int acumuladoanual (int lluvias[30][12]);
int diaquemasllovio (int x[30][12]);
int diaquemenosllovio (int x[30][12]);

int main(int argc, char *argv[]) {
	int mes=0;
	srand(time(NULL));
	int lluvias[30][12];
	for (int x=0; x<30; x++){
		for (int y=0; y<12; y++){
			lluvias[x][y]=rand()%101;
		}
	}
	for (int x=0; x<30; x++){
		for (int y=0; y<12; y++){
		cout<<lluvias[x][y]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Ingrese el mes del que quiere saber el acumulado: ";
	cin>>mes;
	cout<<"El acumulado del mes "<<mes<< " es: "<<lluviasdelmes(mes,lluvias)<<endl;
	
	cout<<"El acumulado anual es de: "<<acumuladoanual(lluvias)<<endl;
	
	diaquemasllovio(lluvias);
	diaquemenosllovio(lluvias);
	
	return 0;
}

int lluviasdelmes(int mes,int lluvias[30][12]){
	
	int acum=0;
	for (int x=0; x<30; x++){
		acum=acum+lluvias[x][mes-1];
	}
	return 0;
}

int acumuladoanual (int lluvias[30][12]){
	int acum=0;
	for (int x=0; x<30; x++){
		for (int y=0; y<12; y++){
			acum=acum+lluvias[x][y];
		}
	}
	return 0;
}

int diaquemasllovio (int x[30][12]){
	int a=0;
	for (int i=0; i<30; i++){
		for (int j=0;j<12; j++){
			if (x[i][j]>a) {
				a=x[i][j];
			}
		}
	}
	cout<<"La máxima lluvia caida fue de: "<<a<<" mm"<<endl;
	return 0;
}

int diaquemenosllovio (int x[30][12]){
	int a=101;
	for (int i=0; i<30; i++){
		for (int j=0;j<12; j++){
			if (x[i][j]<a) {
				a=x[i][j];
			}
		}
	}
	cout<<"La mínima lluvia caida fue de: "<<a<<" mm"<<endl;
	return 0;
}
int mostrardia (){
	for (int
}
