#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1,a=13,b=2;i<=n;i++,a--,b++){
		if(i==1) cout<<a;
		else if(i%2==1) cout<<" "<<a;
		else cout<<" "<<b;
}
	return 0;
}
