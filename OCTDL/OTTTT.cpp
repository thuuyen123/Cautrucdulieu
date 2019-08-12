#include<bits/stdc++.h>
using namespace std;

vector<int> x(11);
vector<vector<int> > v;
int c[11][11];
int n,k;
bool ckeck[100];
int checkSum(){
	int s=0;
	for(int i =1;i<=n;i++){
		s+=c[i][x[i]];
	}
	return (s==k);
}
void Try(int i){
	for(int j =1;j<=n;j++){
		if(ckeck[j]==false){
			x[i]=j;
			ckeck[j]=true;
			if(i==n){
				if(checkSum()) v.push_back(x);
			}
			else Try(i+1);
			ckeck[j]=false;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i =1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
	Try(1);
	cout<<v.size()<<endl;
	for(int i =0;i<v.size();i++){
		for(int j =1;j<=n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

