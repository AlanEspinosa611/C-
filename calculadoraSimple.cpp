#include<iostream>
using namespace std;
 int main(){
 	int a;
 	float b,c,d,n,i,suma=0,resta,multi=1;
 	cout<<"Calculadora simple"<<endl;
 	cout<<"¿Que operacion desea realizar? \n 1.-Suma \n2.-Resta \n3.-Multiplicacion \n4.-Division"<<endl;
 	cin>>a;
 	switch (a){
 		case 1:
 			cout<<"Eligio suma.Cuantos numeros desea sumar?"<<endl;
 			cin>>n;
 			cout<<"Por favor ingrese los numeros que desea sumar: "<<endl;
 			for(i=0;i<n;i++){
 				cin>>b;
 				suma+=b;
			 }
 			cout<<"El resultado de la suma es: "<<suma;
 			break;
 		case 2:
 			cout<<"Eligio resta. Por favor ingrese los dos numeros a restar: "<<endl;
 			cin>>b;
 			cin>>c;
 			resta= b-c;
 			cout<<"El resultado de la resta es: "<<resta;
 			break;
 		case 3:
 			cout<<"Eligio multiplicacion.Cuantos numeros desea multiplicar?"<<endl;
 			cin>>n;
 			cout<<"Por favor ingrese los numeros que desea multiplicar: "<<endl;
 			for(i=0;i<n;i++){
 				cin>>b;
 				multi=multi*b;
			 }
 			cout<<"El resultado de la multiplicacion es: "<<multi;
 			break;
 		case 4:
 			cout<<"Eligio division. Por favor ingrese los dos numeros a dividir, empezando con el dividendo: "<<endl;
 			cin>>b;
 			cin>>c;
 			resta= b/c;
 			cout<<"El resultado de la division es: "<<resta;
 			break;
 		default:
 			cout<<"Elige bien";
 		
	 }
 	return 0;
 }
