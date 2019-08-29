#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void mezclar(int x[],char y[]);
void intercambiar (int &x, int &y);
void intercambiar (char &x, char &y);

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	char palo[4], palos[48];
	int num[48];
	palo[0]='O', palo[1]='C', palo[2]='E', palo[3]='B';
	
	for (int i=0;i<4;i++){
		
		for (int j=0;j<12;j++){
			num[j+12*i]=j+1;
			palos[j+12*i]=palo[i];
			cout<<num[j+12*i]<<"  "<<palos[j+12*i]<<endl;
		}
	}
	cout<<endl<<endl<<endl;
	mezclar(num,palos);
	for (int i=0;i<48;i++){
		cout<<num[i]<<"  "<<palos[i]<<endl;
	}
	
	return 0;
}
	
void mezclar(int x[],char y[]){
	for (int i=0;i<50;i++){
		intercambiar(x[rand()%48],x[rand()%48]);
		intercambiar(y[rand()%48],y[rand()%48]);
	}
}
	
void intercambiar (int &x, int &y) {
	int aux;
	aux=x;
	x=y;
	y=aux;
}
void intercambiar (char &x, char &y) {
	char aux;
	aux=x;
	x=y;
	y=aux;
}
