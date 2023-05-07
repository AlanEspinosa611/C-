/*************************
Programa de recursividad/ factorial
Jesus Alan Espinosa Garcia 
******************************/
#include <iostream>
using namespace std;
int fibo(int n);
int main(){
	int n;
	cout<<"Ingrese un entero positivo"<<endl;
	cin>>n;
	cout<<"el factorial de dicho numero es: "<<fibo(n);
	return 0;
}
int fibo(int n){
	int res;
    if(n==1){
		res=1;
	} else{
		res=fibo(n-1)*n;
	}
	return res;
}
