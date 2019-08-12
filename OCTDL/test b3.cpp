#include<iostream>
#include<cstring>
using namespace std;

string c;
int n,x;
void hoanvi(){
	int i=n-1;
	while(i>=0 && c[i]>=c[i+1]) i--;
	if(i==0){
		cout<<x<<" BIGGEST"<<endl;
	}
	else{
		int j=n;
		while(c[j]<= c[i]) j--;
		int temp = c[i];
		c[i]=c[j];
		c[j]=temp;
		int l =i+1;
		int r= n;
		while(l<=r){
			int temp = c[l];
			c[l] =c[r];
			c[r] = temp;
			l++;
			r--;
		}
		strout<<x;
		for(int s=0;s<=n;s++){
			cout<<c[s];
		}
		cout<<endl;	
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>x>>c;
		n = c.length();
		c=" "+c;
		hoanvi();
	}
}
