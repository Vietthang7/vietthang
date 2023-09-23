#include <bits/stdc++.h>

using namespace std;
bool tn(string s){
	int l=0;
	int r=s.size()-1;
	while(l<=r){
		if(s[r]!=s[l]){
			return false;
		}
		++l;
		--r;
	}
	return true;
}
bool cmp(string a,string b){
	return a.size()<b.size();
}
int main(){
	string s;
	vector<string> v;
	set<string> se;
	while(cin>>s){
		if(tn(s) && se.count(s)==0){
			v.push_back(s);
			se.insert(s);
		}
	}
	stable_sort(v.begin(),v.end(),cmp);
	for(string x:v){
		cout<<x<<" ";
	}
}