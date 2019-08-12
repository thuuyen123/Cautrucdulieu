#include<bits/stdc++.h>
using namespace std;

int s[300], x, top=-1;
void push(int x){
	top++;
	s[top]=x;
}
int empty(){
	return (top==-1);
}
int pop(){
	top--;
}
int main(){
	string str;
	while(cin>>str){
		if(str == "push"){
			cin>>x;
			push(x);
		}
		else
			if(str == "pop"){
				if(!empty()) pop();
			}
			else{
				if(str=="show"){
					if(empty()) cout<<"empty"<<endl;
					else{
						for(int i =0;i<=top;i++){
							cout<<s[i]<<" ";
						}
						cout<<endl;
					}
				}
			}
			
	}
}
