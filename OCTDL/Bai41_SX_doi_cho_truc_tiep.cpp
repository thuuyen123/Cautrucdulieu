#include<iostream>
#define MAX 100
using namespace std;

int n;
int a[MAX];

void interchange_Sort(){
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i =0;i<n-1;i++){
		int dem =0;
		for(int j =i+1;j<n;j++){
			if(a[i]>a[j]) {
				swap(a[i],a[j]);
				dem=1;
			}
		}
		if(dem==1){
			k++;
			cout<<"Buoc "<<k<<": ";
			for(int j=0;j<n;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
	}
}
int main(){
	interchange_Sort();
}
