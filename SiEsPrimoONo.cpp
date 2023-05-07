/********************

Numeros Primos
de : Jesus Alan Espinosa Garcia

*********************/
#include<iostream>
using namespace std;
int main(){
	int a,c,i,*prim;
	float b;
	cout<<"Ingrese un numero natural"<<endl;
	cin>>a;
	prim = new int[a];
	for(i=2;i<a;i++){
		b=a%i;
		if(b==0){
			i=a;
			c=1;
		} else{
			c=0;
		}
	}
	if(c==0){
		cout<<"Tu numero es primo";
	} else{
		cout<<"Tu numero no es primo";
	}
	return 0;
}
