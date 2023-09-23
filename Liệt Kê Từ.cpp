#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string x;
	vector<string> v;
	while(ss>>x){
		v.push_back(x);
	}
	for(string x:v){
		string res="";
		x+=".";
		for(int i=0;i<x.size;i++){
			if(isalpha(x[i])){
				res+=x[i];
			}
			else {
				if(res!=""){
					cout<<res<<" ";
					res="";
				}
			}
		}
	}
}