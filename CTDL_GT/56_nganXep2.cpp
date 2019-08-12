/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t, a;
	string s;
	stack<int> st;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		if(s== "PUSH"){
			cin>>a;
			cin.ignore();
			st.push(a);
		}
		if(s== "PRINT"){
			if(st.empty())
				cout<<"NONE"<<endl;
			else
				cout<<st.top()<<endl;
		}
		if(s== "POP")
			if(!st.empty())
				st.pop();
	}
	return 0;
}

