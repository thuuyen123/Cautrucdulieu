#include<bits/stdc++.h>
using namespace std;

bool toantu(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}
void postfix_To_infix(string str){
	stack<string> st;
	int n = str.size();
	for(int i = 0;i<n;i++){
		if(toantu(str[i])){
			string vt1 = st.top();st.pop();
			string vt2 = st.top();st.pop();
			string ans = "(" + vt2 + str[i] +vt1 +")";
			st.push(ans);
		}
		else{
			st.push(string(1,str[i]));
		}
	}
	cout<<st.top()<<endl;
}
int main(){
	int test;
	cin>>test;
	string str;
	while(test--){
		cin>>str;
		postfix_To_infix(str);
	}
	return 0;	
}
