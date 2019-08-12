/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int p[]={1, 2, 3, 5, 7, 11, 13 , 17 , 19 , 23};
int c[1001];
ll res; 
void Try(int i, ll t){
	for(int j=1;j<=min(n-1,c[i-1]);j++){
		t*=p[i];
		if(t>=res && res !=-1)
			break;
		if(n%(j+1) == 0){
			c[i]=j;
			n/=(j+1);
			if(n==1)
				res= t;
			else
				Try(i+1,t);
			n*=(j+1);
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		res=-1;
		c[0]=n-1;
		if(n>1)
			Try(1,1);
		else
			res=1;
		cout<<res<<endl;
	}
	return 0;
}

