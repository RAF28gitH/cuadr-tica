#include <bits/stdc++.h>
using namespace std;

/*
	Descripción de lo que hace el código:
	Primero estoy declarando una estructura llamada "resultado" para
	almacenar los resultados de x1 y x2.
	Después, claro, viene el main, el lugar donde el código inicia,
	ahí primero declaro tres variables (a, b y c) para guardar los valores
	de A, B y C en la ecuación cuadrática.
	Se crea una variable r de tipo resultado (es decir que contiene dentro
	de ella, dos variables [o miembros en este caso por ser una estructura]
	de tipo double llamadas x1 y x2, que en este código uso para sacar los
	dos resultados de la ecuación).
	Después se pide que ingrese los valores y con un if y un cin, leo los
	valores de A, B y C y compruebo si los valores que recibió cada una
	de las variables tiene un valor correcto para su tipo de dato (double
	las tres);
	Si obtienen valores no válidos, se imprime un texto que pide que
	solo se deben leer números y termina la ejecución.
	Posteriormente compruebo si A es igual a 0, si lo es, escribe
	un mensaje que indica que A no puede ser 0, (ya que no se puede
	dividir entre 0) y acaba ahí la ejecución del código; si no es 0
	el código continúa.
	Ahora veo si dará o no raíz negativa, comprobando con un if
	si lo que va dentro del sqrt() (b*b-4*a*c) es menor de 0,
	si efectivamente es menor que 0, se imprime un mensaje diciendo
	que no tiene solución real y finaliza la ejecución, si no da raiz
	negativa, sigue con el código.
	ahora se calculan los dos resultados de x en los miembros de r, "x1" y
	"x2".
	Y finalmente se imprimen con "cout<<r.x1<<endl<<r.x2<<endl;".
	Ahí termina el código. :D
*/

struct resultado{
	double x1,x2;
};

int main(){
	double a,b,c;
	resultado r;
	cout<<"Ingresa los valores de A, B y C (en ese órden):"<<endl;
	if(!(cin>>a>>b>>c)){
		cout<<"Debes incluír solo números";
		return 0;
	}
	if(a==0){
		cout<<"A no puede ser 0."<<endl;
		return 0;
	}
	if(b*b-4*a*c<0){
		cout<<"No tiene solución real."<<endl;
		return 0;
	}
	r.x1=(b*-1+sqrt(b*b-4*a*c))/(2*a);
	r.x2=(b*-1-sqrt(b*b-4*a*c))/(2*a);
	cout<<r.x1<<endl<<r.x2<<endl;
	return 0;
}
