/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumMin,sumMax;
void Calc(ll a, ll b){
	sumMin=a+b;
	sumMax=a+b;
	int tmp=0;
	while(a>0 || b>0){
		if(a%10==6)
			sumMin-=pow(10,tmp);
		if(a%10==5)
			sumMax+=pow(10,tmp);
		if(b%10==6)
			sumMin-=pow(10,tmp);
		if(b%10==5)
			sumMax+=pow(10,tmp);
		a/=10;
		b/=10;
		tmp++;
	}
}
int main(){
	ll a, b;
	cin>>a>>b;
	Calc(a, b);
	cout<<sumMin<<" "<<sumMax<<endl;
	return 0;
}


