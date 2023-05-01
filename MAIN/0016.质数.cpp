#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=(int)floor(sqrt(n));i++){
    if(n%i==0){
		  cout<<"N";
      return 0;
	  }
	}
	cout<<"Y";
	return 0;
}
