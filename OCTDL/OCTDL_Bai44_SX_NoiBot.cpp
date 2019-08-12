#include<iostream>
#define MAX 100
using namespace std;

void noiBot(int n, int a[MAX]){
	int k =0;
	for(int i = 1; i<= n;i++){
		int dem = 0;
		for(int j =1;j<n;j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				dem =1;
			}
		}
		
		if(dem ==1 ){
			k++;
			cout<<"Buoc "<<k<<": ";
			for(int j=1;j<=n;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[MAX];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	noiBot(n,a);
}
