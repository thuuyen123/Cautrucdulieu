/*
	NEWPTIT
*/
#include<bits/stdc++.h>
using namespace std;
string x;
string nextPermutation(){
	int l=x.length();
	int i=l-1;
	while(i>=1 && x[i-1]>=x[i]) // bo qua day giam dan o ben phai
		i--;
	if(i== 0) // neu la day giam dan thi giam toi 0
		return "BIGGEST";
	for(int j=l-1;j>i-1;j--) // tim phan tu dau tien ben phai lon hon x[i-1]
		if(x[j]>x[i-1]){
			swap(x[j],x[i-1]);
			break;
		}
	for(int j=l-1;i<j;i++,j--) // swap x[i] ..... x[l-1]
		swap(x[i],x[j]);
	return x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int stt;
		cin>>stt;
		cin>>x;
		cout<<stt<<" "<<nextPermutation()<<endl;
	}
	return 0;
}

