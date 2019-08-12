/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int N, M; // N - dinh, M - canh
vector<int> adj[1001]; // danh sach ke
int  color[1001]; // mau 

bool isBipartiteUtil(int u){
	queue<int> q;
	q.push(u);
	color[u]=1;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<adj[t].size();i++){
			if(adj[t][i]==t)
				return false;
			if(color[adj[t][i]]==-1){
				color[adj[t][i]]=1-color[t];
				q.push(adj[t][i]);
			}
			else if(color[adj[t][i]]==color[t])
				return false;
		}
	}
	return true;
}
bool isBipartite(){
	for(int i=1;i<=N;i++)
		if(color[i]==-1)
			if(isBipartiteUtil(i)==false)
				return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>M;
		for(int i=1;i<=N;i++)
			adj[i].clear();
		for(int i=1;i<=N;i++)
			color[i]=-1;
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		if(isBipartite())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

