/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dem[40];
ll minValue(string s, ll k){
	if(k>=s.length())
		return 0;
	ll res=0;
	for(int i=0;i<='Z'-'A';i++)
		dem[i]=0;
	for(int i=0;i<s.length();i++)
		dem[s[i]-'A']++;
	priority_queue<int> pq;
	for(int i=0;i<='Z'-'A';i++)
		if(dem[i]!=0)
			pq.push(dem[i]);
	while(k--){
		ll t=pq.top();pq.pop();
		t--;
		pq.push(t);
	}
	while(!pq.empty()){
		int t=pq.top();pq.pop();
		res+=pow(t,2);
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		ll k;
		cin>>k;cin.ignore();
		getline(cin,s);
		cout<<minValue(s,k)<<endl;
	}
	return 0;
}

