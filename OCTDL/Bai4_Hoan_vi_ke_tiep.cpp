#include<iostream>
#include<cstring>
using namespace std;

string c;
int t, x, n;
void sinh(){
	int i = n-1;
	while(i>=0 && c[i]>=c[i+1]) i--;
	if(i==0){
		cout<<x<<" BIGGEST"<<endl;
	}
	else{
		int j = n;
		while(c[j]<=c[i]) j--;
		int temp = c[i];
		c[i] = c[j];
		c[j] = temp;
		int l=i+1, r=n;
		while(l <= r){
			int t = c[l];
			c[l] = c[r];
			c[r] = t;
			l++;
			r--;
		}
		cout<<x;
		for(int s =0;s<=n;s++){
			cout<<c[s];
		}
		cout<<endl;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>x>>c;
		n=c.length();
		c=" "+c;
		sinh();
	}
}
