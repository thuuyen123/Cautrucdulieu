/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int N, M; // N dinh, M canh
vector<vector<int> > adj; // danh sach ke
vector<bool> visited;

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited.at(u)=true;
	cout<<u<<" ";
	while(!q.empty()){
		int t= q.front();q.pop();
		for(int i=0;i<adj.at(t).size();i++)
			if(!visited.at(adj.at(t).at(i))){ // neu adj[i][j] chua duoc tham
				visited.at(adj.at(t).at(i))=true;
				q.push(adj.at(t).at(i));
				cout<<adj.at(t).at(i)<<" ";
			}
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int u;
		cin>>N>>M>>u;
		adj.clear();
		adj.resize(N+1);
		visited.resize(N+1);
		for(int i=1;i<=N;i++)
			visited.at(i)=false;
		for(int i=1;i<=M;i++){
			int a, b;
			cin>>a>>b;
			adj.at(a).push_back(b);
			adj.at(b).push_back(a);
		}
		BFS(u);
	}
	return 0;
}

