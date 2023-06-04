#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   char b[4],e[1];
   bool d[10001];
	ll a;
	cin>>a;
	for(ll i=1;i<=a;i++){
		cin>>b;
		ll c=0;
		for(ll j=1;j<4;j++){
			for(ll k=0;k<j;k++){
				if(b[j]==b[k]&&d[i]==0) {
					c++;
					e[0]=b[k];
					d[i]+=1;
					break;
				}
				else if(b[j]==e[0]&&d[i]==1){
					c++;
					break;
				}
			}
		}
		if(c==3) cout<<-1<<endl;
		else if(c==2) cout<<6<<endl;
		else if(c<=1) cout<<4<<endl;
	}
} 
