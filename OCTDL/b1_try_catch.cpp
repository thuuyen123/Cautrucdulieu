#include<bits/stdc++.h>
using namespace std;

int x[100],n;
int dem;
int k;
void display(){
	for(int i =1;i<=n;i++){
 		cout<<x[i];
	 }
	 cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		dem+=j;
		if(i==n && dem==k){
			display();
		}
		else if(i<n)
			Try(i+1);
		dem-=j;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int dem=0;
		cin>>n>>k;
		Try(1);
//		system("pause");
	}
}
