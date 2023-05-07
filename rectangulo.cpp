#include<iostream>
using namespace std;

int main(){
	int n,a,b,r;
	char c;
	cout<<"Ingrese el numero N"<<endl;
	cin>>n;
	cout<<"Ingrese un numero M"<<endl;
	cin>>r;
	cout<<"Ingrese un caracter c"<<endl;
	cin>>c;
	for (a=1;a<=r;a++){
		for (b=1;b<=n;b++){
			cout<<c;
		}
		cout<<"\n";
	}
	return 0;
}
