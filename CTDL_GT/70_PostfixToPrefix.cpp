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
string postfixToPrefix(string pos){
	stack<string> s;
	for(int i=0;i<pos.length();i++){
		char c=pos[i];
		if(!isOperator(c))
			s.push(string(1,c));
		else{
			string o1= s.top();s.pop();
			string o2= s.top();s.pop();
			string tmp= c+o2+o1;
			s.push(tmp);
		}
	}
	return s.top();
}
int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string postfix;
		getline(cin,postfix);
		cout<<postfixToPrefix(postfix)<<endl;
	}
	return 0;
}

