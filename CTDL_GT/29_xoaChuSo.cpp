/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, k;
	stack<int> s;
	string res;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		int tmp = c-'0';
		while(!s.empty() && tmp > s.top() && k> 0){
			k--;
			s.pop();
		}
		s.push(tmp);
	}
	while(k>0 && !s.empty()){
		s.pop();
		k--;
	}
	while(!s.empty()){
		res=string(1,s.top()+'0')+res;
		s.pop();
	}
	cout<<res;
	return 0;
}

