/*****************************
Programa que usa Gauss-Jordan para sacar inversa de una matriz
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
	
	cout<<"Matriz inversa de matrices NxN "<<endl;
	cout<<"Ingrese el numero de columnas de su matriz"<<endl;
	cin>>n;
	cout<<"Por favor, rellene su matriz "<<endl;
	float A[n][n],I[n][n],pivote,aux;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			gotoxy(j*4,i+6);
			cin>>A[i][j];
			
			if(i==j){
				I[i][j]=1;
			}else{
				I[i][j]=0;
			}
		}
		cout<<endl;
	}
	for(i=0;i<n;i++){
		pivote=A[i][i];
		//convertir el pivote a 1 y dividir la fila
		for(k=0;k<n;k++){
			A[i][k]= A[i][k]/pivote;
		}
		//reduccion por renglones
		for(j=0;j<n;j++){
			if(i!=j){
				aux=A[j][i];
				for(k=0;k<n;k++){
					A[j][k]=A[j][k]- aux*A[i][k];
					I[j][k]=I[j][k]- aux*I[i][k];
				}
				
			}
		}
		
	}
	cout<<"Inversa de la matriz: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			gotoxy(j*4,i+12);
			cout<<A[i][j];
			gotoxy(30 + j*8,i+12);
			cout<<I[i][j];
		}
		cout<<endl;
	}
	return 0;
}
