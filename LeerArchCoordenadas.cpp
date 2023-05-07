/**********************
lee archivo, y suma su contenido
Jesus Alan Espinosa Garcia
*************************/
#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include<math.h>
using namespace std;
 
void leerArchivo(char* nombreArchivo);
void imprimirmatriz(char **m,char **n,int,int, int, int ,int&);
char num_minas(char **m);
 int main(){
 	char archivo[5000]="coordenadas.txt";
 	leerArchivo(archivo);
 	return 0;
 }
 
 void leerArchivo(char* nombreArchivo){
 	char **mat;
 	char **mot;
 	int i=0;
 	char s2[4]=";,,";
 	char *ptr;
 	int num[1000];
 	int numx[1000];
 	int numy[1000];
 	int h=1,t=0,tam,tom,f,c;
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
     ptr = strtok( renglon, s2 );  
     num[0]=atoi(ptr);
     while((ptr=(strtok(NULL,s2))) != NULL){
     	num[h]=atoi(ptr);//Agregar comas la final del renglon y preguntar porque
     	h++;
	 }
	 tam=num[0];
	 tom=num[1];
	 cout<<tam<<endl<<tom<<endl;
	 for(int k=2;k<h-1;k=k+2){
	 	numx[t]= num[k];
	 	numy[t]=num[k+1];
	 	t++;
	 }
	 mat= new char*[tam];
	 mot= new char*[tam];
	for(int j=0;j<tom;j++){
		mat[j]=new char[tom];
		mot[j]=new char[tom];
	}
	 for(int w=0;w<tam;w++){
	 	for(int y=0;y<tom;y++){
	 		mat[w][y]='0';
	 		mot[w][y]='@';
		 }
	 }
	 cout<<endl;
	 for(int w=0; w<tom;w++){
	 	mat[tom-numy[w]-1][numx[w]]='*';
	 }
	 for(int w=0;w<tam;w++){
	 	for(int j=0;j<tom;j++){
	 		cout<<mat[w][j]<<"\t";
		 }
		 cout<<endl;
	}
     for(int q=0;q<3;q++){
     	
     	cout<<"Por favor ingrese la fila de la casilla que desea destapar:"<<endl; cin>>f;
     	cout<<"\nPor favor ingrese la columna de la casilla que desea destapar:"<<endl; cin>>c;
     	imprimirmatriz(mat,mot,tam,tom,f, c,q);
     	
	 }
	 read.close();
 }
void imprimirmatriz(char **m,char **n,int x,int y,int p, int r,int& q){
	int l=0;
	char s;
	if(m[p][r]=='*'){
		cout<<"Te quedan "<<2-q<<" vidas"<<endl;
		n[p][r]='*';
	}
	else{
		if(m[p][r-1]=='*'){
			l++;
		}
		if(m[p-1][r-1]=='*'){
			l++;
		}
		if(m[p+1][r-1]=='*'){
			l++;
		}
		if(m[p-1][r]=='*'){
			l++;
		}
		if(m[p+1][r]=='*'){
			l++;
		}
		if(m[p-1][r+1]=='*'){
			l++;
		}
		if(m[p][r+1]=='*'){
			l++;
		}
		if(m[p+1][r+1]=='*'){
			l++;
		}
		if(l==0){
		  n[p][r]=' ';
		}
		else{
			s=l+'0';
		    n[p][r]=s;
		}
	}
  	for(int w=0;w<x;w++){
	 	for(int j=0;j<y;j++){
	 		cout<<n[w][j]<<"\t";
		 }
		 cout<<endl;
	}
	
}

