#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t,n=0,k=0,kun=0;
	cin>>t;
	while(t--){
		kun=0; 
	 	cin>>n>>k;
	 	for(ll j=0;j<=10000;j++){
		 	if(kun!=0)break;
		 	for(ll g=0;g<=10000;g++){
		 		if(j*2+k*g==n){
				cout<<"YES"<<endl;
				kun++;
				break;
			   }
			}
	   }	
	   if(kun==0) cout<<"NO"<<endl; 
	}
    return 0;
}
