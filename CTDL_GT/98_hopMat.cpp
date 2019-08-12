/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int k, n , m;
int vt[102];
vector<int> adj[1001];
bool visited[1001];
int c[1001];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	c[u]++;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<adj[t].size();i++)
			if(!visited[adj[t][i]]){
				visited[adj[t][i]]=true;
				c[adj[t][i]]++;
				q.push(adj[t][i]);
			}
	}
}
int main(){
	int res=0;
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++)
		cin>>vt[i];
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		adj[a].push_back(b);
	}
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++)
			visited[j]=false;
		BFS(vt[i]);
	}
	for(int i=1;i<=n;i++)
		if(c[i]==k)
			res++;
	cout<<res;
	return 0;
}

