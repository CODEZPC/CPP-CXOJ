#include<iostream>
using namespace std;
int main(){
	int k,m,n,b,g,i=0,b1,g1,o=0;
	cin>>m>>n>>k;
	for(b=k,g=0;g<=k;g++,b--){
		b1=m-b;
		g1=n-g;
		if(b1/2>g1) i=g1;
		else i=b1/2;
		if(i>o){
			o=i;
		}
	}
	cout<<o;
	return 0;
}
