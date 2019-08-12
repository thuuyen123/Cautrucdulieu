/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define ppi pair<pair<int,int>,int>
#define fi first
#define se second
using namespace std;
int N;
char a[105][1005];
ii m, n;
int minStep(ii m, ii n){
	queue<ppi> q;
	set<ii> visit;
	visit.insert(m);
	q.push(ppi(m,0));
	while(!q.empty()){
		ppi t = q.front(); q.pop();
		if(t.fi == n)
			return t.se;
		for(int i=t.fi.fi-1;i>=0;i--){
			if(a[i][t.fi.se] == 'X')
				break;
			if(visit.find(ii(i,t.fi.se))==visit.end()){
				q.push(ppi(ii(i,t.fi.se),t.se+1));
				visit.insert(ii(i,t.fi.se));
			}
		}
		
		for(int i = t.fi.fi+1; i <N ;i++){
			if(a[i][t.fi.se] == 'X')
				break;
			if(visit.find(ii(i,t.fi.se))==visit.end()){
				q.push(ppi(ii(i,t.fi.se),t.se+1));
				visit.insert(ii(i,t.fi.se));
			}
		}
		
		for(int i=t.fi.se-1;i>=0;i--){
			if(a[t.fi.fi][i]== 'X')
				break;
			if(visit.find(ii(t.fi.fi,i))==visit.end()){
				q.push(ppi(ii(t.fi.fi,i),t.se+1));
				visit.insert(ii(t.fi.fi,i));
			}
		}
		
		for(int i=t.fi.se+1;i<N;i++){
			if(a[t.fi.fi][i]== 'X')
				break;
			if(visit.find(ii(t.fi.fi,i))==visit.end()){
				q.push(ppi(ii(t.fi.fi,i),t.se+1));
				visit.insert(ii(t.fi.fi,i));
			}
		}
	}
}
int main(){
	cin>>N;
	for(int i=0;i<N;i++)
		for(int j=0; j<N; j++)
			cin>>a[i][j];
	cin>>m.first>>m.second;
	cin>>n.first>>n.second;
	cout<<minStep(m,n);
	return 0;
}

