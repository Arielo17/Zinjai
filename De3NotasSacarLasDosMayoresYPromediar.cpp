#include <iostream>
using namespace std;

float mayor (float,float);
float menor (float,float);

int main(int argc, char *argv[]) {
	float a,b,c;
	cout<<"Ingrese el primer valor: ";
	cin>>a;
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	cout<<"Ingrese el tercer valor: ";
	cin>>c;
	cout<<"El promedio es: "<<(mayor(a,b)+mayor(menor(a,b),c))/2;
	
	return 0;
}

float mayor (float x, float y){
	if (x>y) return x;
	else return y;
}

float menor (float x, float y){
	if (x<y) return x;
	else return y;
}
