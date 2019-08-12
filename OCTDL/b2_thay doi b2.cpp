#include<bits/stdc++.h>
using namespace std;

int n,k,dem=0;
char b[100], kq[1000][100];

void inkq(){
	cout<<dem<<endl;
	for(int i =1;i<=dem;i++){
		cout<<kq[i]+1<<endl;
	}
}
void update(){
	dem++;
	for(int i =1;i<=n;i++){
		kq[dem][i]= b[i];
	}
}
bool check(){
	int t=0, d=0;
	for(int i=1;i<=n;i++){
		if(b[i]=='A'){
			t++;
			if(t==k) d++;
			if(t>k) return false;
		}
		else t=0;
	}
	if(d==1) return true;
	return false;
}
void Try(int i){
	for(char j='A';j<='B';j++){
		b[i]=j;
		if(i==n){
			if(check()) update();
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	Try(1);
	inkq();
	return 0;
}
