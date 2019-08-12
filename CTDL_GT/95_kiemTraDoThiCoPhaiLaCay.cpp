/*
	NEWPTIT
*/
#include<bits/stdc++.h>

using namespace std;
/* 6 menh de tuong duong
- G la 1 cay
- G khong co chu trinh va co n-1 canh
- G lien thong va co n-1 canh
- G khong co chu trinh va neu bo xung vao 1 canh noi 2 dinh khong ke nhau thi 1 chu trinh xuat hien
- G lien thong va neu bo di 1 canh bat ki thi G mat tinh lien thong
- moi cap dinh trong G noi vs nhau bang 1 duong di duy nhat
*/
vector<vector<int> > adj;
vector<bool> visited;
int N;

bool checkLienThong(){
	for(int i=1;i<=N;i++)
		if(!visited[i])
			return false;
	return true;
}
void DFS(int a){
	stack<int> s;
	s.push(a);
	visited[a]=true;
	while(!s.empty()){
		int t=s.top();s.pop();
		for(int i=0;i<adj.at(t).size();i++)
			if(!visited[adj.at(t).at(i)]){
				visited[adj.at(t).at(i)]=true;
				s.push(t);
				s.push(adj.at(t).at(i));
				break;
			}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N;
		adj.clear();
		adj.resize(N+1);
		visited.resize(N+1);
		for(int i=1;i<=N;i++)
			visited.at(i)=false;
		for(int i=1;i<N;i++){
			int a, b;
			cin>>a>>b;
			adj.at(a).push_back(b);
			adj.at(b).push_back(a);
		}
		DFS(1);
		if(checkLienThong())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

