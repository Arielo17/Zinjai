#include <iostream>
using namespace std;

float listas[4], votos [4], total=0;

int main(int argc, char *argv[]) {
	
	for (int i=0; i<4; i++){
		cout<<"ingrese el nombre de las lista "<<i+1<<": ";
		cin>>listas[i];
		cout<<"Ingrese los votos de la Lista "<<listas[i]<<": ";
		cin>>votos[i];
		total=total+votos[i];
		
	}
	cout<<"LISTA    VOTOS    %"<<endl;
	for (int i=0; i<4; i++) cout<<listas[i]<<"          "<<votos[i]<<"          "<<(votos[i]/total)*100<<endl;
	cout<<"Las listas que pasan a las elecciones generales son:"<<endl;
	for (int i=0; i<4; i++){
		if ((votos[i]/total)*100>(3/2)) cout<<listas[i]<<endl;
	}
	return 0;
}

