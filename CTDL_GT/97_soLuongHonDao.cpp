/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={-1,1,-1,0,1,-1,0,1};
bool visited[505][505];
int a[505][505];
int sl;
int N,M;

void slHonDao_BFS(int u, int v){
	queue<ii> q;
	q.push(ii(u,v));
	visited[u][v]=true;
	while(!q.empty()){
		ii t=q.front();q.pop();
		for(int i=0;i<8;i++){
			int x =t.fi+dx[i], y=t.se+dy[i];
			if( !visited[x][y] && a[x][y]==1 ){
				visited[x][y]=true;
				q.push(ii(x,y));
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		sl=0;
		cin>>N>>M;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++){
				cin>>a[i][j];
				visited[i][j]=false;
			}
		for(int i=1;i<=N;i++)
			for(int j=1;j<=M;j++)
				if(a[i][j]==1 && !visited[i][j]){
					slHonDao_BFS(i,j);
					sl++;
				}
		cout<<sl<<endl;
	}
	return 0;
}

