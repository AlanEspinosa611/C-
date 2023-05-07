#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i,j,c,m,n,**matriz;
    printf("Cuantas filas desea ?:");
    scanf("%d",&m);
    printf("Cuantas columnas desea?:");
    scanf("%d",&n);
    matriz = new int*[m]; 
    
    for(i=0;i<m;i++){
 		matriz[i]= new int[n];
	 }
    printf("Por favor ingrese %d numeros: ",m*n);
    for(i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			printf("[%d,%d]",i,j);
 			cin>>matriz[i][j];
		 }
	}
 	printf("Por favor ingrese un escalar c: ");
 	scanf("%d",c);
 	for (i=0;i<m;i++){
 		for(j=0;j<n;j++){
 			matriz[i][j]=matriz[i][j]*c;
		 }
	 }
	cout<<"Resultado: "<<endl;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
    
 	return 0;
}
