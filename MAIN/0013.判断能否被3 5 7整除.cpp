#include<iostream>
using namespace std;
int main(){
	int n,f=0;
	cin>>n;
	if(n%3==0) cout<<"3";
	else f=1;
	if(n%5==0)
		if(f==1) cout<<"5";
		else cout<<" 5";
	else f=2;
	if(n%7==0)
		if(f==2) cout<<"7";
		else cout<<" 7";
	if(n%3!=0&&n%5!=0&&n%7!=0) cout<<"n";
	return 0;
}
