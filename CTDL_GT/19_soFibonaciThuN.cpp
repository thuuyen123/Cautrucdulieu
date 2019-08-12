/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long

/*
	| 0 1 |	. | x | =  | y   |
	| 1 1 |	  | y |    | x+y |
*/

using namespace std;
struct maTrix{
	ll m[2][2];
};
maTrix operator *(maTrix a, maTrix b){
	maTrix res;
	for(int i=0;i<=1;i++)
		for(int j=0;j<=1;j++){
			res.m[i][j]= 0;
			for(int t=0;t<=1;t++)
				res.m[i][j]= (res.m[i][j] +(a.m[i][t]* b.m[t][j])%MOD) %MOD;
		}
	return res;
}
maTrix power(maTrix a, int n){
	if(n==1)
		return a;
	maTrix tmp= power(a,n/2);
	if(n%2==0)
		return tmp*tmp;
	return tmp*tmp*a;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		maTrix a;
		a.m[0][0]=0;
		a.m[0][1]=1;
		a.m[1][0]=1;
		a.m[1][1]=1;
		maTrix tmp;
		tmp= power(a,n-1);
		cout<<tmp.m[1][1]<<endl;;
	}
	return 0;
}

