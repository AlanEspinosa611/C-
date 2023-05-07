/*++++++++++++++++
Operaciones con matrices 2
Por Alan Espinosa 
++++++++++++++++++++*/
#include<iostream>
using namespace std;
int main(){
	int i,j,h, ma[3][3],mb[3][2],mr[3][3];
	float b,c;
	cout<<"Por favor ingrese 9 numeros para la primera matriz: "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d,%d]",i,j);
			cin>>ma[i][j];
		}
	}
	cout<<"Por favor ingrese 6 numeros para la segunda  matriz: "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("[%d,%d]",i,j);
			cin>>mb[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mr[i][j]=0;
		}
	}
	cout<<"El resultado de multiplicar la primera matriz por la segunda es: "<<endl;
	for (i=0;i<3;i++){
		for(j=0;j<2;j++){
			for (h=0;h<3;h++){
				mr[i][j]= mr[i][j]+ma[i][h]*mb[h][j];
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<mr[i][j]<<"\t";
		}
		printf("\n");
	}
	return 0;
}
