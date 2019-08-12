/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string strcpy(string s, int l, int r){
	string str="";
	for(int i=l;i<=r;i++)
		str=str+s[i];
	return str;
}
bool searchString(string s2, string s1){
	if(s2==s1)
		return true;
	ll l1= s1.length();
	ll l2= s2.length();
	for(int i=0; l1 - i >= l2 ;i++)
		if(strcpy(s1,i,i+l2-1) == s2)
			return true;
	return false;
}
int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin,s1);
		getline(cin,s2);
		if(searchString(s2,s1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

