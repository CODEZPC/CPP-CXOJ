#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=0,t,n,x[100],y[100],r=0,k;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		a=0;
		b=0;
		r=0;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		for(int j=0;j<n;j++){
			cin>>x[j];
			if(x[j]==1) a++;
		}
		for(int j=0;j<n;j++){
			cin>>y[j];
			if(y[j]==1) b++;
		}
		for(int j=0;j<n;j++){
			if(x[j]!=y[j]) r++;
		}
		if(r==0){
			cout<<0<<endl;
			continue;
		}
		else if(a==b){
			cout<<1<<endl;
		}
		else{
			k=1+abs(a-b);
			cout<<min(r,k)<<endl;
		}
	}
}
