/*******************************
Programa que por medio del paso de parametros por referencia resta polinomios
por Jesus Alan Espinosa Garcia 
****************************/
#include<iostream>
using namespace std;
void sum(int&,int&);
int main(){
	int *A;
	int *B;
	int n,m,mayor;
	cout<<"Suma de polinomios"<<endl;
	cout<<"Ingrese el grado de su primer polinomio (al que se le va a restar):"<<endl;
	cin>>n;
	A= new int[n];
	cout<<"Ingrese el grado del polinomio que le quiere restar:"<<endl;
	cin>>m;
	B= new int[m];
	if(n<m){
		mayor=m;
	} else{
		mayor=n;
	}
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
	for(int i=0;i<mayor+1;i++){
		sum(A[i],B[i]);
	}
	cout<<"la suma de los polinomios nos queda: "<<A[0];
	
	for(int i=1;i<mayor+1;i++){
		printf("+ %dX^%d",A[i],i);
	}
	return 0;
}
void sum(int& x1,int& x2){
	x1=x1-x2;
}
