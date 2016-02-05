#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

void ordenar(int []);
void imprimir(int []);

int main( int argc, char*argv[]){
	int opcion=0;
	cout<<"1. Ejercicio 1\n2. Ejercicio 2\nIngrese Opcion: ";
	cin>>opcion;
	if(opcion==1){
		srand(time(NULL));
		int num=-500+rand()%((500+1)-(-500));
		int adivinar=600;
		int scores[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
		int intentos=0;
		int seguir=0;
		int i=0;
		//int temp=0;
		cout<<"-----------"<<num<<"--------------"<<endl;
		while(seguir==0){	
			//int num=-500+rand()%((500+1)-(-500));
			while(adivinar!=num){
				intentos++;
				cout<<"Ingrese Numero: ";
				cin>>adivinar;
				//intentos++;
				//if(adivinar==num)
					//temp=1;	
			}
			scores[i]=intentos;
			i++;
			intentos=0;
			adivinar=600;
			cout<<"Seguir? 0. Si 1. No: ";
			cin>>seguir;
			//if(seguir==1)
				//break;
		}
		ordenar(scores);
		cout<<"---Tabla de Highscore---"<<endl;
		imprimir(scores);	
	}
	if(opcion==2){

	}
	return 0;
}

void ordenar(int scores[]){
	int  temp;
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

void imprimir(int scores[]){
	for(int i=0; i<10; i++){
		cout<<"Posicion "<<i+1<<": "<<scores[i]<<endl; 
	}
}
