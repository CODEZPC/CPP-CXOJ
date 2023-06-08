#include<bits/stdc++.h>
using namespace std;
int index(int l[],int x){
	int i;
	for(i=0;l[i]!=x;i++);
	return i;
}
int main(){
	int n;
	cin>>n;
	int f[n],st[n],nd[n],rd[n];
	for(int i=0;i<n;i++){
		cin>>f[i];
	}
	for(int i=0;i<n;i++){
		cin>>rd[i];
	}
	for(int i=0;i<n;i++){
		nd[index(f,i+1)]=rd[i];
	}
	for(int i=0;i<n;i++){
		st[index(f,i+1)]=nd[i];
	}
	for(int i=0;i<n;i++){
		rd[index(f,i+1)]=st[i];
	}
	for(int i=0;i<n;i++){
		cout<<rd[i]<<endl;
	}
}
