/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;cin.ignore();
	while(t--){
		string str;
		int count=0;
		stack<char> s;
		getline(cin,str);
		for(int i=0;i<=str.length();i++){
			char c=str[i];
			if(c=='(')
				s.push(c);
			else if(c==')'){
				if(!s.empty())
					s.pop();
				else{
					s.push('(');
					count++;
				}
			}
		}
		cout<<count+s.size()/2<<endl;
	}
	return 0;
}

