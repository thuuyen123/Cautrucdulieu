/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define INF 100000007
using namespace std;
vector<int> v,b;

int main(){
	ll n,result=0;
	cin>>n;
	b.resize(n+1);
	v.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	for(int i=0;i<=n;i++){
		if(i==0)
			b[i]=-INF;
		else
			b[i]=INF;
	}
	for(int i=1;i<=n;i++){
		ll k= lower_bound(b.begin(),b.end(),v[i])-b.begin();
		b[k]= v[i];
		result= max(result, k);
	}
	cout<<result;
	return 0;
}

