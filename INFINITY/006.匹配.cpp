#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		char b[8],d=0;
		cin>>b;
		int c=strlen(b);
		for(int i=0;i<c;i++)
		{
			if(b[i]=='?') d++;
		}
		int m=pow(10,d-1);
		if(b[0]=='0') cout<<0<<endl;
		else if(d==0) cout<<1<<endl;
		else if(b[0]=='?')cout<<9*m<<endl;
		else cout<<10*m<<endl;
	}
}
