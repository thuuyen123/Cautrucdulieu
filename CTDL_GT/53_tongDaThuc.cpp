/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define heSo first
#define soMu second
using namespace std;
vector<pair<int,int> > box;
string a, b;
int stringToNum(string s){
	int tmp=0,l=s.length();
	for(int i=0;i<l;i++)
		tmp=tmp*10+ (s[i]-'0');
	return tmp;
}
void Process(string a){
	int l=a.length();
	string tmp="";
	pair<int,int> p;
	for(int i=0;i<l;i++){
		if(a[i]>='0' && a[i] <='9')
			tmp+=a[i];
		if(a[i] == '*' ){
			p.heSo= stringToNum(tmp);
			tmp="";
		}
		if(a[i]== '+' || i==l-1){
			p.soMu= stringToNum(tmp);
			tmp="";
			box.push_back(p);
		}
	}
}
bool cmp(pair<int, int> x, pair<int , int> y){
	if(x.soMu > y.soMu)
		return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		box.clear();
		getline(cin,a);
		getline(cin,b);
		Process(a);
		Process(b);
		sort(box.begin(),box.end(),cmp);
		for(int i=0;i<box.size();i++){
			if(box.at(i).soMu == box.at(i+1).soMu){
				cout<<box.at(i).heSo+box.at(i+1).heSo<<"*x^"<<box.at(i).soMu;
				i++;
			}
			else
				cout<<box.at(i).heSo<<"*x^"<<box.at(i).soMu;
			if(i!=box.size()-1)
				cout<<" + ";
			if(box.at(i).soMu == 0)
				break;
		}
		cout<<endl;
	}
	return 0;
}

	

