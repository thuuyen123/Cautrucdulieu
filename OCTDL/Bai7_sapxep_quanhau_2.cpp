#include<bits/stdc++.h>
using namespace std;

int x[102], c[102][102];
int FOPT = 0;
bool cot[102], cheo1[102],cheo2[102];
int n =8;
int cal(){
	int sum =0;
	for(int i =1;i<=n;i++)
		sum+=c[i][x[i]];
	return sum;
}
void Try(int i){
	for(int j =1;j<=n;j++){
		if(!(cot[j] || cheo1[i-j+n]||cheo2[i+j-1])){
			x[i]=j;
			cot[j]=true;
			cheo1[i-j+n]=true;
			cheo2[i+j-1]=true;
			if(i==n){
				int t = cal();
				if(t>FOPT) FOPT=t;
			}
			else Try(i+1);
			cot[j]=false;
			cheo1[i-j+n]=false;
			cheo2[i+j-1]=false;
		}
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		for(int i =1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>c[i][j];
			}
		}
		Try(1);
		cout<<FOPT<<endl;
	}
}





