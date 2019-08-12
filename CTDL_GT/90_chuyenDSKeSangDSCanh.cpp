/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
using namespace std;

int main(){
	vector<ii> dsc; // danh sach canh
	int N; // N - so dinh
	cin>>N;cin.ignore();
	// nhap danh sach ke
	for(int i=1;i<=N;i++){
		string s;
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if((s[j]>='1' && s[j]<='9') && (s[j+1]>='0' && s[j+1] <='9')){
				int a= 10*(s[j]-'0')+s[j+1]-'0';
				if(i<a)
					dsc.push_back(ii(i,a));
				j++;
			}
			else if(s[j]>='1' && s[j]<=N+'0')
					if(i<s[j]-'0')
						dsc.push_back(ii(i,s[j]-'0')); 
		}
	}
	for(int i=0;i<dsc.size();i++){
		cout<<dsc.at(i).fi<<" "<<dsc.at(i).se<<endl;
	}
	return 0;
}

