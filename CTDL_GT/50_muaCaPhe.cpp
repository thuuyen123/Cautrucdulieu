/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> gia;
ll dem(ll y, ll left, ll right){
	if(left>right)
		return 0;
	ll mid= (left+right)/2;
	if(y>=gia[mid])
		return mid-left+1 +dem(y,mid+1,right);
	return dem(y,left,mid-1);
}
int main(){
	ll n, q;
	cin>>n;
	gia.resize(n);
	for(int i=0;i<n;i++)
		cin>>gia[i];
	cin>>q;
	for(int i=0;i<q;i++){
		ll y;
		cin>>y;
		cout<<dem(y,0,n-1)<<endl;
	}
	return 0;
}

