/**********************
Imprima la cadena resultante con caracteres ACII
Jesus Alan Espinosa Garcia
*************************/
#include <iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void lectura(char* archivo);

int main(){
	char archivo[1000]="hols.txt";
	lectura(archivo);
	

	return 0;
}
void lectura(char*archivo){
	char renglon[500],letra;
	int i=0,j;
	float c=0,numeros[100000000000],numer[100000000000];
	
	ifstream read;
	read.open(archivo,fstream::in);
	
	if(read.is_open()){
		while(!read.eof()){
			read.get(letra);
			read.getline(renglon,500);
			cout<<letra<<" "<<renglon<<endl;
		}
	} else{
		cout<<"No se pudo abrir el archivo";
	}
	read.close();
}
