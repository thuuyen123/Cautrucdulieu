#include<iostream>
using namespace std;

int a[100];
int n;
int xuoi[1000];
int nguoc[1000];
int col[100];
int dem =0;
void init(){
	cin>>n;
	for(int i = 1;i<=n;i++){
		col[i] =1;
	}
	for(int i =1;i<2*n;i++){
		xuoi[i]=1;
		nguoc[i]=1;
	}
}
void tang(){
	++dem;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(col[j] && xuoi[i+j-1] &&nguoc[i-j+n]){
			a[i]=j;
			col[j]=0;
			xuoi[i+j-1]=0;
			nguoc[i-j+n]=0;
			if(i==n){
				tang();
			}
			else{
				Try(i+1);
			}
			col[j]=1;
			xuoi[i+j-1]=1;
			nguoc[i-j+n]=1;
			
		}
		
	}
}
int main(){
	init();
	Try(1);
	cout<<dem;
}
