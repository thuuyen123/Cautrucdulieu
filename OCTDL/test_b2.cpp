#include<iostream>
#include<cstring>
using namespace std;

int n, k, dem =0;
char b[100];
char kq[1000][100];

void update(){
	dem++;
	for(int i =1;i<=n;i++){
		kq[dem][i]=b[i];
	}
}
void inkq(){
    printf("%d \n", dem);
    for (int i = 1; i <= dem; i++)
        printf("%s\n", kq[i]+1);
	
}
bool check(){
	int bit=0; int day=0;
	for(int i=1;i<=n;i++){
		if(b[i]=='A') {
			bit++;
			if(bit==k){
				day++;
			}
			if(bit>k) return false;
		}else{
			bit =0;
		}
	}
	if(day==1) return true;
	return false;
	

}
void Try(int i){
	for(char j='A';j<='B';j++){
		b[i]=j;
		if(i==n){
			if(check()){
				update();
			}
		}
		else{
			Try(i+1);
		}
	}
}
int main(void){
	memset(kq, 0, sizeof(kq));
	cin>>n>>k;
	Try(1);
	inkq();
	return 0;
	
}

