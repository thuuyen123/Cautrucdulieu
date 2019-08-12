#include <bits/stdc++.h>
using namespace std;
//dung
int n;
long long a[1000001];
int main(){
	int test;
	cin>>test;
	for(int i =1;i<=test;i++){
		
		cin>>n;
	
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i =0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}	
}
