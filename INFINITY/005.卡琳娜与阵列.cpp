#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,k,x,y,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		x=LONG_LONG_MIN;
		y=LONG_LONG_MIN+1;
		a=LONG_LONG_MAX;
		b=LONG_LONG_MAX-1;
		for(int j=0;j<n;j++){
			cin>>k;
			if(k>x){
				y=x;
				x=k;
			}
			else if(k>y){
				y=k;
			}
			if(k<a){
				b=a;
				a=k;
			}
			else if(k<b){
				b=k;
			}
		}
		if(x*y>=a*b){
			cout<<x*y<<endl;
		}
		else cout<<a*b<<endl;
	}
}
