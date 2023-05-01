#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,J,sum=0;
	cin>>N>>M>>J;
	int q=1,p=M;
	for (int a=1;a<=J;a++)
	{
		int i;
		cin>>i;
		if (i<q)
		{
			sum+=q-i;
			q=i;
			p=q+M-1;		
		} 
		if (i>p)
		{
			sum+=i-p;
			p=i;
			q=p-M+1;
		}
	}
	cout<<sum;
	return 0;
}
