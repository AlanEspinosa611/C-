/* Calculadora con funciones
por: Jesus Alan Espinosa Garcia  */ 
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
float divi(float a, float b), raiz(float b),suma(float a, float b), resta(float a, float b),multi(float a, float b);
int main(){
	float x,p;
	int a;
	cout<<"Calculadora no tan simple."<<endl;
	cout<<"Elige la operacion que desee realizar: \n1.-Suma \n2.-Resta \n3.-Multiplicacion \n4.-Division \n5.-Raiz"<<endl;
	cin>>a;
	switch (a){
		case 1:
		   cout<<"Ingrese los numeros a sumar: "<<endl;
     	   cin>>x;
	       cout<<"";
	       cin>>p;
		   cout<<"el resultado es: "<<suma(x,p);
			break;
		case 2:
		   cout<<"Ingrese el primer numero a restar: "<<endl;
     	   cin>>x;
	       cout<<"Ingrese el segundo numero: ";
	       cin>>p;
		   cout<<"el resultado es: "<<resta(x,p);
			break;
		case 3:
		   cout<<"Ingrese el primer numero a multiplicar: "<<endl;
     	   cin>>x;
	       cout<<"Ingrese el segundo numero: ";
	       cin>>p;
		   cout<<"el resultado es: "<<multi(x,p);
			break;
		case 4:
			cout<<"Ingrese el primer numero a dividir: "<<endl;
			cin>>x;
			cout<<"Ingrese el segundo numero a dividir: "<<endl;
			cin>>p;
			if (p==0){
				cout<<"Division sobre 0 no valida.";
			} else{
				cout<<"el resultado es: "<< divi(x,p);
			}
			break;
		case 5:
			cout<<"Ingrese el primer numero al que le quiere sacar raiz: "<<endl;
			cin>>x;
			cout<<"el resultado es: "<<raiz(x);
			break;
		default:
			cout<<"Ingrese bien.";
		break;
	}
	return 0;
}
float suma(float a, float b){
	float r;
	r= a+b;
	return r;
}
float resta(float a, float b){
	float r;
	r= a-b;
	return r;
}
float multi(float a, float b){
	float r;
	r= a*b;
	return r;
}
float divi(float a, float b){
	float r;
	r= a/b;
	return r;
}
float raiz(float a){
	float r= pow(a,0.5);
	return r;
}
