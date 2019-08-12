/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int N, M;
int sl;
vector<int> adj[1001];
vector<vector<int> >  tplt;
bool visited[1001];


void BFS(int u){
	vector<int> tplt1;
	tplt1.push_back(u);
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int i=0;i<adj[t].size();i++)
			if(!visited[adj[t][i]]){
				visited[adj[t][i]]=true;
				tplt1.push_back(adj[t][i]);
				q.push(adj[t][i]);
			}
	}
	tplt.push_back(tplt1);
}

void TPLT_BFS(){
	for(int i=1;i<=N;i++)
		if(!visited[i])
			BFS(i);
};

int main(){
	int t;
	cin>>t;
	while(t--){
		sl=0;
		cin>>N>>M;
		tplt.clear();
		for(int i=1;i<=N;i++){
			visited[i]=false;
			adj[i].clear();
		}
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		TPLT_BFS();
		for(int i=0;i<tplt.size();i++){
			for(int j=0;j<tplt[i].size();j++)
				cout<<tplt[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

