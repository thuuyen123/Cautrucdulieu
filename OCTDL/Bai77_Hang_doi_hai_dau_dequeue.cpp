#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;//so luong cau truy van
	vector <int> v;
	while(n--){
//		queue <int> q;
		string str;
		cin>>str;
		if(str=="PUSHFRONT"){
			int x;
			cin>>x;
			v.insert(v.begin(),x);
		}
		else if(str=="PRINTFRONT"){
			if(!v.empty()){
				cout<<v.front()<<endl;
			}
			else cout<<"NONE"<<endl;
		}
		else if(str=="POPFRONT"){
			if(v.empty()) break;
			else v.erase(v.begin());
		}
		else if(str=="PUSHBACK"){
			int x;
			cin>>x;
			v.push_back(x);
		}
		else if(str=="PRINTBACK"){
			if(v.empty()) cout<<"NONE"<<endl;
			else cout<<v.back()<<endl;
		}
		else if(str=="POPBACK"){
			if(v.empty()) break;
			else v.pop_back();
		}
	}
}
