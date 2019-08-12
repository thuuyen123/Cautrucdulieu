#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size();
		string temp ="", ope = "(+-*/)^";
		map<char, int> pri;
		pri['^']=3; pri['*']=2; pri['/'] =2;
		pri['+']=1; pri['-']=1;pri['(']=0;
		stack<char> st;
		for(int i =0;i<n;i++){
			if(s[i] >= 'a' && s[i]<= 'z') cout<<s[i];
			else if(s[i] == '(' ) st.push(s[i]);
			else if(s[i] == ')'){
				while(!st.empty() &&st.top()!='('){
					cout<<st.top();
					st.pop();
				}
				st.pop();
			}
			else if(ope.find(s[i])!= string::npos){
				while(!st.empty() && pri[st.top()] >=pri[s[i]]){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
	return 0;
}
