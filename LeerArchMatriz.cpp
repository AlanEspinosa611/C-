/**********************
lee archivo, y hace matriz
Jesus Alan Espinosa Garcia
*************************/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<stdio.h>

using namespace std;

void leer(char* archivo);

int main(){
	char archivo[500000]="matriz.txt";
	leer(archivo);
	return 0;
}

void leer(char* archivo){
	char nums[5000],letra;
	char s2[4]=",";
	int i=0;
	int h=1,r=2;
	int **matri;
	char *ptr;
	int num[100000];
	ifstream read;
	
	read.open(archivo,fstream::in);
	
	if(read.is_open()){
		while(!read.eof()){
			read.get(letra);
			nums[i]=letra;
			i++;
		}
	}else{
		cout<<"Error no se pudo abrir el archivo";
	}
	ptr=strtok(nums,s2);
	num[0]=atoi(ptr);
	while((ptr=strtok(NULL,s2)) != NULL){
		num[h]=atoi(ptr);
		h++;
	}
	matri= new int*[num[0]];
	for(int k=0; k<num[0];k++){
		matri[k]= new int[num[1]];
	}
	for(int j=0;j<num[0];j++){
		for(int l=0;l<num[1];l++){
			matri[j][l]=num[r];
			r++;
		}
	}
	cout<<"Nuestra matriz nos queda: "<<endl;
	for(int j=0;j<num[0];j++){
		for(int l=0;l<num[1];l++){
			cout<<matri[j][l]<<"\t";
		}
		cout<<endl;
	}
	read.close();
}
