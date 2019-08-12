#include<bits/stdc++.h>
using namespace std;

int n,k,x[100];

void tohop(){
	int i=k;
	while(i>=1 && x[i]==n-k+i)
		i--;
	if(i>0){
		x[i]++;
		i++;
		while(i<=k){
			x[i]=x[i-1]+1;
			i++;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int dem = 0;
		cin>>n>>k;
		set <int> s;
		for(int i =1;i<=k;i++){
			cin>>x[i];
			s.insert(x[i]);
		}
		tohop();
		for(int i =1;i<=k;i++){
			if(s.find(x[i])==s.end())
				dem++;
		}
		if(dem!=0) cout<<dem<<endl;
		else cout<<k<<endl;
	}
}
