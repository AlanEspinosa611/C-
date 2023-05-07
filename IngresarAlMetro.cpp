#include<iostream>
 using namespace std;
  int main(){
  	char a;
  	int e;
  	cout<<"Verificaremos si puede ingresar a la seccion de mujeres del metro \nIngrese su sexo. \nHombre(H) \nMujer(M)"<<endl;
  	cin>>a;
  	if(a=='H'){
  		cout<<"Ingrese su edad: "<<endl;
  		cin>>e;
  		if((e>65&& e<120)||(e>0&&e<5)){
  			cout<<"Puede ingresar";
		  } else{
		  	cout<<"No puede ingresar";
		  }
	  } else if(a=='M'){
	  	cout<<"Puede ingresar.";
	  } else{
	  	cout<<"Ingrese bien lo requerido";
	  }
  	return 0;
  }
