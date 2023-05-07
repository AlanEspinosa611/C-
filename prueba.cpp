#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
using namespace std;
 
 void leerArchivo(char* nombreArchivo);
 int main(){
 	char archivo[5000]="sumaprom.txt";
 	leerArchivo(archivo);
 	return 0;
 	
 }
 void leerArchivo(char* nombreArchivo){
 	int i=0;
 	char s2[4]=",";
 	char *ptr;
 	int num[1000];
 	int h=1,t;
 	int sum=0;
 	char renglon[500],letra;
 	ifstream read;
 	read.open(nombreArchivo,fstream::in);
 	
 	if(read.is_open()){
 		while (!read.eof()){
 			read.get(letra);
 			renglon[i]=letra;
 			i++;
		 }
	 }else{
	 	cout<<"Error, no se puede abrir el archivo";
	 }
	 printf( "El resultado de sumar los siguientes numeros: \n%s\n",renglon );
     ptr = strtok( renglon, s2 );  
     num[0]=atoi(ptr);
     while((ptr=(strtok(NULL,s2))) != NULL){
     	num[h]=atoi(ptr);//Agregar comas la final del renglon y preguntar porque
     	h++;
	 }
	 
	 for(int k=0;k<h;k++){
	 	if(k==(h-1)){
	 		num[k]= int((num[k])/10);
		 }
		 sum= sum+ num[k];
		 t=k;
	 }
	 cout<<"\nes:"<<sum;
	 cout<<"\nEl promedio es:"<<sum/h;
	 read.close();
	 
	 
 }
