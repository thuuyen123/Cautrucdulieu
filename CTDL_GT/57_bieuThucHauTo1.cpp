/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
stack<char> s, o;

int priority(char x){
	if( x== '(' || x== ')')
		return 0;
	if( x== '+' || x == '-')
		return 1;
	if(x == '*' || x== '/' || x== '%')
		return 2;
	if(x=='^')
		return 3;
	return -1;
}
string infixToPostfix(string str){
	string res="";
	for(int i=0;i<str.length();i++){
		int x=str[i];
		if(x=='(')  // (
			s.push(x); 
		else if(x == '+' || x=='-' || x=='*'|| x=='/'){ // toan hang
			if(priority(x)>=priority(s.top()))
				s.push(x);
			else{
				o.push(s.top());s.pop();
				s.push(x);
			}
			if(s.empty())
				s.push(x);
		}
		else if(x==')'){ // (
			int y= s.top();s.pop();
			while(y!='('){
				o.push(y);
				y=s.top();s.pop();
			}
		}
		else // toan tu
			o.push(x);
	}
	while(!s.empty()){
		o.push(s.top());
		s.pop();
	}
	while(!o.empty()){
		res= o.top()+ res;
		o.pop();
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<infixToPostfix(str)<<endl;
	}
	return 0;
}

