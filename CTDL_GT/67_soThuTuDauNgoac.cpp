/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		int dem=0;
		stack<int> s;
		string str;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			if(str[i]=='('){
				s.push(++dem);
				cout<<dem<<" ";
			}
			else if(str[i]==')'){
				cout<<s.top()<<" ";
				s.pop();
			}
		}
		cout<<endl;
	}
	return 0;
}
