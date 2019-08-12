/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int n;
vector<int> v;
void insertionSort(){
	for(int i=0;i<n;i++){
		int x= v.at(i);
		int j=i;
		while(j>0 && v.at(j-1) > x){
			v.at(j)=v.at(j-1);
			j--;
		}
		v.at(j)=x;
		cout<<"Buoc "<<i<<": ";
		for(int t=0;t<=i;t++)
			cout<<v.at(t)<<" ";
		cout<<endl;
	}
}
int main(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++)
		cin>>v.at(i);
	insertionSort();
	return 0;
}

