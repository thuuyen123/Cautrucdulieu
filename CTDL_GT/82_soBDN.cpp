/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int Compare(string a, string b){
	if(a.length()<b.length())
		return -1;
	if(a.length()>b.length())
		return 1;
	return a.compare(b);
}
int soBDN(string str){
	int dem=0;
	queue<string> q;
	q.push("1");
	string t;
	do{
		t=q.front();q.pop();
		q.push(t+"0");
		q.push(t+"1");
		dem++;
	}while(Compare(t,str)==-1 || Compare(t,str)==0);
	return dem-1;
}
int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string n;
		getline(cin,n);
		cout<<soBDN(n)<<endl;
	}
	return 0;
}

