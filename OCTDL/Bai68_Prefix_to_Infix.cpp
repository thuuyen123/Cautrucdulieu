#include<bits/stdc++.h>
using namespace std;

bool toantu(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}
void prefix_To_infix(string str){
	stack<string> st;
	int n = str.size();
	for(int i = n-1;i>-1;i--){
		if(toantu(str[i])){
			string vt1 = st.top();st.pop();
			string vt2 = st.top();st.pop();
			string ans = "(" + vt1 + str[i] +vt2 +")";
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
		prefix_To_infix(str);
	}
	return 0;
}
