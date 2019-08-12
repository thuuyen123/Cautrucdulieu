#include<bits/stdc++.h>
using namespace std;

bool toantu(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}
int main(){
	int test;
	cin>>test;
	stack <string> st;
	while(test--){
		string str;
		cin>>str;
		int n =str.size();
		for(int i =0;i<n;i++){
			if(str[i]>='a' && str[i]<='z') cout<<str[i];
			else if(str[i]==')'){
				 cout<<st.top();
				 st.pop();
			}
			else if(toantu(str[i])){
				st.push(string(1,str[i]));
			}
		}
	}
	return 0;
}
