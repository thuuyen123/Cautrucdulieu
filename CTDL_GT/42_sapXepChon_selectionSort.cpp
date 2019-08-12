/*
	NEWPTIT
*/
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
void selectionSort(){
	for(int i=0; i<n-1;i++){
		int min = i;
		for(int j=i+1; j< n; j++)
			if(v.at(min)>v.at(j))
				min= j;
		swap(v.at(i),v.at(min));
		cout<<"Buoc "<<i+1<<": ";
		for(int t=0;t<n;t++)
			cout<<v.at(t)<<" ";
		cout<<endl;
	}
}
int main(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++)
		cin>>v.at(i);
	selectionSort();
	return 0;
}


