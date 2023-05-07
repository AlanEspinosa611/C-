#include<iostream>
using namespace std;

int main(){
	int n,b=0,suma=0,a,c=1;
	cout<<"Ingrese el numero de termino de la serie de Fibonacci que desea conocer"<<endl;
	cin>>n;
	cout<<"La serie nos queda: ";
	for (a=0;a<n;a++){
		cout<<","<<b;
		suma= b+c;
		b=c;
		c=suma;
	}
	cout<<"\nEl termino "<<n<<" en la serie de Fibonacci es: "<<c-b;
	return 0;

}
