#include<iostream>

using namespace std;
int main(){
	int b,i,n,r;
	float suma,sum[100000];
	cout<<"Ingrese la cantidad de numeros que desea sumar"<<endl;
    cin>>n;
    cout<<"Por favor ingrese los numeros que desea sumar: "<<endl;
    for(i=0;i<n;i++){
       cin>>b;
 	   sum[i]=b;
	}
	cout<<"Sus numeros son: [";
	for(r=0;r<n;r++){
		cout<<sum[r]<<",";
 	   suma+=sum[r];
	}
	cout<<"]";
    cout<<"\nEl resultado de la suma de esos numeros es: "<<suma;
    return 0;
}
