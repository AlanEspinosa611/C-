/*++++++++++++
3 operaciones a una pobre matriz
por Alan Espinosa
+++++++++++++*/
#include<iostream>
using namespace std;
int main(){
	int m,n,i,j;
	int **mat;
	cout<<"Ingrese el numero de filas que desee: "<<endl;
	cin>>m;
	cout<<"Ingreese el numero de columnas que desee: "<<endl;
	cin>>n;
	mat=new int*[m];
	for(i=0;i<m;i++){
		mat[i]=new int[n];
	}
	printf("Ingrese los %d terminos de la matriz: ",n*m);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("[%d,%d]",i,j);
			cin>>mat[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if((mat[i][j]%2)==0){
				if((mat[i][j]%3)==0){
				    if((mat[i][j])%7==0){
				        mat[i][j]= ((mat[i][j]+8)*5)-2;
			        } else{
			    	    mat[i][j]= (mat[i][j]+8)*5;
				    }
			    } else{
			    	mat[i][j]= mat[i][j]+8;
				}
			}
			else if((mat[i][j]%3)==0){
				if((mat[i][j])%7==0){
				    mat[i][j]= (mat[i][j]*5)-2;
			    } else{
			    	mat[i][j]= mat[i][j]*5;
				}
			}
			else if((mat[i][j])%7==0){
				mat[i][j]= mat[i][j]-2;
			}
			else{
				mat[i][j]= mat[i][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
