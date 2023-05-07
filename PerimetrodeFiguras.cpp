#include<iostream>
using namespace std;
 int main(){
 	int a;
 	float b,c,d,n,i,suma=0,resta,multi=1,pi=3.1416;
 	cout<<"Calculadora de perimetros"<<endl;
 	cout<<"¿De que figura desea calcularle el perimetro? \n 1.-Circulo \n2.-Rectangulo \n3.-Poligono Regular "<<endl;
 	cin>>a;
 	switch (a){
 		case 1:
 			cout<<"Eligio circulo. \nPor favor ingrese la medida del radio del circulo: "<<endl,
 			cin>>b;
 			cout<<"El perimetro del circulo es: "<<pi*2*b;
 			break;
 		case 2:
 			cout<<"Eligio rectangulo. \nPor favor ingrese la medida de la base: "<<endl;
 			cin>>b;
 			cout<<"Ahora ingrese su altura: "<<endl;
 			cin>>c;
 			cout<<"El perimero del rectangulo es: "<<(2*b)+(2*c);
 			break;
 		case 3:
 			cout<<"Eligio poligono regular. Por favor ingrese la medida de alguno de sus lados "<<endl;
 			cin>>b;
 			cout<<"Ahora ingrese el numero de lados que tiene su figura: "<<endl;
 			cin>>c;
 			cout<<"El perimetro del poligono es: "<<b*c;
 			break;
 		default:
 			cout<<"Elige bien";
 			break;
 		
	 }
 	return 0;
 }
