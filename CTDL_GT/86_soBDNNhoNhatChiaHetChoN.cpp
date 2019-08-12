/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool  chiaHet(string a, int b){
	ll res=0;
	for(int i=0;i<a.length();i++){
		res=res*10+a[i]-'0';
		if(res>=b)
			res=res%b;
	}
	return (res==0);
}
void minBDN(int n){
	queue<string> q;
	q.push("1");
	string t=q.front();q.pop();
	while(!chiaHet(t,n)){
		q.push(t+"0");
		q.push(t+"1");
		t= q.front();q.pop();
	}
	cout<<t<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		minBDN(n);
	}
	return 0;
}

