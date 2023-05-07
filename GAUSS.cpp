/*****************************
Programa que usa Gauss-Jordan para resolver sistemas lineales
Jesus Alan Espinosa García
*****************************/
#include<iostream>
#include<windows.h>
using namespace std;
 COORD coord={0,0};
 
 void gotoxy(int x, int y){
 	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main(){
	int i,j,k,n;
	
	cout<<"Resolución de sistemas lineales por Gauss-Jordan \n Esta calculadora solo resuelve sistemas cuyas matrices ampleadas sean N X N+1"<<endl;
	cout<<"Ingrese el numero de ecuaciones de su sistema:"<<endl;
	cin>>n;
	cout<<"Por favor, rellene la siguiente matriz con los coeficientes de sus ecuaciones recordando que por cada fila irá una ecuacion de su sistema y que el acomodo es el siguiente:"<<endl;
	cout<<" a0 + a1(x1) + ...+ an(xn)^n = b "<<endl;
	cout<<"[a0 a1 ... an b ] \n de preferencia que el primer a0 sea distinto de 0"<<endl;
	float A[n][n+1], pivote,aux;
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			gotoxy(j*4,i+9);
			cin>>A[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<n;i++){
		pivote=A[i][i];
		//convertir el pivote a 1 y dividir la fila
		for(k=0;k<n+1;k++){
			A[i][k]= A[i][k]/pivote;
		}
		//reduccion por renglones
		for(j=0;j<n;j++){
			if(i!=j){
				aux=A[j][i];
				for(k=0;k<n+1;k++){
					A[j][k]=A[j][k]- aux*A[i][k];
				}
				
			}
		}
		
	}
	cout<<"Matriz reducida a su forma escalonada por filas: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			gotoxy(j*4,i+15);
			cout<<A[i][j];
		}
		cout<<endl;
	}
	return 0;
}
