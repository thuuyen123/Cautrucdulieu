/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1000000007; 
ll Pow(ll a,ll b){
    ll z;
	if(b == 0)
		return 1;
	if(b % 2 == 0){
		z = Pow(a, b/2);
		return (z*z) % MOD;
	}
	return (Pow(a,b-1)*a) % MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<Pow(n,k)<<endl;
	}
	return 0;
}

