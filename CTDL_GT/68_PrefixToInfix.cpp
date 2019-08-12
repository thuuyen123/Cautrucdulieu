/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
bool isOperator(char x){ // kiem tra có phai toan tu k?
	if(x=='+' || x=='-' || x== '*' || x=='/' || x=='%' || x=='^')
		return true;
	return false;
}
string prefixToInfix(string pre){
	stack<string> s;
	
	for(int i=pre.length()-1;i>=0;i--){
		char c=pre[i];
		if(!isOperator(c)) // neu ko la toan tu
			s.push(string(1,c));
		else{ // neu la toan tu
			string o1= s.top();s.pop();
			string o2= s.top();s.pop();
			string tmp= "(" + o1 + c+ o2 + ")";
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
		cout<<prefixToInfix(prefix)<<endl;
	}
	return 0;
}

