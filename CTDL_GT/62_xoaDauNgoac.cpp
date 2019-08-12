/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int> 
#define fi first
#define se second

using namespace std;
vector<ii> vtn;
int x[11];
int n;
int s=0;
string str;
set<string> result;
void Update(){
	string s1="";
	for(int i=0;i<str.length();i++){
		bool check= true;
		for(int j=n-1;j>=0;j--){
			if(x[j]==1 && (i== vtn.at(j).fi || i == vtn.at(j).se)){
				check= false;
				break;
			}
		}	
		if(check)
			s1=s1+string(1,str[i]);
	}
	result.insert(s1);
}
void qlNhiPhan(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		s+=j;
		if(i==0){
			if(s>0)
				Update();
		}
		else
			qlNhiPhan(i-1);
		s-=j;
	}
}
int main(){
	int dem=0;
	stack<int> s;
	cin>>str;
	for(int i=0;i<str.length();i++){
		char c=str[i];
		if(c=='(')
			s.push(i);
		else if(c==')'){
			if(!s.empty()){
				vtn.push_back(ii(s.top(),i));
				s.pop();
			}	
		}
	}
	n=vtn.size();
	qlNhiPhan(n-1);
	for(set<string>::iterator it= result.begin();it!=result.end();it++)
		cout<<*it<<endl;
	return 0;
}

