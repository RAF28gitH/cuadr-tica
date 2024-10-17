#include <bits/stdc++.h>
using namespace std;

struct resultado{
	double x1,x2; //hice una estructura para guardar los resultados de ambas x
};

int main(){
	double a,b,c; //creo las variables que leeré
	resultado r; //creo una variable r para guardar los resultados de x1 y x2
	if(!(cin>>a>>b>>c)){ //compruebo que todos los caracteres sean números válidos
		cout<<"Debes incluír solo números";
		return 0;
	}
	if(a==0){ //compruebo que A no sea 0
		cout<<"A no puede ser 0."<<endl;
		return 0;
	}
	if(b*b-4*a*c<0){ //compruebo si no da raíz negativa y por ende el código tiene solución
		cout<<"No tiene solución."<<endl;
		return 0;
	}
	r.x1=(b*-1+sqrt(b*b-4*a*c))/(2*a);
	r.x2=(b*-1-sqrt(b*b-4*a*c))/(2*a);
	cout<<r.x1<<endl<<r.x2<<endl; //imprimo los resultados
	return 0;
}
