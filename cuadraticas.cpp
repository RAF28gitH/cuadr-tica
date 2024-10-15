#include <bits/stdc++.h>
using namespace std;

struct resultado{
    double x1,x2;
};

int main(){
	double a,b,c;
	resultado r;
	cin>>a>>b>>c;
	if(a==0){
		cout<<"A no puede ser 0"<<endl;
		return 0;
	}
	if(b>0){
		b*-1;
	}
	r.x1=(b+sqrt(b*b-4*a*c))/(2*a);
	r.x2=(b-sqrt(b*b-4*a*c))/(2*a);
	cout<<r.x1<<endl<<r.x2<<endl;
	return 0;
}
