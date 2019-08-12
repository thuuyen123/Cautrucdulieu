/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string str;
		int tmp=0,ok=0;
		stack<int> s;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			char c= str[i];
			if(c=='(')
				s.push(1);
			else if(!s.empty() && (c=='+' || c=='-' || c=='*' || c=='/') )
				s.pop();
			if(c==')' && !s.empty()){
				ok= 1;
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(ok==0)	
			cout<<"No"<<endl;
	}
	return 0;
}

