/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>> s;
		if(s=="PUSHBACK"){
			int a;
			cin>>a;
			v.push_back(a);
		}
		else if(s=="PUSHFRONT"){
			int a;
			cin>>a;
			v.insert(v.begin(),a);
		}
		else if(s=="PRINTBACK"){
			if(v.empty())
				cout<<"NONE"<<endl;
			else
				cout<<v.back()<<endl;
		}
		else if(s=="PRINTFRONT"){
			if(v.empty())
				cout<<"NONE"<<endl;
			else
				cout<<v.front()<<endl;
		}
		else if(s=="POPBACK"){
			if(!v.empty())
				v.pop_back();
		}
		else if(s=="POPFRONT"){
			if(!v.empty())
				v.erase(v.begin());
		}
	}
	return 0;
}

