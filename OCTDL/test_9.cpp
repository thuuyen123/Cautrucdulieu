#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll s;//co s gia tri to tien
vector<int> c;
int n;
int soto=0;
int FOPT = 9999999;
void Try(int i){
	for(int j=s/c[i];j>=0;j--){
		soto +=s/c[i];
		s -= (j*c[i]);
		if(s==0)	FOPT=soto;
		else if(i<n-1 && soto + s/c[i+1] < FOPT){
			Try(i+1);
		}
		soto -= s/c[i];
		s += (j*c[i]);
	}
}
int main(){
	cin>>n>>s;
	c.resize(n);
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	sort(c.begin(), c.end(), greater<int>());
	Try(0);
	cout<<FOPT;
	
	return 0;
}
