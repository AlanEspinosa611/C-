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
	
	cout<<"Determinante de matrices NxN "<<endl;
	cout<<"Ingrese el numero de columnas de su matriz"<<endl;
	cin>>n;
	cout<<"Por favor, rellene su matriz "<<endl;
	float A[n][n],I[n][n],pivote,pivote2,aux,invertir, det=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			gotoxy(j*4,i+6);
			cin>>A[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<n;i++){
		pivote=A[i][i];
		
		if(pivote==0){
			for(j=0;j<n;j++){
				invertir=A[i][j];
				A[i][j]=A[i+1][j];
				A[i+1][j]=invertir;
			}
		}
		//reduccion por renglones
		for(j=i+1;j<n;j++){
			pivote2=A[j][i];
			aux=pivote2/pivote;
			for(k=0;k<n;k++){
				A[j][k]=A[j][k]-aux*A[i][k];
			}
		}
		
	}
	for(i=0;i<n;i++){
		det*=A[i][i];
	}
	cout<<"Matriz triangular resultante:  "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			gotoxy(j*6,i+15);
			cout<<A[i][j];
		}
		cout<<endl;
	}
	
	cout<<"La determinante es: "<<det;
	return 0;
}
