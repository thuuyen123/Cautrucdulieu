#include<iostream>
#define MAX 20
using namespace std;

int test;
int n,k;
int ok =0;
int x[MAX];

void dautien(){
	for(int i =1;i<=n;i++){
		x[i]=0;
	}

}
void display(){
	for(int i=1;i<=n;i++){
		if(x[i]==1) cout<<"1";
		else cout<<"0";
	}
	cout<<endl;
}
void sinh(){
	int i=n;
	while(i>0&& x[i]==1){
		x[i]=0;
		i--;
	}
	if(i==0){
		x[i]=1;
	}
	else ok=0;
}
bool ckeck(){
	int dem =0;
	for(int i=1;i<=n;i++){
		if(x[i]==1) dem++;
 	}
 	if(dem==k) return true;
 	return false;	
}
int main(){
	cin>>test;
	for(int i=1;i<=test;i++){
		cin>>n>>k;
		dautien();
		while(ok){
			if(ckeck()==true) display();
			sinh();
		}
	}
}
