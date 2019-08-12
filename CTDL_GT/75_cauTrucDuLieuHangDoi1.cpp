/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		queue<int> q;
		int n;
		cin>>n;
		while(n--){
			int lc;
			cin>>lc;
			switch(lc){
				case 1:{
					cout<<q.size()<<endl;
					break;
				}
				case 2:{
					if(q.empty())
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
					break;
				}
				case 3:{
					int m;
					cin>>m;
					q.push(m);
					break;
				}
				case 4:{
					if(q.empty())
						break;
					else
						q.pop();
					break;
				}
				case 5:{
					if(q.empty())
						cout<<"-1"<<endl;
					else
						cout<<q.front()<<endl;
					break;
				}
				case 6:{
					if(q.empty())
						cout<<"-1"<<endl;
					else
						cout<<q.back()<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

