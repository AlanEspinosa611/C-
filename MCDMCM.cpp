#include<iostream>
using namespace std;
int main(){
	int a,b,c,mayor,n,des,i,res;
	 cout<<"Ingrese dos numeros naturales: "<<endl;
	 cin>>a;
	 cin>>b;
	for(i=1;i<=a;i++){
		if((a%i==0)&&(b%i==0)){
			res=i;
		}
	}
	if (a<b){
		mayor=b;
	} else{
		mayor=a;
	}
	n=mayor;
	while((n%a!=0)|| (n%b!=0)){
		n=n+1;
	}
	printf("El MCD de %d y %d es: %d",a,b,res);
	printf("\nEl MCM de %d y %d es: %d",a,b,n);
	return 0;
	
}
