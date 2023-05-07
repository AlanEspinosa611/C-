#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Calcularemos el area de un poligono regular:"<<endl;
	cout<<"Por favor ingrese el numero de lados del poligono: "<<endl; cin>> a;
	cout<<"Ingrese la medida de uno de sus lados: "<<endl; cin>>b;
	cout<<"Ingrese la medida de su apotema "<<endl; cin>>c;
	cout<<"El area del cuadrado es: "<<((a*b)*c)/2;
	return 0;
}
