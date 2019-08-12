/*
	NEWPTIT
*/
#include<bits/stdc++.h>
#define INF 1000000007
using namespace std;
int tien[]={1, 2, 5, 10, 20 , 50, 100, 200, 500, 1000};
int FOPT=INF;
int soTo=0;
int n;// so tien
void Try(int i){
	for(int j=n/tien[i];j>=0;j--){
		soTo+=j;
		n-=(j*tien[i]);
		if(n==0)
			FOPT=soTo;
		else if( i>0 && soTo + n/tien[i-1] < FOPT )
			Try(i-1);
		soTo-=j;
		n+=(j*tien[i]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		soTo=0;
		FOPT=INF;
		cin>>n;
		Try(9);
		cout<<FOPT<<endl;
	}
	return 0;
}


