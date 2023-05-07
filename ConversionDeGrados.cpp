/*++++++++++++++++++
Conversion de grados con funciones
por Alan Espinosa 
+++++++++++++++++*/

#include<iostream>
using namespace std;
float ck(float a),cf(float a),kc(float a),kf(float a),fc(float a),fk(float a);
int main(){
	int a;
	float b;
	cout<<"Convertidor de grados. Cual conversion desea hacer? \n1.-Celsius-Kelvin \n2.-Celsius-Farenheid \n3.-Kelvin-Celsius \n4.-Kelvin-Farenheid \n5.-Farenheid-Celsius \n6.-Farenheid-Kelvin "<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"Ingrese los grados en Celsius: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<ck(b);
			break;
		case 2:
			cout<<"Ingrese los grados en Celsius: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<cf(b);
			break;
		case 3:
			cout<<"Ingrese los grados en Kelvin: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<kc(b);
			break;
		case 4:
			cout<<"Ingrese los grados en Kelvin: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<kf(b);
			break;
		case 5:
			cout<<"Ingrese los grados en Farenheid: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<fc(b);
			break;
		case 6:
			cout<<"Ingrese los grados en Farenheid: "<<endl;
			cin>>b;
			cout<<"La conversion es: "<<fk(b);
			break;
		default:
			cout<<"Ingrese bien.";
		break;
	}
}
float ck(float a){
	float r= a+273.15;
	return r;
}
float cf(float a){
	float r=(a*(9/5))+32;
	return r;
}
float kc(float a){
	float r= a-273.15;
	return r;
}
float kf(float a){
	float r=(a-273.15)*(9/5)+32;
	return r;
}
float fc(float a){
	float r=(a-32)*(5/9);
	return r;
}
float fk(float a){
	float r=(a-32)*(5/9)+273.15;
	return r;
}

