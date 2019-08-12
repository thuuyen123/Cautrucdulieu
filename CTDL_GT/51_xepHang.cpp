/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<ii> t;
	t.resize(n);
	for(int i=0;i<n;i++)
		cin>>t[i].fi>>t[i].se;
	sort(t.begin(),t.end());
	int tg= t[0].fi;
	for(int i=0;i<n;i++){
		if(t[i].fi<=tg)
			tg+=t[i].se;
		else
			tg=t[i].fi+t[i].se;
	}
	cout<<tg;
	return 0;
}

