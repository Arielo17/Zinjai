#include <iostream>
using namespace std;

void modificar (int &);


int main(int argc, char *argv[]) {
	
	int a,b;
	a=5;
	b=7;
	modificar (a);
	modificar (b);
	cout<<a<<endl;
	cout<<b;
	
	return 0;
}

void modificar (int &x){
	x=x+5;
}
