#include<iostream>
using namespace std;

int main(){
	int n,a,con;
	char c;
	cout<<"Ingrese el numero N"<<endl;
	cin>>n;
	cout<<"Ingrese un caracter c"<<endl;
	cin>>c;
	for (a=1;a<=n;a++){
		cout<<c<<c<<endl;
		for (con=0;con<a;con++){
			cout<<"  ";
		}
	}
	return 0;
}
