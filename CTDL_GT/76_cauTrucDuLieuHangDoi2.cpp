/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	queue<int> q;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int a;
			cin>>a;
			q.push(a);
		}
		else if(s=="PRINTFRONT"){
			if(q.empty())
				cout<<"NONE"<<endl;
			else
				cout<<q.front()<<endl;
		}
		else if("POP"){
			if(!q.empty())
				q.pop();
		}
	}
	return 0;
}

