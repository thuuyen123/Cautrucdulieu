/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
int n,FOPT=999;
int a[11][11];
int x[11];
bool check[11];
vector<string> v;
int numRepeat(string, string);
void qlHoanVi(int);
int calc();
int main(){
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++)
		cin>>v.at(i);
	// CHUYEN SANG ma tran ke
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			a[i][j]=numRepeat(v.at(i),v.at(j));
			a[j][i]=numRepeat(v.at(i),v.at(j));
		}
	qlHoanVi(0);
	cout<<FOPT<<endl;
	return 0;
}
int numRepeat(string a, string b){
	int dem=0;
	for(int i=0;i<a.length();i++){
		bool ok=false;
		for(int j=0;j<b.length();j++)
			if(a[i]==b[j])
				ok= true;
		if(ok==true)
			dem++;
	}
	return dem;
}
void qlHoanVi(int i){
	for(int j=0;j<n;j++){
		if(check[j]==false ){
			x[i]=j;
			check[j]=true;
			if(i==n-1){
				int tmp=calc();
				if(tmp<FOPT)
					FOPT=tmp;
			}
			else
				qlHoanVi(i+1);
			check[j]=false;
		}
	}
}
int calc(){
	int s=0;
	for(int i=0;i<n-1;i++){
		s+=a[x[i]][x[i+1]];
	}
	return s;
}
