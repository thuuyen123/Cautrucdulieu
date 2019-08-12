#include<iostream>
using namespace std;

int test;
int n, k;
int a[100];
int dem= 0;

void inkq(){
	for(int i =1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool check(){
	for(int i = 1; i<= n ;i++){
		if(a[i]==1) dem++;
	}
	if(k==dem) return true;
	return false;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()==true) inkq();
		}
		else Try(i+1);
	}
}
int main(){
	cin>>test;
	for(int m =1;m<=test;m++){
		cin>>n>>k;
		Try(1);
	}
	return 0;
}
