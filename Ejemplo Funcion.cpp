#include <iostream>
using namespace std;

int comparar (int,int);


int main(int argc, char *argv[]) {
	
	int a,b;
	cout<<"Escriba el primer n�mero a comparar: ";
	cin>>a;
	cout<<"Escriba el segundo n�mero a comparar: ";
	cin>>b;
	cout<<"El mayor es: "<<comparar (a,b);
	
	return 0;
}

int comparar (int x, int y){
	if (x>y) return x;
	else return y;
}

