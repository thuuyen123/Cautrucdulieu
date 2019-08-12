/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
vector<vector<int> > adj;
int main(){
	int n; // so dinh
	cin>> n; 
	adj.resize(n+1);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			int a;
			cin>>a;
			if(a ==1)
				adj.at(i).push_back(j);
		}
	for(int i=1;i<=n;i++){
		for(int j=0;j<adj.at(i).size();j++)
			cout<<adj.at(i).at(j)<<" ";
		cout<<endl;
	}
	return 0;
}

