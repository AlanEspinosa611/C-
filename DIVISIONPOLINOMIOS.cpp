/*******************************
Programa que por medio del paso de parametros por referencia divide  polinomios
por Jesus Alan Espinosa Garcia 
****************************/
#include<iostream>
using namespace std;
void mul(int&,int&, int&);
int main(){
	int *A;
	int *B;
	int *C;
	int *D;
	int n,m,mayor,k;
	cout<<"Division de polinomios"<<endl;
	cout<<"Ingrese el grado de su primer polinomio (el que sera el dividendo):"<<endl;
	cin>>n;
	A= new int[n];
	cout<<"Ingrese el grado de su segundo polinomio:"<<endl;
	cin>>m;
	B= new int[m];
	C=new int[n];
	cout<<"Por favor ingrese los coeficientes de sus polinomios siguiendo la definicion de polinomio :"<<endl;
	cout<<"(an)X^n + ...+(a3)X^3 + (a2)X^2  + a0"<<endl;
	cout<<"Primer polinomio:"<<endl;
	for(int i=0;i<n+1;i++){
		printf("a%d =",n-i);
		cin>>A[i];
	}
	cout<<"Segundo polinomio:"<<endl;
	for(int i=0;i<m+1;i++){
		printf("a%d =",m-i);
		cin>>B[i];
	}
	for(int k=0;k<m+n+1;k++){
		C[k]=0;
	}
	for(int k=0;k<m+n+1;k++){
		D[k]=0;
	}
	for(int i=0;i<n-m+1;i++){
		int p= A[i]/B[0];
		C[i]=p;
		for(int j=1;j<m+1;j++){
			mul(A[j],B[j],p);
		}
		D[i]=A[i];
	}
	cout<<"resultado: "<<endl;
	for(k=0;k<n-m+1;k++){
		cout<<C[k]<<"X^"<<n-m-k<<" + ";
		
	}
	int r=k;
	cout<<endl;
	for(int w=0;w < r;w++){
		cout<<D[w]<<"X^"<<r-w<<" + ";
	}
}
void mul(int& x1,int& x2, int& x3){
	x1= x1-(x2*x3);
}
