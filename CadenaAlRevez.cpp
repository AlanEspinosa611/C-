#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 int main(){
 	int con,largo;
 	char cadena[1000];
 	cout<<"Introduce una frase por favor: "<<endl;
 	gets(cadena);
 	strrev(cadena);
 	cout<<cadena;
 	return 0;
 }
