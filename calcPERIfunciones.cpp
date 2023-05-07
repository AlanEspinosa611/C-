/* Calculadora de perimetros con funciones
por: Jesus Alan Espinosa Garcia */ 
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
float recta(float a, float b), circ(float b),poli(float a, float b);
int main(){
	float x,p;
	int a;
	cout<<"Calculadora de perimetros."<<endl;
	cout<<"Elige la figura de la que desee calcularle el perimetro que desee realizar: \n1.-Circulo \n2.-Rectangulo \n3.-Poligono regular"<<endl;
	cin>>a;
	switch (a){
		case 1:
		   cout<<"Ingrese el radio del circulo: "<<endl;
     	   cin>>x;
		   cout<<"el perimetro es: "<<circ(x);
			break;
		case 2:
		   cout<<"Ingrese la medida de la base : "<<endl;
     	   cin>>x;
	       cout<<"Ingrese la altura ";
	       cin>>p;
		   cout<<"el perimetro es "<<recta(x,p);
			break;
		case 3:
		   cout<<"Ingrese la medida de uno de los lados "<<endl;
     	   cin>>x;
	       cout<<"Ingrese el numero de lados ";
	       cin>>p;
		   cout<<"el resultado es: "<<poli(x,p);
			break;
		default:
			cout<<"Ingrese bien.";
		break;
	}
	return 0;
}
float circ(float a){
	float r;
	r= (2*a)*3.1416;
	return r;
}
float recta(float a, float b){
	float r;
	r= 2*a+2*b;
	return r;
}
float poli(float a, float b){
	float r;
	r= a*b;
	return r;
}

