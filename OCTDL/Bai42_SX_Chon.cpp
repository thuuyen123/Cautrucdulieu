#include<iostream>
#define MAX 100
using namespace std;

int n;
int a[MAX];

void selection_Sort(){
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int k =0;
	int min,dem;
	for(int i =0;i<n-1;i++){
		dem=0;
		min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]) min=j;
		}
		swap(a[i],a[min]);
		dem=1;
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
	selection_Sort();
}
