#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main(){
	stack <int> st;
	string a;
	int x;
	
	while(true){
		getline(cin,a);
		if(a=="push"){
		cout<<"Nhap so can push";
		cin>>x;
		st.push(x);cout<<st.top();
		}
		if(a=="show"){
			cout<<st.top();
		}
		if(a=="pop"){
			st.pop();		
		}
	}
}


