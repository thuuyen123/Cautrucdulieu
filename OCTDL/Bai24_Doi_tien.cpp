#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	int coins[] = {1000, 500, 200, 100, 50, 20, 10};
	int n;

	int t;
	cin>>t;
	while(t--){
		cin>>n;
			int dem=0, i=0;
		while(n){
			while( n > coins[i]){
				int temp = n/coins[i];
				dem+=temp;
				i++;
				n -= temp*coins[i];
			}
		}
		cout<<dem<<endl;
	}
}
