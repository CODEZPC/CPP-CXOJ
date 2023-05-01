#include<iostream>
using namespace std;
int main(){
	int n,a,b,x=1,y=1,o=0;
	cin>>n;
	cin>>a>>b;
	for(int i=1;i<=n;i++){
		if(x==y) o++;
		x++;y++;
		if(x>a) x=1;
		if(y>b) y=1;
	}
	cout<<o;
	return 0;
}
