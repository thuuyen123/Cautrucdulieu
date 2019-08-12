#include<iostream>
#define MAX 100
using namespace std;
//dung
int n;
int a[MAX];

void insertion_Sort(){
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	int temp;
	cout<<"Buoc 0: "<<a[0]<<endl;
	for(int i=1;i<n;i++){
		int j=i-1;
		temp= a[i];
		while(temp<a[j]&&j>=0){
			a[j+1]= a[j];
			j--;
		}
		a[j+1]=temp;
		cout<<"Buoc "<<i<<":";
		for(int j =0;j<=i;j++){
			cout<<" "<< a[j];
		}
		cout<<endl;
	}
}
int main(){
	insertion_Sort();
}
