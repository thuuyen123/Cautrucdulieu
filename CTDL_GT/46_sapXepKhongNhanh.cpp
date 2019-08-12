/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin>>n;
	vector<ll> v;
	v.resize(n);
	for(ll i=0;i<n;i++)
		cin>>v.at(i);
	sort(v.begin(),v.end());
	for(ll i=0;i<n;i++)
		cout<<v.at(i)<<" ";
	cout<<endl;
	return 0;
}

