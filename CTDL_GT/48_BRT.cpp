/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> td, kc;

int main(){
	int t;
	cin>>t;
	while(t--){
		int dem=1;
		cin>>n;
		td.clear();
		kc.clear();
		td.resize(n);
		for(int i=0;i<n;i++)
			cin>>td.at(i);
		sort(td.begin(),td.end());
		for(int i=0;i<n-1;i++)
			kc.push_back(td.at(i+1)-td.at(i));
		sort(kc.begin(),kc.end());
		for(int i=1;i<kc.size() && kc.at(i)==kc.at(0);i++)
			dem++;
		cout<<kc.at(0)<<" "<<dem<<endl;
	}
	return 0;
}

