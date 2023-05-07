#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;
float m(float x,float xi,float yi,float y){
	return (yi-y)/(xi-x);
}
float dis(float x,float xi,float yi,float y){
	return pow(pow(x-xi,2) + pow(y-yi,2),0.5);
}
float mdx(float x,float xi){
	return (x+xi)/2;
}
float baricentro(float x,float xi){
	return xi + (1/3)*(x-xi);
}
void incentro(float a,float b,float c,float d,float x,float y){
	float yi,xi;
	xi=(b-d)/(c-a);
	yi=(a*xi) + b;
	cout<<"\nEl incentro es: ("<<xi<<","<<yi<<")";
	if (xi<0 && yi<0){
		cout<<"\nEcuacion de la circunferencia: (x+"<<-xi<<")^2 + (y+"<<-yi<<")^2 ="<<pow(dis(xi,x,y,yi),2);
	} else if(xi<0 && yi>0){
		cout<<"\nEcuacion de la circunferencia: (x+"<<-xi<<")^2 + (y-"<<yi<<")^2 ="<<pow(dis(xi,x,y,yi),2);
	} else if(xi>0 && yi>0){
		cout<<"\nEcuacion de la circunferencia: (x-"<<xi<<")^2 + (y+"<<-yi<<")^2 ="<<pow(dis(xi,x,y,yi),2);
	} else{
		cout<<"\nEcuacion de la circunferencia: (x-"<<xi<<")^2 + (y-"<<yi<<")^2 ="<<pow(dis(xi,x,y,yi),2);
	}
}
void rectas(float x,float xi,float yi,float y){
	float k;
	if ((xi-x)==0){
		cout<<"x="<<x;
	} else if((m(x,xi,yi,y)-(int)m(x,xi,yi,y))!=0){
		k=(xi-x);
		if(k<0){
			cout<<m(x,xi,yi,y)*k<<"x +"<<-k<<"y = "<<k*(m(x,xi,yi,y)*xi-yi);
		} else{
			cout<<m(x,xi,yi,y)*k<<"x  -"<<k<<"y = "<<k*(m(x,xi,yi,y)*xi-yi);
		}
	} else{
		cout<< m(x,xi,yi,y)<<"x"<<"- y = "<<m(x,xi,yi,y)*xi-yi;
	}
}
void mediatriz(float x,float xi,float yi,float y,float xl,float xp,float yp,float yl,float xv,float yv,float xb,float yb,float n){
	float l,A1,B1,C1,A,B,C,r,t;
	cout<<"\nEcuacion 2: ";
	if (xi-x==0){
		cout<<"x= "<<yv;
		A1=0;
		B1=1;
		C1=-mdx(y,yi);
	} else if(m(x,xi,yi,y)-(int)m(x,xi,yi,y)!=0){
		l=(xi-x);
		if (l<0 && m(x,xi,yi,y)<=0){
			cout<<-l<<"x -"<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(xv-(abs(m(x,xi,yi,y)))*yv);
			A1=-l;
			B1=-m(x,xi,yi,y)*l;
			C1=l*(xv-(abs(m(x,xi,yi,y)))*yv);	
		} else if (l>0 && m(x,xi,yi,y)>=0){
			cout<<l<<"x +"<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(-xv-(abs(m(x,xi,yi,y)))*yv);
			A1=l;
			B1=m(x,xi,yi,y)*l;
			C1=l*(-xv-(abs(m(x,xi,yi,y)))*yv);
		} else if(l<0 && m(x,xi,yi,y)>=0){
			cout<<l<<"x "<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(-xv-(abs(m(x,xi,yi,y)))*yv);
			A1=l;
			B1=m(x,xi,yi,y)*l;
			C1=l*(-xv-(abs(m(x,xi,yi,y)))*yv);
		}else{
			cout<<-l<<"x +"<<m(x,xi,yi,y)*(-l)<<"y = "<<l*(-1)*(xv-(abs(m(x,xi,yi,y)))*yv);
			A1=-l;
			B1=m(x,xi,yi,y)*(l);
			C1=l*(xv-(abs(m(x,xi,yi,y)))*yv);
		}
	}else if(m(x,xi,yi,y)<=0){
		cout<<"-x  +"<<-m(x,xi,yi,y)<<"y = "<<(-1)*(mdx(x,xi)-(abs(m(x,xi,yi,y)))*mdx(y,yi));
		A1=-1;
		B1=m(x,xi,yi,y);
		C1=(mdx(x,xi)-(abs(m(x,xi,yi,yi)))*mdx(y,yi));
	} else{
		cout<<"x +"<<m(x,xi,yi,y)<<"y = "<<(-1)*(-xv-(abs(m(x,xi,yi,y)))*yv);
		A1=1;
		B1=m(x,xi,yi,y);
		C1=(-xv-(abs(m(x,xi,yi,y)))*yv);
	}	
	cout<<"\nEcuacion 3: ";
	if (xp-xl==0){
		cout<<"x= "<<yb;
		A=0;
		B=1;
		C=-mdx(yl,yp);
	} else if((m(xl,xp,yp,yl))-((int)m(xl,xp,yp,yl))!=0){
		l=(xl-xp);
		if(l<0 && m(xl,xp,yp,yl)<=0){
			cout<<-l<<"x -"<<-m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(xb-(abs(m(xl,xp,yp,yl)))*yb);
			A=-l;
			B=-m(xl,xp,yp,yl)*l;
			C=l*(xb-(abs(m(xl,xp,yp,yl)))*yb);
		} else if(l>0 && m(xl,xp,yp,yl)>=0){
			cout<<l<<"x +"<<m(xl,xp,yp,yl)*l<<"y = "<<l*(-1)*(-xb-(abs(m(xl,xp,yp,yl)))*yb);
			A=l;
			B=m(xl,xp,yp,yl)*l;
			C=l*(-xb-(abs(m(xl,xp,yp,yl)))*yb);
		}else if(l<0 && m(xl,xp,yp,yl)>=0){
		    cout<<l<<"x "<<m(xl,xp,yp,yl)*l<<"y = "<<l*(-1)*(-xb-(abs(m(xl,xp,yp,yl)))*yb);
			A=l;
			B=m(xl,xp,yp,yl)*l;
			C=l*(-xb-(abs(m(xl,xp,yl,yp)))*yb);
		}else{
			cout<<-l<<"x +"<<m(xl,xp,yp,yl)*(-l)<<"y = "<<l*(-1)*(xb-(abs(m(xl,xp,yp,yl)))*yb);
			A=-l;
			B=m(xl,xp,yp,yl)*(l);
			C=l*(xb-(abs(m(xl,xp,yp,yl)))*yb);
		}
	}else if(m(xl,xp,yp,yl)<=0){
		cout<<"-x  +"<<-m(xl,xp,yp,yl)<<"y = "<<(-1)*(xb-(abs(m(xl,xp,yp,yl)))*yb);
		A=-1;
		B=m(xl,xp,yp,yl);
		C=(xb-(abs(m(xl,xp,yp,yl)))*yb);
	} else {
		cout<<"x +"<<m(xl,xp,yp,yl)<<"y = "<<(-1)*(-xb-(abs(m(xl,xp,yp,yl)))*yb);
		A=1;
		B=m(xl,xp,yp,yl);
		C=(-xb-(abs(m(xl,xp,yp,yl)))*yb);
	}
	r=((A*C1)-(A1*C))/((A1*B)-(A*B1));
	if (A==0){
		t=(-C1-B1*r)/A1;
	}else{
		t=(-C-B*r)/A;
	}
	if(n==3){
		cout<<"\nEl circuncentro es: ("<<t<<","<<r<<")";
		if(t<0 && r<0){
			cout<<"\nEcuacion de la circunferencia: (x+"<<-t<<")^2 + (y+"<<-r<<")^2 ="<<pow(dis(t,xi,yi,r),2);
		} else if(t<0 && r>0){
			cout<<"\nEcuacion de la circunferencia: (x+"<<-t<<")^2 + (y-"<<r<<")^2 ="<<pow(dis(t,xi,yi,r),2);
		} else if(t>0 && r<0){
			cout<<"\nEcuacion de la circunferencia: (x-"<<t<<")^2 + (y+"<<-r<<")^2 ="<<pow(dis(t,xi,yi,r),2);
		} else{
			cout<<"\nEcuacion de la circunferencia: (x-"<<t<<")^2 + (y-"<<r<<")^2 ="<<pow(dis(t,xi,yi,r),2);
		}
	} else{
		cout<<"\nEl ortocentro  es: ("<<t<<","<<r<<")";
	}
}
void mediatrizB(float x, float xi,float yi,float y, float h, float j){
	float l;
	cout<<"\nEcuacion 1: ";
	if(xi-x==0){
		cout<<"x="<<j;
	} else if((m(x,xi,yi,y)-(int)m(x,xi,yi,y))!=0){
		l=(xi-x);
		if(l<0 && m(x,xi,yi,y)<=0){
			cout<<-l<<"x -"<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(h-(abs(m(x,xi,yi,y)))*j);
		} else if(l>0 && m(x,xi,yi,y)>=0){
			cout<<l<<"x +"<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(-h-(abs(m(x,xi,yi,y)))*j);
		} else if(l<0 && m(x,xi,yi,y)>=0){
			cout<<l<<"x "<<m(x,xi,yi,y)*l<<"y = "<<l*(-1)*(-h-(abs(m(x,xi,yi,y)))*j);
		} else{
			cout<<-l<<"x +"<<m(x,xi,yi,y)*(-l)<<"y = "<<l*(-1)*(h-(abs(m(x,xi,yi,y)))*j);
		}
	} else if(m(x,xi,yi,y)<=0){
		cout<<"-x  +"<<-m(x,xi,yi,y)<<"y = "<<(-1)*(mdx(x,xi)-(abs(m(x,xi,yi,y)))*mdx(y,yi));
	} else{
		cout<<"x +"<<m(x,xi,yi,y)<<"y = "<<(-1)*(-mdx(x,xi)-(abs(m(x,xi,yi,y)))*mdx(y,yi));
	}
}
int main(int argc, char *argv[]) {
	float x1,x2,x3,y1,y2,y3,xi,yi,r1,r2,r3,j,A,B,C,D;
	int n;
	cout<<"Bienvenido a la calculadora de ecuaciones de rectas"<<"\nPor favor, ingrese los tres puntos con los que trabajaremos."<<"\nPunto A:"<<"\nCoordenada X:"<<endl; cin>>x1; cout<<"\nCoordenada Y:"<<endl; cin>>y1; cout<<"\nPunto B:"<<"\nCoordenada X:"<<endl; cin>>x2; cout<<"\nCoordenada Y:"<<endl; cin>>y2; cout<<"\nPunto C:"<<"\nCoordenada X:"<<endl; cin>>x3; cout<<"\nCoordenada Y:"<<endl; cin>>y3;
	n=0;
	while (n!=6){
		if ((x1==x2 && x2==x3) || (y1==y2 && y2==y3) || (m(x1,x2,y2,y1)== m(x2,x3,y3,y2) && m(x2,x3,y3,y2)== m(x3,x1,y1,y3))){
			cout<<"\nCon los datos ingresados no se puede realizar un triangulo"<<"\nPorfavor vuelva a ingresar los datos:"<<"\nPunto A:"<<"\nCoordenada X:"<<endl; cin>>x1; cout<<"\nCoordenada Y:"<<endl; cin>>y1; cout<<"\nPunto B:"<<"\nCoordenada X:"<<endl; cin>>x2; cout<<"\nCoordenada Y:"<<endl; cin>>y2; cout<<"\nPunto C:"<<"\nCoordenada X:"<<endl; cin>>x3; cout<<"\nCoordenada Y:"<<endl; cin>>y3;
			n=1;
		} else{
			cout<<"\nElija la opcion con la que le gustaria proceder "<<"\n1.-Ecuaciones de las rectas del triangulo"<<"\n2.-Ecuaciones de medianas"<<"\n3.-Ecuaciones de las mediatrices"<<"\n4.-Ecuaciones de las bisectrices"<<"\n5.-Ecuaciones de las alturas"<<"\n6.- Salir"<<endl; cin>>n;
			switch(n){
				case 1: cout<<"\nPuntos: A("<<x1<<","<<y1<<")"<<",B("<<x2<<","<<y2<<")"<<",C("<<x3<<","<<y3<<")";
				cout<<"\nRecta AB: ";
				rectas(x1,x2,y2,y1); 
				cout<<"\nRecta BC: ";
				rectas(x2,x3,y3,y2); 
				cout<<"\nRecta AC: ";
				rectas(x3,x1,y1,y3);
				cout<<"\nDistancia AB: "<<dis(x1,x2,y2,y1)<<"\nDistancia BC: "<<dis(x3,x2,y2,y3)<<"\nDistancia AC: "<<dis(x3,x1,y1,y3); break;
				case 2:cout<<"\nPuntos: A("<<x1<<","<<y1<<")"<<",B("<<x2<<","<<y2<<")"<<",C("<<x3<<","<<y3<<")"<<"\nPuntos medios de: AB("<<mdx(x1,x2)<<","<<mdx(y1,y2)<<")"<<", BC("<<mdx(x2,x3)<<","<<mdx(y2,y3)<<")"<<", AC("<<mdx(x3,x1)<<","<<mdx(y3,y1)<<")";
				cout<<"\nMediana 1: ";
				rectas(mdx(x1,x2),x3,y3,mdx(y1,y2));
				cout<<"\nMediana 2: ";
				rectas(mdx(x2,x3),x1,y1,mdx(y2,y3));
				cout<<"\nMediana 3: ";
				rectas(mdx(x3,x1),x2,y2,mdx(y3,y1));
				cout<<"\nEl baricentro es: ("<<baricentro(x3,mdx(x1,x2))<<","<<baricentro(y3,mdx(y1,y2))<<")"; break;
			    case 3: cout<<"\nPuntos: A("<<x1<<","<<y1<<")"<<", B("<<x2<<","<<y2<<")"<< ", C("<<x3<<","<<y3<<")"<<"\nEcuaciones de mediatrices: ";
				mediatrizB(x3,x1,y1,y3,mdx(x3,x1),mdx(y3,y1));
				mediatriz(x1,x2,y2,y1,x2,x3,y3,y2,mdx(x1,x2),mdx(y1,y2),mdx(x2,x3),mdx(y2,y3),n); break;
				case 4:cout<<"\nPuntos: A("<<x1<<","<<y1<<")"<<", B("<<x2<<","<<y2<<")"<< ", C("<<x3<<","<<y3<<")";
				r1=dis(x1,x2,y2,y1)/dis(x3,x1,y1,y3);
				r2=dis(x1,x2,y2,y1)/dis(x3,x2,y2,y3);
				r3=dis(x3,x1,y1,y3)/dis(x3,x2,y2,y3);
				xi=(x2+(r1*x3))/(1+r1);
				yi=(y2+(r1*y3))/(1+r1);
				if((xi-x1)==0){
					j=0;
					if((y1-((j)*x1)) > 0){
						cout<<"\nEcuación de la bisectriz del vertice A: - y + "<<(y1-((j)*x1))<<" = 0";
					} else{
						cout<<"\nEcuación de la bisectriz del vertice A: - y "<<(y1-((j)*x1))<<" = 0";
					}
					A=(j);
					B=(y1-((j))*x1);
					xi=(x1+(r2*x3))/(1+r2);
					yi=(y1+(r2*y3))/(1+r2);
				} else{
					if((y1-((m(x1,xi,yi,y1))*x1))>0){
						cout<<"\nEcuación de la bisectriz del vertice A: "<<m(x1,xi,yi,y1)<<"x - "<<"y + "<<(y1-((m(x1,xi,yi,y1))*x1))<<" = 0";
					} else{
						cout<<"\nEcuación de la bisectriz del vertice A: "<<m(x1,xi,yi,y1)<<"x - "<<"y "<<(y1-((m(x1,xi,yi,y1))*x1))<<" = 0";
					}
					A=(m(x1,xi,yi,y1));
					B=(y1-((m(x1,xi,yi,y1))*x1));
					xi=(x1+(r2*x3))/(1+r2);
					yi=(y1+(r2*y3))/(1+r2);
				}
				if((xi-x2)==0){
					j=0;
						if(((y2-(j))*x2) > 0){
						cout<<"\nEcuación de la bisectriz del vertice B: - y + "<<(y2-((j)*x2))<<" = 0";
					} else{
						cout<<"\nEcuación de la bisectriz del vertice B: - y ",(y2-((j)*x2))," = 0";
					}
					C=(j);
					D=(y2-((j)*x2));
					xi=(x1+(r3*x2))/(1+r3);
					yi=(y1+(r3*y2))/(1+r3);
				} else{
					if((y2-((m(x2,xi,yi,y2))*x2)) > 0){
						cout<<"\nEcuación de la bisectriz del vertice B: "<<m(x2,xi,yi,y2)<<"x - "<<"y + "<<(y2-((m(x2,xi,yi,y2))*x2))<<" = 0";
					} else{
						cout<<"\nEcuación de la bisectriz del vertice B: "<<m(x2,xi,yi,y2)<<"x - "<<"y "<<(y2-((m(x2,xi,yi,y2))*x2))<<" = 0";
					}
					C=(m(x2,xi,yi,y2));
					D=(y2-((m(x2,xi,yi,y2))*x2));
					xi=(x1+(r3*x2))/(1+r3);
					yi=(y1+(r3*y2))/(1+r3);
				}
				if (xi-x3 ==0){
					j=0;
					if( (y3-((j))*x3) > 0){
						cout<<"\nEcuación de la bisectriz del vertice c: - y + "<<(y3-((j)*x3))<<" = 0";
					}else{
						cout<< "\nEcuación de la bisectriz del vertice c: - y "<<(y3-((j)*x3))<<" = 0";
					}
				}else{
					if((y3-((m(x3,xi,yi,y3))*x3)) > 0){
						cout<<"\nEcuación de la bisectriz del vertice c: "<<m(x3,xi,yi,y3)<<"x - "<<"y + "<<(y3-((m(x3,xi,yi,y3))*x3))<<" = 0";
					}else{
						cout<<"\nEcuación de la bisectriz del vertice c: "<<m(x3,xi,yi,y3)<<"x - "<<"y "<<(y3-((m(x3,xi,yi,y3))*x3))<<" = 0";
					}
				}
				incentro(A,B,C,D,xi,yi); break;
			    case 5:cout<<"\nPuntos: A("<<x1<<","<<y1<<")"<<", B("<<x2<<","<<y2<<")"<< ", C("<<x3<<","<<y3<<")"<<"\nEcuaciones de las alturas: ";
				mediatrizB(x3,x1,y1,y3,x2,y2);
				mediatriz(x1,x2,y2,y1,x2,x3,y3,y2,x3,y3,x1,y1,n); break;
				case 6: cout<<"Ya se va? Bueno, hasta luego. Vuelva pronto."; break;
			    default:cout<<"El dato ingresado no es valido"; break;
			}   
		}
	}
	getch();
	return 0;
}

