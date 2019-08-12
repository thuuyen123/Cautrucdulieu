/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define  MOD 1000000007
#define ll long long
using namespace std;

int main(){
	ll n,res=0;
	cin>>n;
	priority_queue<int,vector<int>, greater<int> > pq;
	for(ll i=0;i<n;i++){
		int a;
		cin>>a;
		pq.push(a);
	}
	while(pq.size()>1){
		ll f=pq.top();pq.pop();
		ll s=pq.top();pq.pop();
		ll tmp=(f+s)%MOD;
		res=(res+tmp)%MOD;
		pq.push(tmp);
	}
	cout<<res<<endl;
	return 0;
}

