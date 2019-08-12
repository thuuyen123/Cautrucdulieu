/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;


int main(){
	vector<vector<int> > adj;
	int N,M; // N - so dinh, M - so canh
	cin>>N>>M;
	adj.resize(N+1);
	for(int i=0;i<M;i++){
		int a, b;
		cin>>a>>b;
		adj.at(a).push_back(b);
		adj.at(b).push_back(a);
	}
	for(int i=1;i<=N;i++){
		for(int j=0;j<adj.at(i).size();j++)
			cout<<adj.at(i).at(j)<<" ";
		cout<<endl;
	}
	return 0;
}

