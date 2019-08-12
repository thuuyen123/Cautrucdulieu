#include<iostream>
#include<stack>
using namespace std;

bool toantu(char x){
	if(x == '+' || x == '-' || x=='*'||x=='/'||x=='^') return true;
	return false;
}

void prefix(string x){
	stack<string> s;
	int n = x.size();
	for(int i = n-1;i>-1;i--){
		if(toantu(x[i])){
			if(!s.empty()){
				string vt1 = s.top(); s.pop();
				string vt2 = s.top(); s.pop();
				string ans = vt1 + vt2 + x[i];
				s.push(ans);
			}
		}
		else{
			s.push(string(1,x[i]));
		}
	
	}
	cout<<s.top()<<endl;
}
int main(){
	int test;
	cin>>test;
	string str;
	while(test>0){
		cin>>str;
		prefix(str);
		test--;
	}
	
}
