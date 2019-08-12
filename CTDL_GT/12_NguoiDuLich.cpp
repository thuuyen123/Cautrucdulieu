/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int n, tmp=0;
int c[16][16];
int x[16];
int FOPT=9999999;
int cmin;
bool visited[16];

void timcMin(){
	cmin=c[1][1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(c[i][j]<cmin && cmin!= 0)
				cmin=c[i][j];
}

void ncDuLich(int i){
	for(int j=2;j<=n;j++)
		if(!visited[j]){
			x[i]=j;
			visited[j]=true;
			tmp+=c[x[i-1]][x[i]];
			if(i==n){
				if(tmp+c[x[n]][1]<FOPT)
					FOPT=tmp+c[x[n]][1];
			}
			else if(tmp +cmin*(n-i+1)<FOPT)
				ncDuLich(i+1);
			visited[j]=false;
			tmp-=c[x[i-1]][x[i]];
		}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>c[i][j];
	timcMin();
	x[1]=1;
	ncDuLich(2);
	cout<<FOPT<<endl;
	return 0;
}

