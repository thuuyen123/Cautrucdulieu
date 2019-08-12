#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
//dung
int main(){
	int n;
	cin>>n;
	long long a[MAX];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stable_sort(a,a+n);
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;	
}
