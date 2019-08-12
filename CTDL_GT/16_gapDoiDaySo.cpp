/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int Search(int n, ll k){
	if(k==1)
		return 1;
	if( k== pow(2,n-1))
		return n;
	if(k < pow(2,n-1))
		return Search(n-1,k);
	return Search(n-1,k-pow(2,n-1));
}
int main(){
	int t;
	cin>>t;
	while(t--){	
		int n;
		ll k;
		cin>>n>>k;
		cout<<Search(n,k)<<endl;
	}
	return 0;
}

