#include<bits/stdc++.h>
using namespace std;
int f(int n,int m){
	int x;
	if(n/3*3==n&&m<=n/3*2){
		x=n/3;
		if(x==m||2*x==m||f(x,m)||f(2*x,m)){
			return 1;
		}
	}
	return 0;
}
int main(){
	int t,n,m,x;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		if(n==m){
			cout<<"YES"<<endl;
			continue;
		}
		if(n/3*3!=n){
			cout<<"NO"<<endl;
			continue;
		}
		if(m>n/3*2){
			cout<<"NO"<<endl;
			continue;
		}
		x=n;
		if(f(x,m)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
