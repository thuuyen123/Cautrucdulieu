#include<iostream>
#include<vector>
using namespace std;
// phai dung vector thay

int main(){
//	ios::sync_with_stdio(false);
//	cin.tie();
	vector <int> s;
	string str;
	int n;
	while(cin>>str){
		if(str == "push"){
			cin>>n;
			s.push_back(n);
		}
		else if(str=="pop"){
			s.pop_back();
		}
		else{
			if(s.size()){
				for(int i =0;i<s.size();i++){
				cout<<s[i]<<" ";
				}
				cout<<endl;
			}
			else cout<<"empty"<<endl;
		}
	}
	return 0;
}
