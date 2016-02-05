#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

void ordenar(double []);
void imprimir(double []);

int main( int argc, char*argv[]){
	int opcion=0;
	cout<<"1. Ejercicio 1\n2. Ejercicio 2\nIngrese Opcion: ";
	cin>>opcion;
	if(opcion==1){
		srand(time(NULL));
		int num=-500+rand()%((500+1)-(-500));
		int adivinar=600;
		double scores[10];
		int intentos=0;
		int seguir=0;
		for(int i=0; i<10; i++){	
			while(adivinar!=num){
				cout<<"Ingrese Numero: ";
				cin>>adivinar;
				intentos++;
			}
			scores[i]=intentos;
			intentos=0;
			cout<<"Adivinar Otro Numero:\n0. Si\n1. No";
			cin>>seguir;
			if(seguir==1)
				break;
		}	
	}
	if(opcion==2){

	}
	return 0;
}

void ordenar(double scores[]){
	double temp;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(scores[j]<scores[i]){
				temp=scores[i];
				scores[i]=scores[j];
				scores[j]=temp;
			}
		}
	}
}

void imprimir(double scores[]){
	for(int i=0; i<10; i++){
		cout<<"Posicion "<<i+1<<": "<<scores[i]<<endl; 
	}
}
