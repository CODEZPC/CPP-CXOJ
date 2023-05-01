#include<iostream>
using namespace std;
int main(){
	int a,b,v,m=0,d=0;
	cin>>a>>b>>v;
	for(;m<v;m-=b,d++){
		m+=a;
		if(m>=v) break;
	}
	cout<<d+1;
}
