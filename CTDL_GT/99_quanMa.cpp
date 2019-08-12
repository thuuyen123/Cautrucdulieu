/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;
int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={1,-1,1,-1,2,-2,2,-2};
string ST, EN; // vi tri bat dau, ket thuc;

int minStep(ii a, ii b){
	queue<pair<ii,int> > q;
	q.push(pair<ii,int>(a,0));
	pair<ii,int> t=q.front();q.pop();
	while(t.fi!=b){
		for(int i=0;i<8;i++){
			int x=t.fi.fi+dx[i];
			int y=t.fi.se+dy[i];
			if(x>=1 && x<=8 && y >=1 && y<=8)
				q.push(pair<ii,int>(ii(x,y),t.se+1));
		}
		t=q.front();q.pop();
	}
	return t.se;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>ST;
		cin>>EN;
		ii st, en;
		st.fi=ST[0]-'a'+1;
		st.se=ST[1]-'0';
		en.fi=EN[0]-'a'+1;
		en.se=EN[1]-'0';
		cout<<minStep(st,en)<<endl;
	}
	return 0;
}

