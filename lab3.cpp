#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

void ordenar(int []);
void imprimir(int []);
int datos(int, int, int [][]);

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
		int num, num1, num2, num4, num5, num6;
		num=rand()%4+1;
        	num2=rand()%4+1;
		num3=rand()%4+1;
		num4=rand()%4+1;
        	num5=rand()%4+1;
		num6=rand()%4+1;
		int a1,a2,d1,d2,v1,v2;
		a1=datos(num,0,matriz);
		a2=datos(num,0,matriz);
		d1=datos(num,1,matriz);
		d2=datos(num,1,matriz);
		v1=datos(num,2,matriz);
		v2=datos(num,2,matriz);
		int puntos1, puntos2; 
		puntos1=a1-d2;
		puntos2=a2-d1;
		//int puntos1, puntso2;
		//puntos=matriz[num][0];
		if(puntos1=puntos2){
			if(v1>v2)
				cout<<"Jugador 1 Gano Por Velocidad"<<endl;
			else
				cout<<"Jugador 2 Gano Por Velocidad"<<endl;
		}else{
			if(puntos1>puntos2)
				cout<<"Jugador 1 Gano con "<<puntos1<<" Puntos de Diferencia, No Gano Por Velocidad"<<endl;
			else
				
			
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

int datos(int i, int j, int matriz[][]){
	int d= matriz[i][j];
	return d;
}
