/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> c;
int n, soTo=0;
int FOPT=9999999;
ll s; // so tien
void Try(int i){
	for(int j=s/c[i];j>=0;j--){
		soTo+=j;
		s-=(j*c[i]);
		if(s==0)
			FOPT= soTo;
		else if(i<n-1 && soTo + s/c[i+1] < FOPT)
				Try(i+1);
		soTo-=j;
		s+=(j*c[i]);
	}
}
int main(){
	cin>>n>>s;
	c.resize(n);
	for(int i=0;i<n;i++)
		cin>>c[i];
	sort(c.begin(),c.end(),greater<int>());
	Try(0);
	cout<<FOPT;
	return 0;
}

