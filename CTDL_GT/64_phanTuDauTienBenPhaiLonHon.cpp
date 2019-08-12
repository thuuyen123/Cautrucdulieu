/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
int main(){
	int t;
	cin>>t;
	while(t--){
		stack<int> gt,cs;
		ll n;
		cin>>n;
		v.clear();
		v.resize(n);
		for(int i=0;i<n;i++)
			cin>>v.at(i);
		for(int i=0;i<n;i++){
			while(!gt.empty() && v.at(i) > gt.top()){
				v.at(cs.top())=v.at(i);
				gt.pop();
				cs.pop();
			}
			gt.push(v.at(i));
			cs.push(i);
		}
		while(!gt.empty()){
			v.at(cs.top())=-1;
			cs.pop();
			gt.pop();
		}
		for(int i=0;i<n;i++)
			cout<<v.at(i)<<" ";
		cout<<endl;
	}
	return 0;
}

