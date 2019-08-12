/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int, int>
#define fi first
#define se second
using namespace std;
int minStep(int s, int t){
	set<int> visited;
	visited.insert(s);
	ii a;
	a.fi=s;
	a.se=0;
	queue<ii> q;
	q.push(a);
	while(!q.empty()){
		ii tmp= q.front();q.pop();
		if(tmp.fi==t)
			return tmp.se;
		if(tmp.fi-1==t || tmp.fi*2 == t)
			return tmp.se+1;
		if(visited.find(tmp.fi-1)==visited.end()){
			q.push(ii(tmp.fi-1,tmp.se+1));
			visited.insert(tmp.fi-1);
		}
		if(visited.find(tmp.fi*2)==visited.end() && tmp.fi < t){ // lon hon thi ko them 2*
			q.push(ii(tmp.fi*2,tmp.se+1));
			visited.insert(tmp.fi*2);
		}
			
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int S, T;
		cin>>S>>T;
		cout<<minStep(S,T)<<endl;
	}
	return 0;
}

