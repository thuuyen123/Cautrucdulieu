#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
	char str[1000];
	fflush(stdin);
	while(gets(str)){
		stack<char> st;
		int n = strlen(str);
		for(int i= 0;i<n;i++){
			if(str[i] != ' ') st.push(str[i]);
			if(str[i]==' ' || i==n-1){
				if(!st.empty()){
					while(!st.empty()){
						cout<<st.top();
						st.pop();
					}
				}
				cout<<" ";
			}
		}
	}
}
