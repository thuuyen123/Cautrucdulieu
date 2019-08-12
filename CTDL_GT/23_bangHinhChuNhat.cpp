/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define INF 1000000007
#define ll long long
using namespace std;

int main(){
	ll n;
	ll a,b;
	ll min1=INF,min2=INF;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>a>>b;
		if(a<min1)
			min1=a;
		if(b<min2)
			min2=b;
	}
	cout<<min1*min2<<endl;
	return 0;
}

