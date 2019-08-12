/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int v[1001][1001];

int stringToNum(string s){
	int res=0;
	for(int i=0;i<s.length();i++)
		res=res*10+(s[i]-'0');
	return res;
}

int main(){
	int n; // so dinh 
	cin>>n;cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if(s[j]>='1' && s[j]<='9'){
				string temp;
				int t=j;
				while(s[t]>='0' && s[t]<='9' && t<s.length()){
					temp=temp+string(1,s[t]);
					t++;
				}
				int k=stringToNum(temp);
				v[i][k]=1;
				j=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

