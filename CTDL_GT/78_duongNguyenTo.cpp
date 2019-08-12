/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
vector<int> snt;
bool checkSNT(int n){
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
void Init(){
	for(int i=1001;i<=9999;i+=2)
		if(checkSNT(i))
			snt.push_back(i);
}
bool checkDif(int a, int b){
	int dem=0;
	while(a>0){
		if(a%10 != b%10)
			dem++;
		a/=10;
		b/=10;
	}
	return dem==1;
}
int minStep(int a, int b){
	set<int> visited;
	queue<ii> q;
	q.push(ii(a,0));
	visited.insert(a);
	while(!q.empty()){
		ii t=q.front();q.pop();
		if(t.fi ==b)
			return t.se;
		if(checkDif(t.fi,b))
			return t.se+1;
		for(int i=0;i<snt.size();i++)
			if( checkDif(snt[i],t.fi) && visited.find(snt[i])==visited.end() ){
				visited.insert(snt[i]);
				q.push(ii(snt[i], t.se+ 1));
			}
	}
}
int main(){
	int t;
	cin>>t;
	Init();
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<minStep(a,b)<<endl;
	}
	return 0;
}

