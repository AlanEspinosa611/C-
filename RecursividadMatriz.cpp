/*************************
Programa de recursividad/ suma de elementos de una matriz
Jesus Alan Espinosa Garcia 
******************************/
#include <iostream>
using namespace std;
int sum(int num[],int k);
int main(){
	int n,k=0;
	int **mat;
	int *mot;
	cout<<"Ingrese un numero n"<<endl;
	cin>>n;
	mat= new int*[n];
	for(int j=0;j<n;j++){
		mat[j]=new int[n];
	}
	mot= new int[n];
	cout<<"Ingrese las entradas de su matriz"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("[%d,%d]",i,j);
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			mot[k]=mat[i][j];
			k++;
		}
	}
	cout<<"Su matriz es: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"El resultado de sumar los elementos de la matriz es:"<<sum(mot,k);
	return 0;
}
int sum(int num[],int k){
	if(k==1){
		return num[0];
	} else{
		return num[k-1]+ sum(num,k-1);
	}
	
}
