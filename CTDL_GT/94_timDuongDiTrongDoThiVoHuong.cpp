/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int N,M; // N - dinh , M - canh
vector<vector<int> > adj; // danh sach ke
vector<bool> visited;
int Q;

void BFS(int a){
	queue<int> q;
	q.push(a);
	visited.at(a)=true;
	while(!q.empty()){
		int t=q.front();q.pop();
		for(int j=0;j<adj.at(t).size();j++)
			if(!visited[adj.at(t).at(j)]){
				visited[adj.at(t).at(j)]=true;
				q.push(adj.at(t).at(j));
			}
	}
}
bool checkLT(){
	for(int i=1;i<=N;i++)
		if(!visited.at(i))
			return false;
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		// khoi tao
		cin>>N>>M;
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
		BFS(1);
		// nhap so truy van
		cin>>Q;
		if(checkLT()){
			for(int i=1;i<=Q;i++){
				int a, b;
				cin>>a>>b;
				cout<<"YES"<<endl;
			}
		}
		else{
			while(Q--){
				for(int i=1;i<=N;i++){
					visited.at(i)=false;
				}
				int a, b;
				cin>>a>>b;
				BFS(a);
				if(visited.at(b))
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
		
	}
	return 0;
}

