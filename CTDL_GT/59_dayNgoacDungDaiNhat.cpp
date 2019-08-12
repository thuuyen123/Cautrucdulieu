/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int q[100005],dp[100005];
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int top=0,res=0;
		memset(dp,0,sizeof dp);
		string str;
		getline(cin,str);
		if(str=="")
			cout<<"0"<<endl;
		else
		{
			int n=str.length();
			str=" "+str;
			for(int i=1;i<=n;i++){
				if(str[i]=='(')
					q[++top]=i;
				else if(top!=0 && str[i]==')'){
					dp[i]=dp[q[top]-1]+i-q[top]+1;
					res=max(res,dp[i]);
					top--;
				}
			}
			cout<<res<<endl;
		}
	}
	return 0;
}

