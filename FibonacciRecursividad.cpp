/*************************
Programa de recursividad/ serie de fibonacci
Jesus Alan Espinosa Garcia 
******************************/
#include <iostream>
using namespace std;
int fibo(int n);
int main(){
	int n;
	cout<<"Ingrese le termino de la serie de fibonacci que desee"<<endl;
	cin>>n;
	cout<<"El termino numero "<<n<<" de la serie es:"<<fibo(n);
}
int fibo(int n){
	int res;
	if(n==0){
		res=0;
	} else if(n==1){
		res=1;
	} else{
		res= fibo(n-1) + fibo(n-2);
	}
	return res;
}
