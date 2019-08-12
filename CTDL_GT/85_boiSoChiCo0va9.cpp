/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> res;
bool visited[200];
void Init(){
	res.resize(201);
	int dem=0;
	queue<int> q;
	q.push(9);
	ll t=q.front();q.pop();
	while(dem<200){
			for(int i=1;i<=200 && i<= t;i++)
				if(t%i==0 && !visited[i]){
					visited[i]=true;
					res.at(i)=t;
					dem++;
				}
		q.push(t*10);
		q.push(t*10+9);
		t=q.front();q.pop();	
	}
}
int main(){
	int t;
	cin>>t;
	Init();
	while(t--){
		int n;
		cin>>n;
		cout<<res.at(n)<<endl;
	}
	return 0;
}

