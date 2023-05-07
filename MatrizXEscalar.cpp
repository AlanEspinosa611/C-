/*++++++++++++++++
Operaciones con matrices 1
Por Alan Espinosa 
++++++++++++++++++++*/
#include<iostream>
using namespace std;
int main(){
	int m,n,b,i,j,**matriz;
	cout<<"De cuantas filas desea su matriz?"<<endl;
	cin>>m;
	cout<<"De cuantas columnas desea su matriz?"<<endl;
	cin>>n;
	cout<<"Ingrese un escalar: "<<endl;
	cin>>b;
	matriz=new int*[m];
	for (i=0;i<m;i++){
		matriz[i]=new int[n];
	}
	printf("Por favor introduce %d numeros: \n",m*n);
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("[%d,%d]",i,j);
			cin>>matriz[i][j];
		}
	}
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			matriz[i][j]=b*matriz[i][j];
		}
	}
	cout<<"El resultado es: "<<endl;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
