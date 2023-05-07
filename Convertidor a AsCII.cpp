/**********************
Imprima la cadena resultante con caracteres ACII
Jesus Alan Espinosa Garcia
*************************/
#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
void lectura(char* archivo);

int main(){
	int numr[50000],h=0;
	int num[100000];
	ifstream archivo("ascii.txt");
	if (archivo==NULL){
		cout<<"No encontro el archivo";	
	} else{
		char letra;
		int i=0;
		char nums[900000];
		while(!archivo.eof()){
			archivo>>letra;
			numr[i]= int(letra)- int('0');
			i++;
		}
		for(int j=0;j<i-1;j=j+2){
			num[h]=(numr[j])*10 + numr[j+1];
			h++;
		}
		for(int j=0;j<h;j++){
			cout<<num[j]<<"_"<<char(num[j])<<endl;
		}
	}

	return 0;
}
