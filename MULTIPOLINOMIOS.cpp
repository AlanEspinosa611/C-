/*******************************
Programa que por medio del paso de parametros por referencia multiplica  polinomios
por Jesus Alan Espinosa Garcia 
****************************/
#include<iostream>
using namespace std;
int mul(int&,int&,int&);
int main(){
	int *A;
	int *B;
	int *C;
	int n,m,mayor;
	cout<<"Multiplicacion de polinomios"<<endl;
	cout<<"Ingrese el grado de su primer polinomio:"<<endl;
	cin>>n;
	A= new int[n];
	cout<<"Ingrese el grado de su segundo polinomio:"<<endl;
	cin>>m;
	B= new int[m];
	if(n<m){
		mayor=m;
	} else{
		mayor=n;
	}
	C=new int[n*m];
	cout<<"Por favor ingrese los coeficientes de sus polinomios siguiendo la definicion de polinomio :"<<endl;
	cout<<"a0 + (a1)X + (a2)X^2 + (a3)X^3 +...+ (an)X^n"<<endl;
	cout<<"Primer polinomio:"<<endl;
	for(int i=0;i<mayor+1;i++){
		if(i<n+1){
			printf("a%d =",i);
			cin>>A[i];
		}else{
			A[i]=0;
		}
	}
	cout<<"Segundo polinomio:"<<endl;
	for(int i=0;i<mayor+1;i++){
		if(i<m+1){
			printf("a%d =",i);
			cin>>B[i];
		}else{
			B[i]=0;
		}
	}
	for(int k=0;k<m+n+1;k++){
		C[k]=0;
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			mul(A[i],B[j],C[i+j]);
		}
		
	}
	cout<<"resultado:" <<C[0];
	for(int i=1;i<n+m+1; i++){
		printf("+ %dX^%d",C[i],i);
	}
	return 0;
}
int mul(int& x1,int& x2, int&x3){
	x3= x3 +x2*x1;
	return 0;
}
