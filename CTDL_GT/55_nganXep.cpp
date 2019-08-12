/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int l=0;
	string s;
	vector<int> v;
	while(cin>>s){
		if(s=="push"){
			int a;
			cin>>a;
			v.push_back(a);
			l++;
		}
		else if(s=="show"){
			if(v.empty())
				cout<<"empty"<<endl;
			else{
				for(int i=0;i<l;i++)
					cout<<v.at(i)<<" ";
				cout<<endl;
			}
			
		}
		else if(s=="pop"){
			l--;
			v.resize(l);
		}
	}
	return 0;
}

