/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, s;
	cin>>n>>s;
	vector<int> A,C; // C[i] =1 - co day con tong = i
	A.resize(n+1);
	C.resize(s+1);
	C[0]=1; // dieu kien ban dau
	for(int i=1;i<=n;i++)
		cin>>A[i];
	for(int i=1;i<=n;i++)
		C[i]=0;
	for(int i=1;i<=n;i++)
		for(int j=s;j>=A[i];j--)
			if(!C[j] && C[j-A[i]])
				C[j]=1;
	if(C[s])
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

