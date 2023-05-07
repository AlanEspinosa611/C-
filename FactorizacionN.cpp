/*++++++++++++
Factorizacion del tipo (a+b)^n
por Jesus Alan Espinosa Garcia.
++++++++++++++++*/

#include<iostream>
using namespace std;
int factorial(int a);
int coefi(int a, int b);
int main(){
	int n,k;
	cout<<"Ingrese un exponente n:"<<endl;
	cin>>n;
	cout<<"La factorizacion queda: "<<endl;
	cout<<"a^"<<n;
	for (k=1;k<=n;k++){
		if(k==n){
			cout<<" + "<<coefi(n,k)<<"b^"<<k;
		} else {
			cout<<" + "<<coefi(n,k)<<"a^"<<n-k<<"b^"<<k;
		}
	}
}
int factorial (int a){
	int r=1;
	for(int i=1;i<=a;i++){
	    r=i*r;
	}
	return r;
}
int coefi(int n, int k){
	int r= factorial(n)/(factorial(k)*factorial(n-k));
	return r;
}
