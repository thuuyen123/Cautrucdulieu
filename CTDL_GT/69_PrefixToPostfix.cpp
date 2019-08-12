/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
bool isOperator(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^')
		return true;
	return false;
}
string prefixToPostfix(string pre){
	stack<string> s;
	for(int i=pre.length()-1;i>=0;i--){
		char c=pre[i];
		if(!isOperator(c))
			s.push(string(1,c));
		else{
			string o1= s.top();s.pop();
			string o2= s.top();s.pop();
			string tmp= o1+o2+c;
			s.push(tmp);
		}
	}
	return s.top();
}
int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string prefix;
		getline(cin,prefix);
		cout<<prefixToPostfix(prefix)<<endl;
	}
	return 0;
}

