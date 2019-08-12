/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> v,v1;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll tmp=0,dau=0,cuoi=0;
		cin>>n;
		v.clear();
		v.resize(n);
		v1.clear();
		v1.resize(n);
		for(int i=0;i<n;i++){
			cin>>v.at(i);
			v1.at(i)=v.at(i);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			if(v1.at(i)!=v.at(i) && tmp==0){
				dau=i;
				tmp++;
				cuoi=i;
			}
			else if(v1.at(i)!=v.at(i) && tmp !=0)
				cuoi=i;
		}
		if(tmp==0)
			cout<<"YES"<<endl;
		else
			cout<<cuoi-dau+1<<endl;
	}
	return 0;
}

