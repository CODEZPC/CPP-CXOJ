#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,m1=0,m2=0,a,b,max;
	cin>>N;
	for (int i=1;i<=N;i++)
	{
		cin>>a>>b;
		if ((a==1&&b==2)||(a==2&&b==3)||(a==3&&b==1)) 
		  m1++;
		if ((a==1&&b==3)||(a==2&&b==1)||(a==3&&b==2))  	
		  m2++;  
	}
	max=m1>m2?m1:m2;
	cout<<max;
	return 0;
}
