/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
vector<ll> v;
ll binarySearch(){
	ll l=0, r=n-1;
	while(l<=r){
		ll mid =(l+r)/2;
		if(v[mid]== k)
			return mid;
		else if(v[mid]<k)
			l= mid +1;
		else
			r = mid -1; 
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=0;
		cin>>n>>k;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v.at(i);
		ll vt= binarySearch();
		if(vt==-1)
			cout<<"NO"<<endl;
		else
			cout<<vt+1<<endl;
	}
	return 0;
}

