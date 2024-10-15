#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,x1,x2;
	cin>>a>>b>>c;
	if(a==0){
		cout<<"A no puede ser 0"<<endl;
		return 0;
	}
	if(b>0){
		b*-1;
	}
	x1=(b+sqrt(b*b-4*a*c))/(2*a);
	x2=(b-sqrt(b*b-4*a*c))/(2*a);
	cout<<x1<<endl<<x2;
	return 0;
}
