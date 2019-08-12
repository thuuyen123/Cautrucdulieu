#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;//n gia tri cua to tien
ll s;//so tien dua vao may ATM
vector <int> c;
int FOPT = 9999999;//<10^8
int soto =0;
void Try(int i){
	for(int j=s/c[i];j>=0;j--){//
		soto += j;//cong xong
		s -=(j*c[i]);//tru di
		if(s==0)//nho
			FOPT = soto;
		else if(i<n-1 && soto +s/c[i+1] < FOPT){//nho i<n-1 && soto + s/c[i+1] < FOPT
			Try(i+1);
		}
		soto -=j;//phai tru lai
		s +=(j*c[i]);//phai cong lai
	}
}
int main(){
	cin>>n>>s;
	c.resize(n); //vector la phai resize cho no
	for(int i =0;i<n;i++){//tu 0->n moi dung ko la sai day
		cin>>c[i];
	}
	sort(c.begin(),c.end(), greater<int>() );//dung quen ngoac cua greater<int>()
	Try(0);//try(0) nhe ko phai try(1) dau 
	cout<<FOPT;
	return 0;
}
