#include <iostream>
using namespace std;

void intercambiar (int &,int &);

int main(int argc, char *argv[]) {
	int a,b;
	a=5;
	b=7;
	intercambiar (a,b);
	cout<<a<<endl;
	cout<<b;
	
	return 0;
}

void intercambiar (int &x, int &y) {
	int aux;
	aux=x;
	x=y;
	y=aux;
}
