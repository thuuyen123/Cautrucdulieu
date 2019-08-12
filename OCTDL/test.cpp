#include<bits/stdc++.h>
using namespace std;

int N;//dinh'
int M;//canh
vector<vector<int> > adj;
vector<bool> vs;

void BFS(int u){
	queue<int> q;
	q.push(u);
	vs.at(u)=true;
	cout<<u<<" ";
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int i=0;i<adj.at(t).size();i++){
			if(!vs.at(adj.at(t).at(i))){
				vs.at(adj.at(t).at(i))=true;	
				q.push(adj.at(t).at(i));
				cout<<adj.at(t).at(i)<<" ";
			}
		}
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int u;
		cin>>N>>M>>u;
		adj.clear();
		adj.resize(N+1);
		vs.resize(N+1);
		for(int i =0;i<=N;i++){
			vs.at(i)= false;
		}
		for(int i =1;i<=M;i++){
			int a,b;
			cin>>a>>b;
			adj.at(a).push_back(b);
			adj.at(b).push_back(a);
		}
		BFS(u);
	}
	return 0;
}
