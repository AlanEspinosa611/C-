#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
 int main(){
 	int con,largo,suma=0;
 	char cadena[1000],a;
 	
 	cout<<"Introduce una frase por favor: "<<endl;
 	gets(cadena);
 	cout<<"Ahora introduce una letra"<<endl;
 	cin>>a;
 	largo=strlen(cadena);
 	for(con=0;con<=largo;con++){
 		if(cadena[con]==a){
 			suma++;
		 }
     }
	cout<<"El numero de veces que aparece la letra "<<a<<" en la frase es: "<<suma; 
	return 0;
 }
