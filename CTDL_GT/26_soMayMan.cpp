/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// n = fi* 4 + se * 7
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n, fi=0, se = 0;
		cin>>n;
		for(ll i=0;i*7<=n;i++){
			ll j=(n-i*7)/4;
			if(i*7 + j * 4 == n){
				fi = j;
				se = i;
				break;
			}
		}
		if(fi==0 || se == 0){
			cout<<"-1"<<endl;
			continue;
		}
		for(int i=1;i<=fi;i++)
			cout<<"4";
		for(int i=1;i<=se;i++)
			cout<<"7";
		cout<<endl;
	}
	return 0;
}

