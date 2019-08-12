/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll soUocChan(ll n){
	ll dem=0, i;
	if(n%2==1)
		return 0;
	for( i=1;i*i<n;i++){
		if(n%i== 0 ){
			if(i%2== 0)
				dem++;
			if(n/i %2 ==0)
				dem++;
		}
	}
	if(i*i==n)
		return dem+1; 
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<soUocChan(n)<<endl;
	}
	return 0;
}

