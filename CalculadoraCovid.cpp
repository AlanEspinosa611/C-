#include<iostream>
 using namespace std;
  int main(){
  	char a;
  	int e,suma=0,peso,num;
  	cout<<"Calculadora de riesgo Covid-19";
  	cout<<" \nIngrese su sexo. \nHombre(H) \nMujer(M)"<<endl;
  	cin>>a;
  	cout<<"Ingrese su edad: "<<endl;
  	cin>>e;
  	cout<<"Cuantos de los siguientes padecimientos usted posee? "<<endl;
  	cout<<"Hipertensión"<<endl;
  	cout<<"Diabetes"<<endl;
  	cout<<"Enfermedad Pulmonar Obstructiva Crónica (EPOC)"<<endl;
  	cout<<"Enfermedad Renal Crónica"<<endl;
  	cout<<"Inmunosupresión (por ejemplo cáncer, lupus, etc.)"<<endl;
  	cin>>num;
  	cout<<"Situacion de peso actual: \n1-Bajo peso \n2-Peso normal \n3-Sobrepeso \n4-Obesidad "<<endl;
  	cin>>peso;
  	if(a=='H'){
  		suma+=1;
  		if(e<56){	
  		    if(e<46&& (peso==3 || peso==4)){
  		    	suma+=1;
  		    	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  } else{
				  	cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  }
			  } else if(e<46&& (peso==1 || peso==2)){
			  	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en riesgo medio con "<<suma<<" factores de riesgo";
				  } else{
				  	cout<<"Usted esta en riesgo medio con "<<suma<<" factores de riesgo";
				  }
			  }
		  } else{
		  	suma+=1;
  		    if(e>45&& (peso==3 || peso==4)){
  		    	suma+=1;
  		    	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  } else{
				  	suma+=num;
				  	cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  }
			  } else if(e>45&& (peso==1 || peso==2)){
			  	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en riesgo alto con "<<suma<<" factores de riesgo";
				  } else{
				  	suma+=num;
				  	cout<<"Usted esta en riesgo alto con "<<suma<<" factores de riesgo";
				  }
			  }
		  }
	  } else if(a=='M'){
  		if(e<56){	
  		    if(e<54& (peso==3 || peso==4)){
  		    	suma+=1;
  		    	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  } else{
				  	suma+=num;
				  	cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  }
			  } else if(e<54&& (peso==1 || peso==2)){
			  	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en riesgo medio con "<<suma<<" factores de riesgo";
				  } else{
				  	cout<<"Usted esta en riesgo medio con "<<suma<<" factores de riesgo";
				  }
			  }
		  } else{
		  	suma+=1;
  		    if(e>53&& (peso==3 || peso==4)){
  		    	suma+=1;
  		    	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  } else{
				  	suma+=num;
				  	cout<<"Usted esta en alto riesgo con "<<suma<<" factores de riesgo";
				  }
			  } else if(e>53&& (peso==1 || peso==2)){
			  	if(num>2){
  		    		suma+=num;
  		    		cout<<"Usted esta en riesgo alto con "<<suma<<" factores de riesgo";
				  } else{
				  	suma+=num;
				  	cout<<"Usted esta en riesgo alto con "<<suma<<" factores de riesgo";
				  }
			  }
		  }
	  } else{
	  	cout<<"Ingrese bien lo requerido";
	  }
  	return 0;
  }
