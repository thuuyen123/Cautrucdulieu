#include<bits/stdc++.h>

using namespace std;

int n,k;
int x[16];
int s=0;
void display(){
	for(int i=0;i<n;i++){
		cout<<x[i];
	}
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		s+=j;
		if(i==n){
			if(s==k) display();
		}
		else{
			Try(i+1);
		}
		s-=j;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		s=0;		
		cin>>n>>k;
		Try(1);
		return 0;
	}
}
