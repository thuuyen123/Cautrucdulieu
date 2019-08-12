/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll FOPT=0;
		ll n;
		cin>>n;
		vector<ll> l(n), r(n), v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		stack<int> gt, cs;
		for(int i=0;i<n;i++){
			while(!gt.empty() && v[i]<gt.top()){
				r[cs.top()]=i;
				gt.pop();
				cs.pop();
			}
			gt.push(v[i]);
			cs.push(i);
		}
		while(!gt.empty()){
			r[cs.top()]=n;
			cs.pop();
			gt.pop();
		}
		
		
		for(int i=n-1;i>=0;i--){
			while(!gt.empty() && v[i]<gt.top()){
				l[cs.top()]=i;
				gt.pop();
				cs.pop();
			}
			gt.push(v[i]);
			cs.push(i);
		}
		while(!gt.empty()){
			l[cs.top()]=-1;
			cs.pop();
			gt.pop();
		}
		for(int i=0;i<n;i++)
			if(v[i]*(r[i]-l[i]-1)>FOPT)
				FOPT=v[i]*(r[i]-l[i]-1);
		cout<<FOPT<<endl;
	}
	
	return 0;
}

