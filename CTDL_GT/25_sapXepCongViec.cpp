/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ii> v;
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v.at(i).se>>v.at(i).fi;
		sort(v.begin(),v.end());
		int j=0, sl=1;
		for(int i=1;i<n;i++)
			if(v.at(i).se>=v.at(j).fi){
				j=i;
				sl++;
			}
		cout<<sl<<endl;
	}
	return 0;
}
