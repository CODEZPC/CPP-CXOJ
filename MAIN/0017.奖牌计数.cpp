#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=0,c=0,ap,bp,cp;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ap>>bp>>cp;
		a+=ap;
		b+=bp;
		c+=cp;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c;
	return 0;
}
