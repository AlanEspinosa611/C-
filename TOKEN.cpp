#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include<iostream>
using namespace std;
int main()
{
  char s1[49] = "11,12;13,14;15,16;17,18";
   char s2[4] =";,,";
   char *ptr;
   int num[1000];
   int i=1;
   printf( "s1=%s\n", s1 );
   
   ptr = strtok( s1, s2 ); 
   printf( "%s\n", ptr ); 
   num[0]=atoi(ptr);
   while( (ptr = strtok( NULL, s2 )) != NULL ){
   	 printf( "%s\n", ptr );
     num[i]=atoi(ptr);
     i++;
   }  
   cout<<i;
   /*for(int j=0; j<i;j++){
   	printf( "%d\n", num[j] );
   }
   //printf( "%d\n", num[7] );*/
   return 0;
}
