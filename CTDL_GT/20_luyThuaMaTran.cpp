/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007 // not 10e9+7
using namespace std;
struct maTrix{
	ll m[11][11];
};
int N, K;
maTrix operator *(maTrix a, maTrix b){
	maTrix res;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			res.m[i][j]=0;
			for(int t=1;t<=N;t++)
				res.m[i][j]=(res.m[i][j]+(a.m[i][t]*b.m[t][j])) %MOD;
		}
	}
	return res;
}
maTrix power(maTrix a, ll n){
	if(n==1)
		return a;
	maTrix tmp=power(a,n/2);
	if(n%2==0)
		return tmp*tmp;
	return tmp*tmp*a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>K;
		maTrix a;
		for(int i=1;i<=N;i++)
			for(int j=1;j<=N;j++){
				cin>>a.m[i][j];
			}
		maTrix res= power(a,K);
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++)
				cout<<res.m[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

