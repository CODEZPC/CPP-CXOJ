#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1,a=13;i<=n;i++,a--){
		if(i==1) cout<<2;
		else if(i%2==1) cout<<" "<<2;
		else cout<<" "<<a;
}
	return 0;
}
