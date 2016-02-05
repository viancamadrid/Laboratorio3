#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

void ordenar(int []);
void imprimir(int []);
int datos(int, int, int [4][3]);

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
			intentos++;
                        cout<<"Ingrese Numero: ";
                        cin>>adivinar;
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
		srand(time(NULL));
		int matriz[4][3];
		int num, num2;
		for(int i=0; i<4; i++){
			int num=85+rand()%((115+1)-85);
			matriz[i][0]=num;
		}
		for(int i=0; i<4; i++){
                        int num=50+rand()%((75+1)-50);
                        matriz[i][1]=num;
                } 
		for(int i=0; i<4; i++){
                        int num=150+rand()%((150+1)-200);
                        matriz[i][2]=num;
                }
		for(int i=0; i<4; i++){
			for(int j=0; j<3; j++){
				cout<<setw(6)<<matriz[i][j]<<setw(6);
			}
			cout<<endl;
		}

		int n1, n2, n3, n4, n5, n6;
		n1=rand()%4+1;
		n2=rand()%4+1;
		n3=rand()%4+1;
		n4=rand()%4+1;
		n5=rand()%4+1;
		n6=rand()%4+1;
	
		//cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<"  "<<n5<<"  "<<n6<<endl;
		
		int a1, a2, d1, d2, v1, v2;
		a1=datos(n1-1,0,matriz);
		a2=datos(n2-1,0,matriz);
		d1=datos(n3-1,1,matriz);
		d2=datos(n4-1,1,matriz);
		v1=datos(n5-1,2,matriz);
		v2=datos(n6-1,2,matriz);
		
		//cout<<a1<<" "<<a2<<" "<<d1<<" "<<d2<<"  "<<v1<<"  "<<v2<<endl;

		int p1,p2;
		p1=a1-d2;
		p2=a2-d1;

		cout<<"Juagador 1: ataque "<<a1<<", defensa "<<d1<<", velocidad "<<v1<<endl;
		cout<<"Juagador 2: ataque "<<a2<<", defensa "<<d2<<", velocidad "<<v2<<endl;
		
		if(p1==p2){
			if(v1>v2)
				cout<<"Jugador 1 gano por velocidad"<<endl;
			else
				cout<<"Jugador 2 gano por velocidad"<<endl;
		}else{
			if(p1>p2)
				cout<<"Jugador 1 gano con "<<p1-p2<<" puntos de diferencia, no gano por velocidad"<<endl;
			else
				cout<<"Jugador 2 gano con "<<p2-p1<<" puntos de diferencia, no gano por velocidad"<<endl;

		}
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

int datos(int i, int j, int matriz[4][3]){
	int d= matriz[i][j];
	return d;
}



