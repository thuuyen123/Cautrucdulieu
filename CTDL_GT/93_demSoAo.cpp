/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={1,-1,-1,0,1,-1,0,1};
int N, M;
char a[105][105];
bool visited[105][105];
int soAo=0;
void BFS(ii p){
	queue<ii> q;
	q.push(p);
	visited[p.fi][p.se]=true;
	while(!q.empty()){
		ii t= q.front();q.pop();
		int x= t.fi, y=t.se;
		for(int i=0;i<8;i++){
			int u=x+dx[i], v=y+dy[i];
			if(a[u][v]=='W' && !visited[u][v]){
				visited[u][v]=true;
				q.push(ii(u,v));
			}
		}
	}
}
void soAo_BFS(){
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++)
			if(a[i][j]=='W' && !visited[i][j]){
				soAo++;
				BFS(ii(i,j));
			}
	}
}

int main(){
	cin>>N>>M;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=M;j++)
			cin>>a[i][j];
	soAo_BFS();
	cout<<soAo<<endl;
	return 0;
}

