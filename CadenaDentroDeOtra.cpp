#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 int main(){
 	char cad[1000], cod[1000];
 	char* p;
 	cout<<"Ingrese una frase, la mas larga de preferencia: "<<endl;
 	gets(cad);
 	cout<<"Ingrese su segunda frase: "<<endl;
 	gets(cod);
 	p= strstr(cad,cod);
 	if(p){
 		cout<<"La frase <<"<<cod<<">> esta contenida en <<"<<cad<<">>";
	 } else{
	 	cout<<"<<"<<cad<<">> no contiene <<"<<cod<<">>";
	 }
 	return 0;
 }
