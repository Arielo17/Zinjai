#include <iostream>
using namespace std;

int horastrabajo (int);
int antiguedad (int);
int retencion (int);

int main(int argc, char *argv[]) {
	
	char a='s';
	string b,c;
	int d,e,f;
	cout<<"----- LIQUIDACION DE SUELDOS -----"<<endl<<endl;
	while (a=='s') {
		cout<<"NOMBRE: ";
		cin>>b;
		cout<<"APELLIDO: ";
		cin>>c;
		cout<<"Cantidad de horas trabajadas: ";
		cin>>d;
		cout<<"Antigüedad (en años): ";
		cin>>e;
		f=horastrabajo(d)+antiguedad(e);
		cout<<"El sueldo NETO que le corresponde a "<<b<<" "<<c<<" es: $"<<retencion(f)<<endl;
		cout<<endl;
		cout<<"Desea ingresar otro trabajador?  s=SI  n=NO"<<endl;
		cin>>a;
		cout<<endl;
	}
	
	return 0;
}

int horastrabajo (int x){
	int horas=0;
	if (x<=160) horas=x*120;
	else horas=(160*120+(x-160)*150);
	return horas;
}

int antiguedad (int x){
	int ant=0;
	ant=((x-(x%5))/5)*800 + (x % 5)*300;
	return ant;
}

int retencion (int x){
	int ret=0;
	if (x<=18000) ret=x-x*0.2;
	else ret=x-x*0.24;
	return ret;
}

