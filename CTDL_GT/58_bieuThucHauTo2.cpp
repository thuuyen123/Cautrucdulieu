/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int priority(char c){
	if(c=='(' || c== ')')
		return 0;
	if(c== '+' || c== '-')
		return 1;
	if(c=='*' || c=='/' || c=='%')
		return 2;
	if(c=='^')
		return 3;
	return -1;
}
string infixToPostfix2(string str){
	string res="";
	stack<char> s;
	for(int i=0;i<str.length();i++){
		char x= str[i];
		if(x>='a' && x<='z')
			res= res+x;
		else if(x=='(')
			s.push(x);
		else if(x==')'){
			while(s.top()!='('){
				res=res+s.top();
				s.pop();
			}
			s.pop();
		}
		else{
			if(s.empty() || s.top()=='(' || priority(x)>priority(s.top()))
				s.push(x);
			else{
				while(!s.empty() && priority(x) <= priority(s.top())){
					res= res+s.top();
					s.pop();
				}
				s.push(x);
			}
		}
	}
	while(!s.empty()){
		res=res+s.top();
		s.pop();
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<infixToPostfix2(str)<<endl;
	}
	return 0;
}

