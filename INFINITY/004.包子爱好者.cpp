#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,s=0;
	cin>>t;
	for(int i=0;i<t;i++){
		s=0;
		cin>>n;
		s+=2*(2+n-2)*(n-3)/2;
		cout<<s+3+(n-1)+n*4<<endl;
	}
}
