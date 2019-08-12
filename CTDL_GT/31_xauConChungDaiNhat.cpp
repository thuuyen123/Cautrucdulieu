/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int F[1005][1005]; // F[i][j] la do dai xau con chung dai nhat khi xet i ki tu dau cua xau a, j ki tu dau cua xau b
string a, b;
int main(){
	getline(cin,a);
	getline(cin,b);
	int m= a.size();
	int n=b.size();
	a=" "+a;
	b=" "+b;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]) 
				F[i][j]=F[i-1][j-1]+1;
			else
				F[i][j]=max(F[i][j-1],F[i-1][j]);
		}
	cout<<F[m][n];
	return 0;
}

