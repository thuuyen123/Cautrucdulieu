#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int x;
	string str;
	int test;cin>>test;
	while(test--){
		cin>>str;
		if(str == "PUSH"){
			cin>>x;
			st.push(x);
		}
		else if(str =="POP"){
			if(!st.empty()) st.pop();
		}
		else{
			if(str=="PRINT"){
				if(!st.empty())	cout<<st.top()<<endl;
				else cout<<"NONE"<<endl;
			}
			
		}
	}
	return 0;
}
