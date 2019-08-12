#include<bits/stdc++.h>
using namespace std;
string str;
int x;
int main(){
	queue<int> q;
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		if(str=="PUSH"){
			cin>>x;
			q.push(x);	
		}
		else if(str=="POP"){
				if(!q.empty()) q.pop();
//				else break;
		}
		else if(str=="PRINTFRONT"){
				if(!q.empty())	cout<<q.front()<<endl;
				else cout<<"NONE"<<endl;
		}
	}
}
