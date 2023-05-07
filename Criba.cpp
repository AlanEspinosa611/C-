/********************
Criba de Eratostenes
Jesus Alan Espinosa Garcia
*********************/

#include<iostream>
using namespace std;
int main(){
	int i,j,criba[120];
	cout<<"Criba de Erastotenes:"<<endl;
	for(i=1;i<101;i++){
		criba[i]=i;
	}
	cout<<"[1,2,3,5,7";
	for (i=8;i<101;i++){
		if((criba[i]%2)!=0 && (criba[i]%3)!=0 && (criba[i]%5)!=0 &&(criba[i]%7)!=0 ){
			cout<<","<<criba[i];
		} 
	}
	cout<<"]";
}
