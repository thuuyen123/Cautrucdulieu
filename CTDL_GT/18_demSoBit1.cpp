/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll N, L, R;


ll doDai(ll n){ //  do dai day sau khi bien doi N thanh` { [N/2] , n%2 , [N/2] }
	if(n==0 || n==1)
		return 1;
	ll tmp = doDai(n/2);
	return 2*tmp +1;
}

ll demSoBit1(ll n, ll l, ll r){
	if(l>R || r<L)
		return 0;
	if(L<=l && r<=R)
		return n;
	ll mid=(l+r)/2;
	if(mid>=L && mid <= R)
		return demSoBit1(n/2, l, mid-1) + demSoBit1(n/2, mid+1, r) 	+ n%2;
	return demSoBit1(n/2,l,mid-1)+demSoBit1(n/2,mid+1,r);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>L>>R;
		ll dd= doDai(N);
		cout<<demSoBit1(N,1,dd)<<endl;
	}
	return 0;
}

