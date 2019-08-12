/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
string toBinary(int n){
	string res="";
	while(n>0){
		res=string(1,n%2+'0')+res;
		n/=2;
	}
	return res;
}
void printLessBinary(int n){
	string nn= toBinary(n);
	queue<string> q;
	q.push("1");
	string t= q.front();q.pop();
	while(t!=nn){
		cout<<t<<" ";
		q.push(t+"0");
		q.push(t+"1");
		t=q.front();q.pop();
	}
	cout<<t<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		printLessBinary(n);
	}
	return 0;
}

