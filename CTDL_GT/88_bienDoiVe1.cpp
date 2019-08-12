/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
ll minStep(ll n){
	set<int> visited;
	visited.insert(n);
	queue<ii> q;
	q.push(ii(n,0));
	while(!q.empty()){
		ii t= q.front();q.pop();
		if(t.fi==1)
			return t.se;
		if(t.fi-1==1)
			return t.se+1;
		if(visited.find(t.fi-1)==visited.end())
			q.push(ii(t.fi-1,t.se+1));
		for(int i=2;i*i<=t.fi;i++)
			if(t.fi%i==0){
				if(visited.find(t.fi/i)==visited.end())
					q.push(ii(t.fi/i,t.se+1));
			}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n; 
		cout<<minStep(n)<<endl;
	}
	return 0;
}

